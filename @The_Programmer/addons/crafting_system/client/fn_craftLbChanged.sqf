/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/ 
disableSerialization;

_display = findDisplay 6940;
_textArea = _display displayCtrl 6942;

if ((lbCurSel 6941) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};  
_itemData = lbData [6941,(lbCurSel 6941)];
if (_itemData isEqualTo "category") exitWith {_textArea ctrlSetStructuredText parseText "";};

_workbench = param [0,objNull,[objNull,""]];
if (_workbench isEqualType "") then {_workbench = objectFromNetId _workbench;};
if (isNull _workbench) exitWith {closeDialog 0;};

_itemData = call compile format ["%1",_itemData];
_itemData params [
    ["_itemType","",[""]],
    ["_itemClass","",[""]]
];

if !(isClass (missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _itemClass)) exitWith {};
_config = missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _itemClass;
_itemGive = getText (_config >> "itemGive");
_itemName = "";

switch (_itemType) do {
    case "vItem" : {
        _itemName = localize (getText (missionConfigFile >> "VirtualItems" >> _itemGive >> "displayName"));
    };

    case "weapon" : {
        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "vehicle" : {
        _vehicleInfo = [_itemGive] call life_fnc_fetchVehInfo;
        _itemName = _vehicleInfo select 3;
    };

    case "backpack" : {
        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "uniform" : {
        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    default {};
};

_requiredList = "";
_data = (_workbench getVariable ["workbench_inventory",[[],0]]) select 0;

{
    if (isClass (missionConfigFile >> "VirtualItems" >> (_x select 0))) then {
    	_hasItem = false;

	    _index = [(_x select 0),_data] call max_craft_fnc_index;
	    if !(_index isEqualTo -1) then {
	    	_value = (_data select _index) select 1;
	    	if (_value >= (_x select 1)) then {_hasItem = true;};
	    };

        if (_requiredList isEqualTo "") then {
        	if (_hasItem) then {
            	_requiredList = format ["%1 :<br/>- <t color='#048200'>[%2] %3</t>",(["STR_REQUIRED_ITEMS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),(_x select 1),localize (getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName"))];
            } else {
            	_requiredList = format ["%1 :<br/>- <t color='#a60e00'>[%2] %3</t>",(["STR_REQUIRED_ITEMS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),(_x select 1),localize (getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName"))];
        	};
        } else {
        	if (_hasItem) then {
            	_requiredList = _requiredList + format ["<br/>- <t color='#048200'>[%1] %2</t>",(_x select 1),localize (getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName"))];
            } else {
            	_requiredList = _requiredList + format ["<br/>- <t color='#a60e00'>[%1] %2</t>",(_x select 1),localize (getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName"))];            	
        	};
        };
    };
} forEach (getArray (_config >> "itemsRequired"));

_money = getNumber (_config >> "moneyRequired");
if (_money > 0) then {
    if (_requiredList isEqualTo "") then {
        if (life_cash >= _money) then {
        	_requiredList = format ["%1 :<br/>- <t color='#048200'>%2€</t>",(["STR_REQUIRED_ITEMS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),[_money] call life_fnc_numberText];
        } else {
        	_requiredList = format ["%1 :<br/>- <t color='#a60e00'>%2€</t>",(["STR_REQUIRED_ITEMS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),[_money] call life_fnc_numberText];
    	};
    } else {
        if (life_cash >= _money) then {
        	_requiredList = _requiredList + format ["<br/>- <t color='#048200'>%1€</t>",[_money] call life_fnc_numberText];
        } else {
        	_requiredList = _requiredList + format ["<br/>- <t color='#a60e00'>%1€</t>",[_money] call life_fnc_numberText];
        };
    };
};

_description = getText (_config >> "description");
_image = getText (_config >> "picture_path");

if !(_description isEqualTo "") then {
    _requiredList = _requiredList + format ["<br/><br/>%1 : %2",(["STR_DESCRIPTION","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),_description];
};

_craftTime = getNumber (_config >> "timeToCraft");
_requiredList = _requiredList + format [(["STR_CRAFTING_TIME","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),_craftTime];

if !(_image isEqualTo "") then {
    _requiredList = format ["<img image='%1' size='4'></img><br/>",_image] + _requiredList;
};

_textArea ctrlSetStructuredText parseText format ["<t size='2'><t align='center'>%1</t></t><br/><t align='center'>%2</t>",(toUpper _itemName),_requiredList];
