#include "..\script_macros.hpp"
/*
    File: init.sqf
    Author: Bryan "Tonic" Boardwine
    Description:
    Master client initialization file
*/
diag_log "----------------------------------------------------------------------------------------------------";
diag_log "--------------------------------- Starting Altis Life Client Init ----------------------------------";
diag_log format["------------------------------------------ Version %1 -------------------------------------------",(LIFE_SETTINGS(getText,"framework_version"))];
diag_log "----------------------------------------------------------------------------------------------------";

0 cutText[localize "STR_Init_ClientSetup","BLACK FADED",99999999];
_timeStamp = diag_tickTime;

waitUntil {!isNull (findDisplay 46)};
[] call compile preprocessFileLineNumbers "core\clientValidator.sqf";
enableSentences false;

diag_log "[Life Client] Initialization Variables";
[] call compile preprocessFileLineNumbers "core\configuration.sqf";
diag_log "[Life Client] Variables initialized";

diag_log "[Life Client] Setting up Eventhandlers";
[] call life_fnc_setupEVH;
diag_log "[Life Client] Eventhandlers completed";

diag_log "[Life Client] Setting up user actions";
[] call life_fnc_setupActions;
diag_log "[Life Client] User actions completed";

diag_log "[Life Client] Waiting for the server to be ready...";
waitUntil {!isNil "life_server_isReady" && {!isNil "life_server_extDB_notLoaded"}};

if (life_server_extDB_notLoaded) exitWith {
    0 cutText [localize "STR_Init_ExtdbFail","BLACK FADED",99999999];
};

waitUntil {life_server_isReady};
diag_log "[Life Client] Server loading completed ";
0 cutText [localize "STR_Init_ServerReady","BLACK FADED",99999999];

[] call SOCK_fnc_dataQuery;
waitUntil {life_session_completed};
0 cutText[localize "STR_Init_ClientFinish","BLACK FADED",99999999];

[] spawn life_fnc_escInterupt;

switch (playerSide) do {
    case west: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_cop");
        [] call life_fnc_initCop;
    };
    case civilian: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_civ");
        [] call life_fnc_initCiv;
    };
    case independent: {
        life_paycheck = LIFE_SETTINGS(getNumber,"paycheck_med");
        [] call life_fnc_initMedic;
    };
};
CONSTVAR(life_paycheck);

player setVariable ["restrained", false, true];
player setVariable ["Escorting", false, true];
player setVariable ["transporting", false, true];
player setVariable ["playerSurrender", false, true];
player setVariable ["realname", profileName, true];
player setVariable ["ziptied",false,true];
player setVariable ["blindfolded",false,true];
player setVariable ["gagged",false,true];

diag_log "[Life Client] Past Settings Init";
[] execFSM "core\fsm\client.fsm";
diag_log "[Life Client] Executing client.fsm";

