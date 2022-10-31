/*
    File: fn_injectAction.sqf
    Author: Ilusionz

    Description:
	Handles the animation and script execution for medics when using Morphine on an injured person.
*/

private["_unit"];

_unit = cursorTarget;

//Error checks
if(isNull _unit) exitWith {};
if(!isPlayer _unit) exitWith {};

if(life_inv_morphine != 0) then {
	titleText[localize "STR_NOTF_Morphine","PLAIN"];
	[player,"AinvPknlMstpSnonWrflDnon_medic1"] remoteExec ["life_fnc_animSync",0];
	sleep 2;
	titleText[localize "STR_NOTF_MorphineInj","PLAIN"];
	[player] remoteExec ["life_fnc_morphine",_unit];
	[false,"morphine",1] call life_fnc_handleinv;
	player playMoveNow "AmovPercMstpSnonWnonDnon";
};