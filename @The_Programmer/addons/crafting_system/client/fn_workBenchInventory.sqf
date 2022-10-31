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
if (isNull _workbench) exitWith {closeDialog 0;};

disableSerialization;
if !(alive player) exitWith {closeDialog 0;};
if !((_workbench getVariable ["workbench_in_use_by",player]) isEqualTo player) exitWith {closeDialog 0; hint localize "STR_MISC_VehInvUse";};

_display = findDisplay 6940;
_tInv = _display displayCtrl 6945;
_pInv = _display displayCtrl 6946;
lbClear _tInv;
lbClear _pInv;

_data = _workbench getVariable ["workbench_inventory",[]];
if ((count _data) isEqualTo 0) then {_workbench setVariable ["workbench_inventory",[[],0],true]; _data = [];} else {_data = (_data select 0);};

{
    _val = missionNamespace getVariable [format ["life_inv_%1",getText (missionConfigFile >> "VirtualItems" >> (configName _x) >> "variable")],0];

    if (_val > 0) then {
        _pInv lbAdd format ["[%1] - %2",_val,localize (getText (_x >> "displayName"))];
        _pInv lbSetData [(lbSize _pInv)-1,(configName _x)];
        _icon = getText (_x >> "icon");

        if !(_icon isEqualTo "") then {
            _pInv lbSetPicture [(lbSize _pInv)-1,_icon];
        };
    };
} forEach ("true" configClasses (missionConfigFile >> "VirtualItems"));

{
    _name = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "displayName");
    _val = _x select 1;

    if (_val > 0) then {
        _tInv lbAdd format ["[%1] - %2",_val,(localize _name)];
        _tInv lbSetData [(lbSize _tInv)-1,(_x select 0)];
        _icon = getText (missionConfigFile >> "VirtualItems" >> (_x select 0) >> "icon");

        if !(_icon isEqualTo "") then {
            _tInv lbSetPicture [(lbSize _tInv)-1,_icon];
        };
    };
} forEach _data;
