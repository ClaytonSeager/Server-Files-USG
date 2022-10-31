#include "..\..\script_macros.hpp"
/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine edited Neil Smith / Deadlesszombie of ALRPG

    Description:
    Setups the hud for the player?
*/
disableSerialization;
2 cutRsc ["playerHUD","PLAIN"];

[] spawn
{
    private["_dam"];
    for "_i" from 0 to 1 step 0 do {
        _dam = damage player;
        waitUntil {(damage player) != _dam};
        [] call life_fnc_hudUpdate;
        [] call life_fnc_playerSkins;
    };
};

[] spawn {
	while{true} do {
		sleep 2;
		_FoodE = round(life_hunger);
		_WaterE = round(life_thirst);
		_HealthE = round ((1 - (damage player)) * 100);
		_CashE = [CASH] call life_fnc_numberText;
		_BankE = [BANK] call life_fnc_numberText;
		_UidE = getPlayerUID Player;
		
		LIFEctrl(3301) progressSetPosition (1 - (damage player));
		LIFEctrl(3303) progressSetPosition (_FoodE / 100);
		LIFEctrl(3305) progressSetPosition (_WaterE / 100);
		LIFEctrl(3302) ctrlSetStructuredText parseText format["<t size='.67'>%1</t>",_HealthE];
		LIFEctrl(3304) ctrlSetStructuredText parseText format["<t size='.67'>%1</t>",_FoodE];
		LIFEctrl(3306) ctrlSetStructuredText parseText format["<t size='.67'>%1</t>",_WaterE];
		LIFEctrl(3307) ctrlSetStructuredText parseText format["<t size='.9'>%1</t>",_UidE];
		LIFEctrl(3308) ctrlSetStructuredText parseText format["<t size='.9'>Cash: %1</t>",_CashE];
		LIFEctrl(3309) ctrlSetStructuredText parseText format["<t size='.9'>Bank: %1</t>",_BankE];
		[] call life_fnc_playerSkins; //Up to you if you need this here or not
	};
};