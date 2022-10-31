#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\tshirt.jpg"];
            };
			if (uniform player isEqualTo "U_BG_Guerrilla_6_1") then {
				player setObjectTextureGlobal [0, "textures\christmas5.jpg"];
			};
			if (uniform player isEqualTo "U_B_HeliPilotCoveralls") then {
				player setObjectTextureGlobal [0, "textures\civ\RonnieRadke.jpg"];
			};
			if(backpack player == "tf_anprc155") then {
				unitBackpack player setObjectTextureGlobal [0, ""];
			};
			if(backpack player == "B_Carryall_oli") then {
				unitBackpack player setObjectTextureGlobal [0, ""];
			};
			if (uniform player isEqualTo "U_I_CombatUniform") then {
				player setObjectTextureGlobal [0, "textures\civ\YellowGang.jpg"];
			};
		
			if (uniform player isEqualTo "U_I_CombatUniform_shortsleeve") then {
				player setObjectTextureGlobal [0, "textures\civ\lv.jpg"];
			};
        };
    };

    case west: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            _skinName = "textures\cop_uniform.jpg";
            if (LIFE_SETTINGS(getNumber,"cop_extendedSkins") isEqualTo 1) then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\cop_uniform_",(FETCH_CONST(life_coplevel)),".jpg"] joinString "";
                };
            };
            player setObjectTextureGlobal [0, _skinName];
        };
		
		if(backpack player == "B_Carryall_cbr") then {
				unitBackpack player setObjectTextureGlobal [0, ""];
		};
		
		if(backpack player == "tf_anprc155") then {
				unitBackpack player setObjectTextureGlobal [0, ""];
		};
		
		if (uniform player isEqualTo "U_B_HeliPilotCoveralls") then {
			player setObjectTextureGlobal [0, "textures\civ\RonnieRadke.jpg"];        
		};
    };

    case independent: {
        if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "textures\medic_uniform.jpg"];
        };
		
		if (uniform player isEqualTo "U_B_CombatUniform_mcam") then {
            player setObjectTextureGlobal [0, "textures\EMSSKINS\EMSUNIFORM.paa"];
        };
		
		if ((backpack player) == "B_Kitbag_sgg") then {
			    (unitbackpack player) setObjectTextureGlobal [0,"textures\EMSSKINS\EMSBACKPACK.paa"];
		};
        
			if(backpack player == "tf_anprc155") then {
				unitBackpack player setObjectTextureGlobal [0, ""];
		};
    };
};
