/*
	File: fn_insureCar.sqf
	Author: Guit0x "Lintox"
	Description:
	Insure a vehicle from the garage.
*/
params [
	["_vid", -1, [0]],
	["_pid", "", [""]],
	["_unit", objNull, [objNull]],
	["_insurancePrice", 0, [0]]
];

// _vid = [_this,0,-1,[0]] call BIS_fnc_param;
// _pid = [_this,1,"",[""]] call BIS_fnc_param;
// _unit = [_this,2,ObjNull,[ObjNull]] call BIS_fnc_param;
// _insurancePrice = [_this,3,0,[0]] call BIS_fnc_param;

private _query = format["UPDATE vehicles SET insure='1' WHERE pid='%1' AND id='%2'", _pid, _vid];
waitUntil { !DB_Async_Active; };
private _thread = [_query, 1] call DB_fnc_asyncCall;