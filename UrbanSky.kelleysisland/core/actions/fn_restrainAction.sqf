#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Restrains the target.
*/
_this spawn max_restrain_fnc_unrestrain;

_unit setVariable ["playerSurrender", false, true];
_unit setVariable ["restrained", true, true];
[player] remoteExec ["life_fnc_restrain", _unit];
[0, "STR_NOTF_Restrained", true, [_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast", west];
