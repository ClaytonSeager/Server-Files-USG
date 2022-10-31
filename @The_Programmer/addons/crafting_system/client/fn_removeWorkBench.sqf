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
_workbench = cursorObject;
if (isNull _workbench) exitWith {};

_workbenchCraft = _workbench getVariable ["craft_in_progress",[]];
if !(_workbenchCraft isEqualTo []) then {hint (["STR_WARNING_CRAFT_PROGRESS","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);};

_action = [
    (["STR_REMOVE_WORKBENCH_TEXT","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),
    (["STR_REMOVE_WORKBENCH_HEADER","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),
    (["STR_VALIDATE","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),
    (["STR_CANCEL","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize)
] call BIS_fnc_guiMessage;

if !(_action) exitWith {};

disableSerialization;
"progressBar" cutRsc ["life_progress","PLAIN"];
_ui = uiNamespace getVariable "life_progress";
_upp = (["STR_REMOVE_PROGRESS_TEXT","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
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

_id = _workbench getVariable ["workbench_id",-1];
[_id] remoteExec ["max_craft_fnc_deleteWorkbench",2];

max_craft_all_workbenchs deleteAt (max_craft_all_workbenchs find _workbench);
publicVariable "max_craft_all_workbenchs";

deleteVehicle _workbench;
hint (["STR_SUCCESS_REMOVE_WORKBENCH","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);

_item = getText (missionConfigFile >> "Max_Settings_Craft" >> "item_workbench");
[true,_item,1] call life_fnc_handleInv;
