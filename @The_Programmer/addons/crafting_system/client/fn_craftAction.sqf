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
_workbench = param [0,objNull,[objNull,""]];
if (_workbench isEqualType "") then {_workbench = objectFromNetId _workbench;};
if (isNull _workbench) exitWith {closeDialog 0;};

disableSerialization;
_dialog = findDisplay 6940;
if ((lbCurSel 6941) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};

_itemData = lbData [6941,(lbCurSel 6941)];
if (_itemData isEqualTo "category") exitWith {hint localize "STR_ISTR_SelectItemFirst";};
_itemData = call compile format ["%1",_itemData];

_itemType = _itemData select 0;
_itemClass = _itemData select 1;
_allMaterial = true;

if !(alive player) exitWith {closeDialog 0;};
if !((_workbench getVariable ["workbench_in_use_by",player]) isEqualTo player) exitWith {closeDialog 0; hint localize "STR_MISC_VehInvUse";};
if !((_workbench getVariable ["craft_in_progress",[]]) isEqualTo []) exitWith {hint (["STR_CRAFT_IN_PROGRESS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};
_config = missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _itemClass;
_money = getNumber (_config >> "moneyRequired");

{
    _ctrl = _x select 0;
    _num = _x select 1;

    _data = (_workbench getVariable ["workbench_inventory",[[],0]]) select 0;
    _index = [_ctrl,_data] call max_craft_fnc_index;
    if (_index isEqualTo -1) exitWith {_allMaterial = false;};

    _value = (_data select _index) select 1;
    if (_num > _value) exitWith {_allMaterial = false;};
} forEach (getArray (_config >> "itemsRequired"));

if !(_allMaterial) exitWith {hint (["STR_DONT_HAVE_ALL_ITEMS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};
if (life_cash < _money) exitWith {hint (["STR_DONT_HAVE_MONEY","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};
_itemGive = getText (_config >> "itemGive");
_exit = false;
_itemName = "";

switch (_itemType) do { 
    case "backpack" : {
        if !((backpack player) isEqualTo "") exitWith {
            hint (["STR_ALREADY_HAVE_BACKPACK","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
            _exit = true;
        };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "uniform" : {
        if !((uniform player) isEqualTo "") exitWith {
            hint (["STR_ALREADY_HAVE_UNIFORM","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
            _exit = true;
        };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "weapon" : {
        // if ((player canAdd _itemGive) || (currentWeapon player != "")) exitWith {
        //     hint (["STR_NOT_ENOUGHT_SPACE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
        //     _exit = true;
        // };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "vItem" : {
        _weight = [_itemGive] call life_fnc_itemWeight;

        if ((life_carryWeight + _weight) > life_maxWeight) exitWith {
            hint (["STR_NOT_ENOUGHT_SPACE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
        };

        _itemName = localize (getText (missionConfigFile >> "VirtualItems" >> _itemGive >> "displayName"));
    };

    case "vehicle" : {
        _itemName = getText (configFile >> "CfgVehicles" >> _itemGive >> "displayName");
    };

    default {_exit = true;};
};

if (_exit) exitWith {};

{
    _ctrl = _x select 0;
    _num = _x select 1;

    _old = _workbench getVariable ["workbench_inventory",[[],0]];
    _data = _old select 0;
    _index = [_ctrl,_data] call max_craft_fnc_index;

    if !(_index isEqualTo -1) then {
        _value = (_data select _index) select 1;

        if (_num isEqualTo _value) then {
            _data deleteAt _index;
        } else {
            _data set [_index,[_ctrl,(_value - _num)]];
        };

        _weight = ([_ctrl] call life_fnc_itemWeight) * _num;
        _workbench setVariable ["workbench_inventory",[_data,((_old select 1) - _weight)],true];
    };
} forEach (getArray (_config >> "itemsRequired"));

if (_money > 0) then {
    life_cash = life_cash - _money;
    [0] call SOCK_fnc_updatePartial;
};

_workbench setVariable ["craft_in_progress",[_itemType,_itemClass,time,player],true];
[_workbench] spawn max_craft_fnc_workBenchInventory;
[_workbench] spawn max_craft_fnc_workBenchProgressBar;
