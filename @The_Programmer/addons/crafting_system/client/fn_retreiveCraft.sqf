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
_workbench = param [0,objNull,[objNull]];
if (isNull _workbench) exitWith {};

_workbenchCraft = _workbench getVariable ["craft_in_progress",[]];
if (_workbenchCraft isEqualTo []) exitWith {};

_workbenchCraft params [
    ["_itemType","",[""]],
    ["_craftType","",[""]],
    ["_timeStart",0,[0]],
    ["_owner",objNull,[objNull]]
];

_config = missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _craftType;
if !(isClass _config) exitWith {};

_totalTime = getNumber (_config >> "timeToCraft");
_itemGive = getText (_config >> "itemGive");

if ((time - _timeStart) < _totalTime) exitWith {};
if !(player isEqualTo _owner) exitWith {};

_exit = false;
_isVehicle = false;
_itemName = "";

switch (_itemType) do { 
    case "backpack" : {
        if ((backpack player) isEqualTo "") then {
            player addBackpack _itemGive;
        } else {
            hint (["STR_ALREADY_HAVE_BACKPACK","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
            _exit = true;
        };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "uniform" : {
        if ((uniform player) isEqualTo "") then {
            player addUniform _itemGive;
        } else {
            hint (["STR_ALREADY_HAVE_UNIFORM","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
            _exit = true;
        };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "weapon" : {
        if (player canAdd _itemGive) then {
            player addItem _itemGive;
        } else {
            // Old logic
            // player addWeapon _itemGive;

            // New logic (Sgt. Cuddles) [Add weapon to ground instead of inventory]
            private _holder = createVehicle ["weaponHolderSimulated", getPosATL player, [], 0, "can_collide"];
            _holder addWeaponCargoGlobal [_itemGive, 1];
        };

        _itemInfo = [_itemGive] call life_fnc_fetchCfgDetails;
        _itemName = _itemInfo select 1;
    };

    case "vItem" : {
        _diff = [_itemGive,1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

        if (_diff >= 1) then {
            [true,_itemGive,_diff] call life_fnc_handleInv;
        } else {
            hint localize "STR_NOTF_InvFull";
            _exit = true;
        };

        _itemName = localize (getText (missionConfigFile >> "VirtualItems" >> _itemGive >> "displayName"));
    };

    case "vehicle" : {
        [(getPlayerUID player),playerSide,_itemGive,0] remoteExec ["max_craft_fnc_craftVehicle",2];

        _itemName = getText (configFile >> "CfgVehicles" >> _itemGive >> "displayName");
        _isVehicle = true;
    };

    default {_exit = true;};
};

if (_exit) exitWith {
    {
        _ctrl = _x select 0;
        _num = _x select 1;

        _old = _workbench getVariable ["workbench_inventory",[[],0]];
        _data = _old select 0;
        _index = [_ctrl,_data] call max_craft_fnc_index;

        if (_index isEqualTo -1) then {
            _data pushBack [_ctrl,_num];
        } else {
            _val = (_data select _index) select 1;
            _data set [_index,[_ctrl,(_val + _num)]];
        };

        _weight = ([_ctrl] call life_fnc_itemWeight) * _num;
        _workbench setVariable ["workbench_inventory",[_data,((_old select 1) + _weight)],true];
    } forEach (getArray (_config >> "itemsRequired"));

    _money = getNumber (_config >> "moneyRequired");
    if (_money > 0) then {
        life_cash = life_cash + _money;
        [0] call SOCK_fnc_updatePartial;
    };

    if !(isNull (findDisplay 6940)) then {
        [_workbench] spawn max_craft_fnc_workBenchInventory;
    };
};

_workbench setVariable ["craft_in_progress",[],true];

if (_isVehicle) then {
    hint format [(["STR_SUCCESS_CRAFT_VEHICLE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),_itemName];
} else {
    hint format [(["STR_SUCCESS_CRAFT","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),_itemName];
};

if !(isNull (findDisplay 6940)) then {
    [_workbench] spawn max_craft_fnc_workBenchInventory;
};
