/*File: fn_drinkwhiskey.sqf author:[midgetgrimm] drinkypoo*/
closeDialog 0;
hintSilent parseText format["Your BAC is now<br/> <t size='1.4'><t color='#FF0000'>%1</t></t>",[life_drink] call life_fnc_numberText];
["Whiskey"] spawn mav_ttm_fnc_addExp;
uiSleep 4;
"chromAbberation" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
"colorCorrections" ppEffectEnable true;
enableCamShake true;
player setVariable["inDrink",true,true];

for "_i" from 0 to 89 do
{
    if(life_drink > 0.12) then {+

		"chromAberration" ppEffectAdjust[0,random 0.15, false];
		"chromAberration" ppEffectCommit 1;   
		"radialBlur" ppEffectAdjust  [random 0.1,random 0.1,0.3,0.3];
		"radialBlur" ppEffectCommit 1;
		"colorCorrections" ppEffectAdjust[ 0.44, 0.76, 0.7, [0.1, -0.57, 0, 0.05],[1.8, 1.3, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
		"colorCorrections" ppEffectCommit 1;
		addcamShake[random 4, 2, random 4];
		uiSleep 1;
	} else {
		"chromAberration" ppEffectAdjust [random 0.05,random 0.05,true];
		"chromAberration" ppEffectCommit 1;   
		"radialBlur" ppEffectAdjust  [random 0.01,random 0.01,0.5,0.5];
		"radialBlur" ppEffectCommit 1;
		addcamShake[random 4, 2, random 4];
		uiSleep 1;
	};
};
sleep 15;
[] spawn life_fnc_pinkelAnim;
if (life_drink > 0.22) then {
			titleText [localize "STR_MISC_DrunkBlackOut","BLACK OUT"];
			player playMoveNow "Incapacitated";
			//titleText[localize "STR_MISC_DrunkBlackOut","BLACK IN"];
			uiSleep 15;
			player playMoveNow "AinjPpneMstpSnonWrflDnon_rolltoback";
			uiSleep 10;
			life_drink = 0;
			titleText[localize "STR_MISC_DrunkBlackOut1","PLAIN"];
			player playMoveNow "amovppnemstpsraswrfldnon";
			[0,format[localize "STR_MISC_StPubIntox",profileName]] remoteExec ["life_fnc_broadcast",0];
			[getPlayerUID player,profileName,"390"] remoteExec ["life_fnc_wantedAdd",0];
			["Drunk"] spawn mav_ttm_fnc_addExp;
			
};
	//Stop effects
	player setVariable["inDrink",false,true];
	"chromAberration" ppEffectAdjust [0,0,true];
	"chromAberration" ppEffectCommit 5;
	"colorCorrections" ppEffectAdjust[ 1, 1, 0, [0, 0, 0, 0],[1.8, 1.8, 0.3, 0.7],[0.2, 0.59, 0.11, 0]];
	"colorCorrections" ppEffectCommit 5;
	"radialBlur" ppEffectAdjust  [0,0,0,0];
	"radialBlur" ppEffectCommit 5;
	uiSleep 6;

	//Deactivate ppEffects
	"chromAberration" ppEffectEnable false;
	"radialBlur" ppEffectEnable false;
	"colorCorrections" ppEffectEnable false;
	resetCamShake;
	sleep 0.1;
	"ColorCorrections" ppEffectEnable true; 
	"ColorCorrections" ppEffectAdjust [0.9, 0.9, 0, [0, 0.1, 0.25, -0.14], [1, 1, 1, 1.26], [0.15, 0.09, 0.09, 0.0]]; 
	"ColorCorrections" ppEffectCommit 0;

	if(life_drink != 0) then {life_drink = life_drink - 0.02;};