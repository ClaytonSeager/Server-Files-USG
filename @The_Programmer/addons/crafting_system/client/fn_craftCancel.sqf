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
if (isNull _workbench) exitWith {};

_workbenchCraft = _workbench getVariable ["craft_in_progress",[]];
if (_workbenchCraft isEqualTo []) exitWith {closeDialog 0;};

_owner = _workbenchCraft select 3;
if !(_owner isEqualTo player) exitWith {hint (["STR_CANNOT_CANCEL_CRAFT","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};

_itemType = _workbenchCraft select 0;
_craftType = _workbenchCraft select 1;
_config = missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _craftType;

_workbench setVariable ["craft_in_progress",[],true];

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

hint (["STR_CRAFT_CANCELLED","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
uiSleep 1;
[_workbench] spawn max_craft_fnc_workBenchInventory;
