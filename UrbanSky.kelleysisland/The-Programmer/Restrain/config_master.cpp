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
#define true 1
#define false 0

class Max_Settings_Restrain {
    disable_sprint = true;

    str_no_object_to_handcuff = "You don't have the required object to handcuff";
    str_no_object_to_uncuff = "You don't have the required object to detach the handcuffs";

    automatic_unrestrain_time = -1; // in seconds | -1 = disable the automatic unrestrain 

    /* USE SHIFT + R TO HANDCUFF AND UNCUFF IN COP AND IN CIVIL */

    civilian_object_to_handcuff = "ziptie"; //object required to handcuff as a civilian  | "" = nothing
    cop_object_to_handcuff = ""; //object required to handcuff as a cop | "" = nothing

    civilian_object_to_uncuff = ""; //object required to uncuff as a civilian  | "" = nothing
    cop_object_to_uncuff = ""; //object required to uncuff as a cop  | "" = nothing

    allow_restrain_cop = true; //allows or not the handcuffing of a police officer 
    civilian_can_restrain = false; //allow civilian to handcuff an another person 
};
