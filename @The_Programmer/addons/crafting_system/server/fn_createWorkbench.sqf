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

max_craft_all_workbenchs pushBack _workbench;
publicVariable "max_craft_all_workbenchs";

_position = getPosATL _workbench;
_owner = _workbench getVariable ["workbench_owner",""];
_dir = [(vectorDir _workbench),(vectorUp _workbench)];

_query = format ["INSERT INTO crafting_stations (owner, position, dir) VALUES ('%1','%2','%3')",_owner,_position,_dir];
[_query,1] call DB_fnc_asyncCall;

_query = format ["SELECT id FROM crafting_stations WHERE owner='%1' AND position='%2'",_owner,_position];
_result = [_query,2] call DB_fnc_asyncCall;

_id = _result select 0;
_workbench setVariable ["workbench_id",_id,true];
