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
if !(alive player) exitWith {closeDialog 0;};
if !((_workbench getVariable ["workbench_in_use_by",player]) isEqualTo player) exitWith {closeDialog 0; hint localize "STR_MISC_VehInvUse";};

if ((lbCurSel 6945) isEqualTo -1) exitWith {hint localize "STR_Global_NoSelection";};
_ctrl = lbData [6945,(lbCurSel 6945)];

_num = ctrlText 6947;
if !([_num] call TON_fnc_isnumber) exitWith {hint localize "STR_MISC_WrongNumFormat";};

_num = parseNumber _num;
if (_num < 1) exitWith {hint localize "STR_MISC_Under1";};

_old = _workbench getVariable ["workbench_inventory",[[],0]];
_data = _old select 0;

_index = [_ctrl,_data] call max_craft_fnc_index;
if (_index isEqualTo -1) exitWith {};
_value = (_data select _index) select 1;

if (_num > _value) exitWith {hint (["STR_NOT_ENOUGHT_WORKBENCH","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize)};
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;

if (_num isEqualTo 0) exitWith {hint localize "STR_NOTF_InvFull"};
_weight = ([_ctrl] call life_fnc_itemWeight) * _num;

if ([true,_ctrl,_num] call life_fnc_handleInv) then {
    if (_num isEqualTo _value) then {
        _data deleteAt _index;
    } else {
        _data set [_index,[_ctrl,(_value - _num)]];
    };
    _workbench setVariable ["workbench_inventory",[_data,((_old select 1) - _weight)],true];
    [_workbench] spawn max_craft_fnc_workBenchInventory;
    [_workbench] spawn max_craft_fnc_craftLbChanged;
} else {
    hint localize "STR_NOTF_InvFull";
};
