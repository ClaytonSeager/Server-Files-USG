/*
	File: fn_pushVehicle.sqf
*/

private _veh = cursorTarget;
if (isNull _veh) exitWith {};

private _vel = velocity _veh;
private _dir = direction player;

life_interrupted = false;

if ((_veh isKindOf "Car") || {_veh isKindOf "Ship"} || {_veh isKindOf "Air"}) then {
	life_action_inUse = true;

	private _displayName = getText(configFile >> "CfgVehicles" >> (typeOf _veh) >> "displayName");
	private _upp = format["Pushing %1", _displayName];

	//Setup our progress bar.
	disableSerialization;
	5 cutRsc ["life_progress", "PLAIN"];
	private _ui = uiNameSpace getVariable "life_progress";
	private _progress = _ui displayCtrl 38201;
	private _pgText = _ui displayCtrl 38202;
	_pgText ctrlSetText format["%2 (1%1)...", "%", _upp];
	_progress progressSetPosition 0.01;
	private _cP = 0.01;

	while {true} do {
		if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
			[player, "AinvPknlMstpSnonWnonDnon_medic_1", true] remoteExecCall ["life_fnc_animSync", 0];
			player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
			player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
		};
		uiSleep 0.27;
		_cP = _cP + 0.06;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["%3 (%1%2)...", round(_cP * 100), "%", _upp];
		if (_cP >= 1) exitWith {};
		if (!alive player) exitWith {};
		if (player != vehicle player) exitWith {};
		if (life_interrupted) exitWith {};
	};

	life_action_inUse = false;
	5 cutText ["", "PLAIN"];
	player playActionNow "stop";

	if (life_interrupted) exitWith {
		life_interrupted = false;
		titleText[localize "STR_NOTF_ActionCancel", "PLAIN"];
		life_action_inUse = false;
	};
	if (player != vehicle player) exitWith { titleText [localize "STR_NOTF_ActionInVehicle","PLAIN"]; };

	_veh allowdamage false;
	_speed = 8.5;
	_veh setVelocity [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2)];
	titleText [format ["You have pushed the vehicle!", _displayName], "PLAIN"];
	uiSleep 1;
	_veh allowDamage true;
	player setFatigue ((getFatigue player) + 0.55);
};