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
params [
    ["_object",objNull,[objNull]],
    ["_type",-1,[0]]
];

if ((isNull _object) || (_type isEqualTo -1)) exitWith {};

switch (_type) do {
    case 1 : {
        _object addAction [(["STR_OPEN_WORKBENCH","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),max_craft_fnc_openWorkBench,"",0,false,false,"",'(isNull (cursorObject getVariable ["workbench_in_use_by",objNull]))'];
    };

    case 2 : {
        _object addAction [(["STR_REMOVE_WORKBENCH_ADDACTION","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize),max_craft_fnc_removeWorkBench,"",0,false,false,"",'(isNull (cursorObject getVariable ["workbench_in_use_by",objNull]))'];
    };

    default {};
};
