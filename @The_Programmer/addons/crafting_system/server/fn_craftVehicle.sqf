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
    ["_uid","",[""]],
    ["_side",sideUnknown,[sideUnknown]],
    ["_classname","",[""]],
    ["_color",-1,[0]]
];

if ((_uid isEqualTo "") || (_side isEqualTo sideUnknown) || (_classname isEqualTo "")) exitWith {};

_side = switch (_side) do {
    case west:{"cop"};
    case civilian: {"civ"};
    case independent: {"med"};
    default {"Error"};
};

_type = switch (true) do {
    case (_classname isKindOf "Car"): {"Car"};
    case (_classname isKindOf "Air"): {"Air"};
    case (_classname isKindOf "Ship"): {"Ship"};
    default {"Car"};
};

_plate = round (random (1000000));

[_uid,_side,_type,_classname,_color,_plate] call DB_fnc_insertVehicle;
uiSleep 2;

_query = format ["UPDATE vehicles SET active='0' WHERE pid='%1' AND plate='%2'",_uid,_plate];
[_query,1] call DB_fnc_asyncCall;
