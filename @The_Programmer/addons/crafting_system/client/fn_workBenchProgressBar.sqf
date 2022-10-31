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
_workbenchCraft = _workbench getVariable ["craft_in_progress",[]];

_display = findDisplay 6940;
_progress = _display displayCtrl 6943;
_pgText = _display displayCtrl 6944;

_alreadyStarted = true;
if !(missionNamespace getVariable ["workBenchProgressBar",false]) then {
    workBenchProgressBar = true;
    _alreadyStarted = false;
};

if !(_workbenchCraft isEqualTo []) then {
    _itemType = _workbenchCraft select 0;
    _craftType = _workbenchCraft select 1;
    _timeSpent = time - (_workbenchCraft select 2);
    _owner = _workbenchCraft select 3;

    _config = missionConfigFile >> "Max_Settings_Craft" >> "crafts" >> _itemType >> _craftType;
    _totalTime = getNumber (_config >> "timeToCraft");
    _text = getText (_config >> "progress_text");
    _itemsRequired = getArray (_config >> "itemsRequired");
    _cP = _timeSpent / _totalTime;
    _timer = _totalTime / 100;

    _progress progressSetPosition _cP;
    _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_text];

    for "_i" from 0 to 1 step 0 do {
        if (_cP >= 1) exitWith {};
        uiSleep _timer;

        _cP = _cP + 0.01;
        _progress progressSetPosition _cP;
        _pgText ctrlSetText format ["%3 (%1%2)...",round(_cP * 100),"%",_text];

        if ((isNull (findDisplay 6940)) && (!(player isEqualTo _owner))) exitWith {};
        if ((player distance _workbench > 5) && (player isEqualTo _owner)) exitWith {};
        if ((_workbench getVariable ["craft_in_progress",[]]) isEqualTo []) exitWith {};
    };

    _progress progressSetPosition 0;
    _pgText ctrlSetText "";
    if ((_workbench getVariable ["craft_in_progress",[]]) isEqualTo []) exitWith {};

    if !(_alreadyStarted) then {
        if (((player distance _workbench) > 5) && (player isEqualTo _owner)) exitWith {
            hint (["STR_STAY_NEAR","Max_Settings_Craft","Craft_Localization"] call theprogrammer_core_fnc_localize);
            _workbench setVariable ["craft_in_progress",[],true];

            {
                _ctrl = _x select 0;
                _num = _x select 1;

                _old = _workbench getVariable ["workbench_inventory",[[],0]];
                _data = _old select 0;
                _index = [_ctrl,_data] call max_craft_fnc_index;

                if (_index isEqualTo -1) then {
                    _data pushBack [_ctrl,_num];
                } else {
                    _val = (_data select _index) select 1;
                    _data set [_index,[_ctrl,(_val + _num)]];
                };

                _weight = ([_ctrl] call life_fnc_itemWeight) * _num;
                _workbench setVariable ["workbench_inventory",[_data,((_old select 1) + _weight)],true];
            } forEach _itemsRequired;

            _money = getNumber (_config >> "moneyRequired");
            if (_money > 0) then {
                life_cash = life_cash + _money;
                [0] call SOCK_fnc_updatePartial;
            };
        };

        if (player isEqualTo _owner) then {
            [_workbench] spawn max_craft_fnc_retreiveCraft;
        };

        workBenchProgressBar = false;
    };
} else {
    workBenchProgressBar = false;
};
