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
_workbench = cursorObject;
if (isNull _workbench) exitWith {};

if (dialog) exitWith {};
if !(isNull (_workbench getVariable ["workbench_in_use_by",objNull])) exitWith {hint localize "STR_MISC_VehInvUse";};
_config = missionConfigFile >> "Max_Settings_Craft";

createDialog "Maxence_Craft";
disableSerialization;

_workbench setVariable ["workbench_in_use_by",player,true];
_display = findDisplay 6940;
(_display displayCtrl 6949) ctrlSetText format ["%1\main.paa",(getText (_config >> "textures_base_path"))];

_craftsList = _display displayCtrl 6941;

{
    _typeConfigPath = _x;
    _itemType = configName _typeConfigPath;

    if (isClass _typeConfigPath) then {
        for "_i" from 0 to (count _typeConfigPath)-1 do {
            _configPath = _typeConfigPath select _i;
            _itemClass = configName _configPath;

            if ((isClass _configPath) && (_itemType in ["vItem","weapon","vehicle","backpack","uniform"])) then {
                _condition = getText (_configPath >> "condition");
                _condition_result = if (_condition isEqualTo "") then {true} else {call compile _condition};

                if (!isNil "_condition_result") then {
                    if (_condition_result isEqualType true) then {
                        if (_condition_result isEqualTo true) then {
                            _itemResult = getText (_configPath >> "itemGive");
                            _itemName = "";
                            _icon = "";

                            switch (_itemType) do {
                                case "vItem" : {
                                    _itemConfig = missionConfigFile >> "VirtualItems" >> _itemResult;
                                    _itemName = localize (getText (_itemConfig >> "displayName"));
                                    _icon = getText (_itemConfig >> "icon");
                                };

                                case "weapon" : {
                                    _itemInfo = [_itemResult] call life_fnc_fetchCfgDetails;
                                    _itemName = _itemInfo select 1;
                                    _icon = _itemInfo select 2;
                                };

                                case "vehicle" : {
                                    _vehicleInfo = [_itemResult] call life_fnc_fetchVehInfo;
                                    _itemName = _vehicleInfo select 3;
                                    _icon = _vehicleInfo select 2;
                                };

                                case "backpack" : {
                                    _itemInfo = [_itemResult] call life_fnc_fetchCfgDetails;
                                    _itemName = _itemInfo select 1;
                                    _icon = _itemInfo select 2;
                                };

                                case "uniform" : {
                                    _itemInfo = [_itemResult] call life_fnc_fetchCfgDetails;
                                    _itemName = _itemInfo select 1;
                                    _icon = _itemInfo select 2;
                                };

                                default {};
                            };

                            _craftsList lbAdd format ["- %1",_itemName];
                            _craftsList lbSetData [(lbSize _craftsList)-1,str [_itemType,_itemClass]];
                            if !(_icon isEqualTo "") then {
                                _craftsList lbSetPicture [(lbSize _craftsList)-1,_icon];
                            };
                        };
                    };
                };
            } else {
                if ((_itemClass isEqualTo "category_display_name") && ((count _typeConfigPath) > 1)) then {
                    if ((lbSize _craftsList) > 0) then {
                        _craftsList lbAdd "";
                        _craftsList lbSetData [(lbSize _craftsList)-1,"category"];
                    };

                    _craftsList lbAdd format ["%1 :",([(getText (_configPath)),"Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize)];
                    _craftsList lbSetData [(lbSize _craftsList)-1,"category"];
                };
            };
        };
    };
} forEach ("true" configClasses (_config >> "crafts"));

_craftsList ctrlAddEventHandler ["LBSelChanged",format ["[""%1""] spawn max_craft_fnc_craftLbChanged;",netId (_workbench)]];
(_display displayCtrl 6950) buttonSetAction format ["[""%1""] spawn max_craft_fnc_workBenchTakeItem;",netId (_workbench)];
(_display displayCtrl 6951) buttonSetAction format ["[""%1""] spawn max_craft_fnc_workBenchStoreItem;",netId (_workbench)];
(_display displayCtrl 6952) buttonSetAction format ["[""%1""] spawn max_craft_fnc_craftAction;",netId (_workbench)];
(_display displayCtrl 6953) buttonSetAction format ["[""%1""] spawn max_craft_fnc_craftCancel;",netId (_workbench)];

[_workbench] spawn max_craft_fnc_workBenchInventory;
[_workbench] spawn max_craft_fnc_workBenchProgressBar;

waitUntil {(isNull (findDisplay 6940))};
_workbench setVariable ["workbench_in_use_by",objNull,true];
