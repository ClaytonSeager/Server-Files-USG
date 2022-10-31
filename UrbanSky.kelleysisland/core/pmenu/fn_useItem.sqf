#include "..\..\script_macros.hpp"
/*
    File: fn_useItem.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Main function for item effects and functionality through the player menu.
*/
disableSerialization;
if ((lbCurSel 2005) isEqualTo -1) exitWith {hint localize "STR_ISTR_SelectItemFirst";};
private _item = CONTROL_DATA(2005);
private _edible = M_CONFIG(getNumber, "VirtualItems", _item, "edible");

if !(_edible isEqualTo -1) exitWith {
    if ([false, _item, 1] call life_fnc_handleInv) then {
        private _sum = life_hunger + _edible;

        life_hunger = (_sum max 5) min 100; //never below 5 or above 100

        [] call life_fnc_p_updateMenu;
        [] call life_fnc_hudUpdate;
    };
};

switch (true) do {
    #include "..\..\The-Programmer\Craft\scripts\useItemSelect.sqf"
    #include "..\..\The-Programmer\EffetsEcran\scripts\useItemSelect.sqf"
    case (_item in ["waterBottle", "coffee", "redgull", "pepsi", "drPepper"]): {
        if ([false, _item, 1] call life_fnc_handleInv) then {
            life_thirst = 100;
            if (LIFE_SETTINGS(getNumber, "enable_fatigue") isEqualTo 1) then {player setFatigue 0;};
            if (_item isEqualTo "redgull" && {LIFE_SETTINGS(getNumber, "enable_fatigue") isEqualTo 1}) then {
                [] spawn {
                    life_redgull_effect = time;
                    titleText[localize "STR_ISTR_RedGullEffect", "PLAIN"];
                    player enableFatigue false;
                    waitUntil {!alive player || ((time - life_redgull_effect) > (3 * 60))};
                    player enableFatigue true;
                };
            };
        };
    };

    case (_item isEqualTo "boltcutter"): {
        [cursorObject] spawn life_fnc_boltcutter;
        closeDialog 0;
    };

    case (_item isEqualTo "blastingcharge"): {
        player reveal fed_bank;
        (group player) reveal fed_bank;
        [cursorObject] spawn life_fnc_blastingCharge;
        closeDialog 0;
    };

	case (_item isEqualTo "codeCracker"): {
        player reveal fed_bank_1;
        (group player) reveal fed_bank_1;
        [cursorObject] spawn life_fnc_codeCracker;
        closeDialog 0;
    };

    case (_item isEqualTo "defusekit"): {
        [cursorObject] spawn life_fnc_defuseKit;
        closeDialog 0;
    };

    case (_item isEqualTo "storagesmall"): {
        [false] call life_fnc_storageBox;
    };

    case (_item isEqualTo "storagebig"): {
        [true] call life_fnc_storageBox;
    };

    case (_item isEqualTo "spikeStrip"): {
        if (!isNull life_spikestrip) exitWith {hint localize "STR_ISTR_SpikesDeployment"; closeDialog 0};
        if ([false, _item, 1] call life_fnc_handleInv) then {
            [] spawn life_fnc_spikeStrip;
            closeDialog 0;
        };
    };

    case (_item isEqualTo "fuelFull"): {
        if !(isNull objectParent player) exitWith {hint localize "STR_ISTR_RefuelInVehicle"};
        [] spawn life_fnc_jerryRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "fuelEmpty"): {
        [] spawn life_fnc_jerryCanRefuel;
        closeDialog 0;
    };

    case (_item isEqualTo "lockpick"): {
        [] spawn life_fnc_lockpick;
        closeDialog 0;
    };
	
	case (_item isEqualTo "heroin_processed"): {
    if(([false,_item,1] call life_fnc_handleInv)) then
	{
        [] spawn life_fnc_heroin;
		};
    };
	
	case (_item isEqualTo "cocaine_processed") : {
	if(([false,_item,1] call life_fnc_handleInv)) then
	{
		[] spawn life_fnc_cocaine;
		};
	};
	
	case (_item isEqualTo "Lude") : {
	if(([false,_item,1] call life_fnc_handleInv)) then
	{
		[] spawn life_fnc_Lude;
		};
	};
	
	case (_item isEqualTo "heroin_processed") : {
	if(([false,_item,1] call life_fnc_handleInv)) then 
	{
		[] spawn life_fnc_heroin;
		};
	};
	
	case (_item isEqualTo "marijuana") : {
	if(([false,_item,1] call life_fnc_handleInv)) then
	{
		[] spawn life_fnc_marijuana;
		};
	};
	
	case (_item isEqualTo "lsd") : {
	if(([false,_item,1] call life_fnc_handleInv)) then
	{
		[] spawn life_fnc_LSD;
		};
	};
	
	
	case (_item isEqualTo "morphine"):
	{
		[] spawn life_fnc_morphine;
	};

	case (_item in ["bandages", "batmanBandaid", "cuddlesBandaid"]):
	{
		[_item] spawn life_fnc_bandages;
	};

    default {
        hint localize "STR_ISTR_NotUsable";
    };
};

[] call life_fnc_p_updateMenu;
[] call life_fnc_hudUpdate;
