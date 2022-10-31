/*
    Author: Vincent Imètre
    Altis DEV: https://altisdev.com/user/vincent-im%C3%A8tre
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
case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_cannabis"))) : {
    if (getNumber (missionConfigFile >> "Max_Settings_EffetsEcran" >> "remove_item_on_use") == 1) then {
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn theprogrammer_effects_fnc_cannabis;
        };
    } else {
        [] spawn theprogrammer_effects_fnc_cannabis;
    };
};

case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_heroine"))) : {
    if (getNumber (missionConfigFile >> "Max_Settings_EffetsEcran" >> "remove_item_on_use") == 1) then {
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn theprogrammer_effects_fnc_heroine;
        };
    } else {
        [] spawn theprogrammer_effects_fnc_heroine;
    };
};

case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_cocaine"))) : {
    if (getNumber (missionConfigFile >> "Max_Settings_EffetsEcran" >> "remove_item_on_use") == 1) then {
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn theprogrammer_effects_fnc_cocaine;;
        };
    } else {
        [] spawn theprogrammer_effects_fnc_cocaine;;
    };
};

case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_alcool"))) : {
    if (getNumber (missionConfigFile >> "Max_Settings_EffetsEcran" >> "remove_item_on_use") == 1) then {
        if ([false,_item,1] call life_fnc_handleInv) then {
            [] spawn theprogrammer_effects_fnc_alcool;
        };
    } else {
        [] spawn theprogrammer_effects_fnc_alcool;
    };
};

case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_control_alcool"))) : {
    [] spawn theprogrammer_effects_fnc_alcoolTest;
};

case (_item in (getArray (missionConfigFile >> "Max_Settings_EffetsEcran" >> "item_control_drugs"))) : {
    [] spawn theprogrammer_effects_fnc_drogueTest;
};