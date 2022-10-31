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
waitUntil {(missionNameSpace getVariable ["life_server_isReady",false])};

_config = missionConfigFile >> "Max_Settings_Craft";
if (isNil "max_craft_all_workbenchs") then {
    max_craft_all_workbenchs = [];
};

_query = "SELECT id, owner, position, dir FROM crafting_stations";
_workbench = [_query,2,true] call DB_fnc_asyncCall;

if ((getNumber (_config >> "save_workbench_positions")) isEqualTo 0) then {
    {
        [(_x select 0)] remoteExec ["max_craft_fnc_deleteWorkbench",2];
    } forEach _workbench;
} else {
    _className = getText (_config >> "3d_object_workbench");

    {
        _position = call compile format ["%1",(_x select 2)];
        _dir = call compile format ["%1",(_x select 3)];

        _workbench = createVehicle [_className,[0,0,999],[],0,"NONE"];
        waitUntil {!isNil "_workbench" && {!isNull _workbench}};

        _workbench allowDamage false;
        _workbench setPosATL _position;
        _workbench setVectorDirAndUp _dir;

        _posX = _position select 0;
        _posY = _position select 1;
        _posZ = _position select 2;
        _currentPos = getPosATL _workbench;
        _fixX = (_currentPos select 0) - _posX;
        _fixY = (_currentPos select 1) - _posY;
        _fixZ = (_currentPos select 2) - _posZ;
        _workbench setPosATL [(_posX - _fixX), (_posY - _fixY), (_posZ - _fixZ)];
        _workbench setVectorDirAndUp _dir;

        _workbench setVariable ["workbench_id",(_x select 0),true];
        _workbench setVariable ["workbench_inventory",[[],0],true];
        _workbench setVariable ["workbench_in_use_by",objNull,true];
        _workbench setVariable ["craft_in_progress",[],true];
        _workbench setVariable ["workbench_owner",(_x select 1),true];

        clearWeaponCargoGlobal _workbench;
        clearMagazineCargoGlobal _workbench;
        clearItemCargoGlobal _workbench;
        clearBackpackCargoGlobal _workbench;

        max_craft_all_workbenchs pushBack _workbench;
    } foreach _workbench;
};

publicVariable "max_craft_all_workbenchs";
