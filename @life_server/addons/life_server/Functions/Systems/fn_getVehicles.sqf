#include "\life_server\script_macros.hpp"
/*
    File: fn_getVehicles.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Sends a request to query the database information and returns vehicles.
*/
private ["_pid","_side","_type","_unit","_ret","_tickTime","_queryResult"];
_pid = [_this,0,"",[""]] call BIS_fnc_param;
_side = [_this,1,sideUnknown,[west]] call BIS_fnc_param;
_type = [_this,2,"",[""]] call BIS_fnc_param;
_unit = [_this,3,objNull,[objNull]] call BIS_fnc_param;

// Error checks
if (_pid isEqualTo "" || _side isEqualTo sideUnknown || _type isEqualTo "" || isNull _unit) exitWith {
    if (!isNull _unit) then {
        [[]] remoteExec ["life_fnc_impoundMenu", (owner _unit)];
    };
};

_unit = owner _unit;
_side = switch (_side) do {
    case west:{ "cop" };
    case civilian: { "civ" };
    case independent: { "med" };
    default { "Error" };
};

if (_side == "Error") exitWith {
    [[]] remoteExec ["life_fnc_impoundMenu", (owner _unit)];
};

_query = format ["SELECT id, side, classname, type, pid, alive, active, plate, color, insure FROM vehicles WHERE pid='%1' AND alive='1' AND entreprise_id='0' AND active='0' AND side='%2' AND type='%3'", _pid, _side, _type];
diag_log format["DIAG_LOG _query: %1", _query];

_tickTime = diag_tickTime;
_queryResult = [_query, 2, true] call DB_fnc_asyncCall;

diag_log format["DIAG_LOG _queryResult: %1", _queryResult];

if (EXTDB_SETTING(getNumber, "DebugMode") isEqualTo 1) then {
    diag_log "------------- Client Query Request -------------";
    diag_log format ["QUERY: %1", _query];
    diag_log format ["Time to complete: %1 (in seconds)", (diag_tickTime - _tickTime)];
    diag_log format ["Result: %1", _queryResult];
    diag_log "------------------------------------------------";
};

if (_queryResult isEqualType "") exitWith { [[]] remoteExec ["life_fnc_impoundMenu", (owner _unit)]; };
[_queryResult] remoteExec ["life_fnc_impoundMenu", _unit];
