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
if !(isNil "The_programmer_initialised") exitWith {};
(findDisplay 46) displayAddEventHandler ["KeyDown", "
    if (missionNamespace getVariable ['craft_placing',false]) then {
        if ((_this select 1) isEqualTo 57) then {
            [] spawn max_craft_fnc_placeEtabliAction;
        };
    };
"];

if !(isNil "max_craft_all_workbenchs") then {
    {
        if !(isNull _x) then {
            [_x,1] remoteExecCall ["max_craft_fnc_workBenchAddaction",player];
            if ((_x getVariable ["workbench_owner",""]) isEqualTo (getPlayerUID player)) then {
                [_x,2] remoteExecCall ["max_craft_fnc_workBenchAddaction",player];
            };
        };
    } forEach max_craft_all_workbenchs;
};
