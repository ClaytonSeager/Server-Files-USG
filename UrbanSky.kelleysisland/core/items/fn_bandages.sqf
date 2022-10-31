#include "..\..\script_macros.hpp"

params["_vItem"];

if (vehicle player != player) exitWith { hint "You cannot apply bandages in a vehicle."; };
if (life_inv_bandages < 1) exitWith { hint "You do not have any morphine.."; };

closeDialog 0;
life_action_inUse = true;
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
waitUntil { animationState player != "ainvpknlmstpsnonwnondnon_medic_1"; };
life_action_inUse = false;

hint "You applied the bandage, you are starting to feel better.";
[false, _vItem, 1] call life_fnc_handleInv;
enableCamShake true;

for "_health" from 0 to 29 do {
	while {damage player > 0.1} do {
		private _damage = damage player;
		_damage = _damage - 0.05;
		player setDamage (_damage);
		[] call life_fnc_hudUpdate;
		uiSleep 2;
	};
};

resetCamShake;