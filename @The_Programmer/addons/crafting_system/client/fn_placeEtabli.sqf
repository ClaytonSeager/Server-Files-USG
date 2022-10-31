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
_config = missionConfigFile >> "Max_Settings_Craft";

_exit = false;
if ((getNumber (_config >> "place_only_in_house")) isEqualTo 1) then {
    if !([player] call life_fnc_playerInBuilding) exitWith {_exit = true;};
};
if (_exit) exitWith {hint (["STR_MUST_PLACE_IN_HOUSE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};

if (missionNamespace getVariable ["craft_placing",false]) exitWith {};

craft_placing = true;
closeDialog 0;

_item = getText (_config >> "item_workbench");
[false,_item,1] call life_fnc_handleInv;

disableSerialization;
"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_upp = (["STR_BUILD_PROGRESS_TEXT","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format ["%2 (1%1)...","%",_upp];
_progress progressSetPosition 0.01;
_cP = 0.01;
life_action_inUse = true;

for "_i" from 0 to 1 step 0 do {
    if (animationState player != "AinvPknlMstpSnonWnonDnon_medic_1") then {
        [player,"AinvPknlMstpSnonWnonDnon_medic_1",true] remoteExecCall ["life_fnc_animSync",-2];
        player switchMove "AinvPknlMstpSnonWnonDnon_medic_1";
        player playMoveNow "AinvPknlMstpSnonWnonDnon_medic_1";
    };
    uiSleep  0.1;
    _cP = _cP + 0.01;
    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_upp];
    if (_cP >= 1) exitWith {};
};

"progressBar" cutText ["","PLAIN"];
life_action_inUse = false;
player playActionNow "stop";

_class = getText (_config >> "3d_object_workbench");
_workbench = _class createVehicle [0,0,0];

craft_placingObj = _workbench;
_attachPos = [0.16, 3, ((boundingBoxReal _workbench) select 1) select 2];
[_workbench] remoteExecCall ["life_fnc_simDisable",0];
_workbench attachTo [player,_attachPos];

clearWeaponCargoGlobal _workbench;
clearMagazineCargoGlobal _workbench;
clearItemCargoGlobal _workbench;
clearBackpackCargoGlobal _workbench;

titleText [(["STR_PLACE_KEY","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),"PLAIN"];