(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call life_fnc_keyHandler"];
[player, life_settings_enableSidechannel, playerSide] remoteExecCall ["TON_fnc_manageSC", RSERV];

[] call life_fnc_hudSetup;
[] spawn life_fnc_survival;

[] spawn theprogrammer_core_fnc_clientInit;

0 cutText ["", "BLACK IN"];

[] spawn {
    for "_i" from 0 to 1 step 0 do {
        waitUntil {(!isNull (findDisplay 49)) && {(!isNull (findDisplay 602))}}; // Check if Inventory and ESC dialogs are open
        (findDisplay 49) closeDisplay 2; // Close ESC dialog
        (findDisplay 602) closeDisplay 2; // Close Inventory dialog
    };
};

addMissionEventHandler ["EachFrame", life_fnc_playerTags];
addMissionEventHandler ["EachFrame", life_fnc_revealObjects];

if (LIFE_SETTINGS(getNumber,"enable_fatigue") isEqualTo 0) then {player enableFatigue false;};
if (LIFE_SETTINGS(getNumber,"pump_service") isEqualTo 1) then {
    [] execVM "core\fn_setupStationService.sqf";
};

life_fnc_RequestClientId = player;
publicVariableServer "life_fnc_RequestClientId"; 

/*
    https://feedback.bistudio.com/T117205 - disableChannels settings cease to work when leaving/rejoining mission
    Universal workaround for usage in a preInit function. - AgentRev
    Remove if Bohemia actually fixes the issue.
*/
{
    _x params [["_chan",-1,[0]], ["_noText","false",[""]], ["_noVoice","false",[""]]];

    _noText = [false,true] select ((["false","true"] find toLower _noText) max 0);
    _noVoice = [false,true] select ((["false","true"] find toLower _noVoice) max 0);

    _chan enableChannel [!_noText, !_noVoice];

} forEach getArray (missionConfigFile >> "disableChannels");

if (life_HC_isActive) then {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteExec ["HC_fnc_wantedProfUpdate", HC_Life];
} else {
    [getPlayerUID player, player getVariable ["realname", name player]] remoteExec ["life_fnc_wantedProfUpdate", RSERV];
};

diag_log "----------------------------------------------------------------------------------------------------";
diag_log format ["               End of Altis Life Client Init :: Total Execution Time %1 seconds ",(diag_tickTime - _timeStamp)];
diag_log "----------------------------------------------------------------------------------------------------";



/*
    ====================
    TFAR Bullshit checks
    ====================
*/

if (isNil "TFAR_fnc_isTeamSpeakPluginEnabled") exitWith {
    titleText ["Task Force Radio is not running on your computer. Please re-sync and retry!", "PLAIN"];
	if (player getVariable "taskfr") then { player setVariable ["taskfr", false, true]; };
};

private _TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
if (!(_TFenabled)) then {
	while {!([] call TFAR_fnc_isTeamSpeakPluginEnabled)} do {
		titleText ["Please enable Task Force Radio in your TS3 Plugins! || TS3 -> Settings -> Plugins", "PLAIN"];
		uiSleep 2;
		if (player getVariable "taskfr") then { player setVariable ["taskfr", false, true]; };
	};
};

Dvid_TFEnabled = true;
Dvid_onTsServer = "Urban Sky Gaming" == (call TFAR_fnc_getTeamSpeakServerName);
Dvid_onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
titleText ["Task Force Radio loaded succesfully", "PLAIN"];

[] spawn {
	while {true} do {
        private isAdmin = false;
        if (!(isNil "life_adminlevel")) then {
            private _adminlvl = life_adminlevel call BIS_fnc_parseNumber;
            if (_adminlvl > 0) then { isAdmin = true; };
        };
        
        private _TFenabled = [] call TFAR_fnc_isTeamSpeakPluginEnabled;
        if ((!(_TFenabled)) && (Dvid_TFEnabled)) then {
            if (!(isAdmin)) then {
                titleText ["Please enable Task Force Radio in your TS3 Plugins! || TS3 -> Settings -> Plugins", "PLAIN"];
                Dvid_TFEnabled = false;
            };
            if (player getVariable "taskfr") then {
                player setVariable ["taskfr", false, true];
            };
        };
        
        private _onTsServer = "UrbanSkyGaming" == (call TFAR_fnc_getTeamSpeakServerName);
        if (!(_onTsServer)) then {
            if (!(isAdmin)) then {
                titleText ["Please join the teamspeak server! Address: 144.217.253.115", "PLAIN"];
                Dvid_onTsServer = false;
            };
            if (player getVariable "taskfr") then {
                player setVariable ["taskfr",false,true];
            };
        } else {
            if (!(Dvid_onTsServer)) then {
                if (!(isAdmin)) then {
                    titleText ["TS server check completed. Welcome!", "PLAIN"];
                    Dvid_onTsServer = true;
                };
                if (!(player getVariable "taskfr")) then {
                    player setVariable ["taskfr", true, true];
                };
            };
        };
        
        private _onChannel = "TaskForceRadio" == (call TFAR_fnc_getTeamSpeakChannelName);
        if (!(_onChannel)) then {
            if (!(isAdmin)) then {
                titleText ["Please reload the plugin to join the TFR channel || Settings -> Plugins -> Reload All", "PLAIN"];
                Dvid_onChannel = false;
            };
            if (player getVariable "taskfr") then {
                player setVariable ["taskfr", false, true];
            };
        } else {
            if (!(Dvid_onChannel)) then {
                titleText ["TS channel check completed. Welcome!", "PLAIN"];
                Dvid_onChannel = true;
                if (!(player getVariable "taskfr")) then {
                    player setVariable ["taskfr", true, true];
                };
            };
        };
        
        if ((_TFenabled) && (!(Dvid_TFEnabled))) then {
            titleText ["Plugin enabled, welcome back!", "PLAIN"];
            Dvid_TFEnabled = true;
            if (!(player getVariable "taskfr")) then {
                player setVariable ["taskfr", true, true];
            };
        };
        
        uiSleep 2;	
    };
};