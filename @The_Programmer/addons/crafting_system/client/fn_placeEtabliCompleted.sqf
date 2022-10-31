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
if (isNull _workbench) exitWith {};

_config = missionConfigFile >> "Max_Settings_Craft";
_exit = false;

if ((getNumber (_config >> "place_only_in_house")) isEqualTo 1) then {
    if (!([player] call life_fnc_playerInBuilding) || !([_workbench] call life_fnc_playerInBuilding)) exitWith {
        _exit = true;
        deleteVehicle _workbench;

        _item = getText (_config >> "item_workbench");
        [true,_item,1] call life_fnc_handleInv;
    };
};
if (_exit) exitWith {titleText [(["STR_MUST_PLACE_IN_HOUSE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),"PLAIN"];};

_workbench setVariable ["workbench_inventory",[[],0],true];
_workbench setVariable ["workbench_in_use_by",objNull,true];
_workbench setVariable ["craft_in_progress",[],true];
_workbench setVariable ["workbench_owner",(getPlayerUID player),true];

{
    [_workbench,1] remoteExecCall ["max_craft_fnc_workBenchAddaction",_x];
} forEach playableUnits;

[_workbench,2] remoteExecCall ["max_craft_fnc_workBenchAddaction",player];
[_workbench] remoteExec ["max_craft_fnc_createWorkbench",2];

titleText [(["STR_SUCCESS_PLACE_WORKBENCH","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),"PLAIN"];
