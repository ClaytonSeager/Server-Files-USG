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
if !(missionNamespace getVariable ["craft_placing",false]) exitWith {};
if (isNull craft_placingObj) exitWith {};

_class = getText (missionConfigFile >> "Max_Settings_Craft" >> "3d_object_workbench");
if !((typeOf craft_placingObj) isEqualTo _class) exitWith {};

_workbench = craft_placingObj;
if (((getPos _workbench) select 2) > 0.1) then {
    titleText [(["STR_CANNOT_PLACE_IN_STAIRS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),"PLAIN"];
};

detach _workbench;
[_workbench,true] remoteExecCall ["life_fnc_simDisable",0];
_workbench setPosATL [((getPosATL _workbench) select 0),((getPosATL _workbench) select 1),(((getPosATL _workbench) select 2) + 0.7)];
_workbench allowDamage false;

[_workbench] call max_craft_fnc_placeEtabliCompleted;
craft_placing = false;
craft_placingObj = objNull;
