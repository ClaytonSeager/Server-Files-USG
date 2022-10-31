#include "..\..\script_macros.hpp"


closeDialog 0;

hint "You popped a lemon.";

sleep 3;

"radialBlur" ppEffectEnable true;
enableCamShake true;

for "_i" from 0 to 59 do
{  
	"radialBlur" ppEffectAdjust  [random 0.06,random 0.06,0.5,0.5];
	"radialBlur" ppEffectCommit 1;
	addcamShake[random 3, 1, random 3];
	sleep 1;
};


"radialBlur" ppEffectAdjust  [0,0,0,0];
"radialBlur" ppEffectCommit 5;
sleep 6;

"radialBlur" ppEffectEnable false;
resetCamShake;
