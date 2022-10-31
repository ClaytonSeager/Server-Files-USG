/*
	Author:Victor Angielczyk
	Edited by: Coram
*/

//Close inventory
closeDialog 0;

hint "Shit I hope this isn't Sweet N' Low!";
sleep 3;
hint "Oh shit its not!";
sleep 3;
["Cocaine"] spawn mav_ttm_fnc_addExp;

//Activate
"chromAberration" ppEffectEnable true;
"radialBlur" ppEffectEnable true;
enableCamShake true;

//faster animations
player setAnimSpeedCoef 1.25;
    
for "_i" from 0 to 44 do
{
    "chromAberration" ppEffectAdjust [random 0.25,random 0.25,true];
    "chromAberration" ppEffectCommit 1;   
    "radialBlur" ppEffectAdjust  [random 0.02,random 0.02,0.15,0.15];
    "radialBlur" ppEffectCommit 1;
    addcamShake[random 3, 1, random 3];
    sleep 1;
};

//Stop
"chromAberration" ppEffectAdjust [0,0,true];
"chromAberration" ppEffectCommit 5;
"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

//animations normalized
player setAnimSpeedCoef 1;

//Deactivate
"chromAberration" ppEffectEnable false;
"radialBlur" ppEffectEnable false;
resetCamShake;
