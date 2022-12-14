/*
    File: fn_welcomeNotification.sqf
    Author: SEAGINATOR, Connor

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<a color='#00AEDB'><t align='center' size='6' shadow='0'>Urban Sky</a><br /><a color='#00576D'><t align='center' size='4' shadow='0'>Gaming</t></a></t><br /><br />";
_message = _message + "Welcome to Urban Sky!<br /><br />";
_message = _message + "In order to participate you must be connected to Task Force Radio in our TeamSpeak Server. You Can Find it Here:<br />";
_message = _message + "<a color='#00DFFF'>•</a> TS: <a href='144.217.253.115' color='#56BDD6'>144.217.253.115</a><br /><br />";
_message = _message + "Have Discord? Join us here!::<br />";
_message = _message + "<a color='#00DFFF'>•</a> Discord: <a href='discord.io/urbansky' color='#56BDD6'>discord.io/urbansky</a><br /><br />";
_message = _message + "<a color='#00DFFF'>•</a> Website: <a href='https://github.com/AsYetUntitled/Framework/releases' color='#56BDD6'> https://github.com/AsYetUntitled/Framework/releases</a><br /><br />";
_message = _message + "Thanks for joining and enjoy your stay, <a color='#B000FF'>Urban Sky Gaming</a> Staff Team.<br />";

//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
