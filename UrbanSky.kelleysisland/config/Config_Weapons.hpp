/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "On Target Gun Store";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 255, 125, "" },
            { "hlc_Pistol_M11A1", "", 1500, 700, "" },
            { "hlc_pistol_P226US", "", 1500, 700, "" },
            { "hlc_rifle_M1903A1", "", 1500, 700, "" },
            { "hlc_pistol_P229R", "", 1500, 700, "" },
            { "hlc_pistol_C96_Wartime", "", 1500, 700, "" },
            { "hlc_pistol_C96_Prussian_Rework", "", 1500, 700, "" },
            { "hlc_pistol_C96_Bolo", "", 1500, 700, "" },
            { "hgun_Pistol_01_F", "", 344, 150, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 991, 455, "" },
            { "hgun_ACPC2_F", "", 700, 350, "" },
            { "SMG_05_F", "", 1025, 512, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 1750, 850, "" },
			{ "CSW_FN57", "", 1100, 550, "" },
            { "sgun_HunterShotgun_01_F", "", 1100, 550, "" },
			{ "tf_anprc152_1","Radio 5km", 49, 0} 
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 20, 10, "" },
            { "hlc_5rnd_3006_1903", "", 20, 10, "" },
            { "hlc_13Rnd_9x19_B_P228", "", 40, 10, "" },
            { "hlc_15Rnd_9x19_B_P226", "", 40, 10, "" },
            { "hlc_10Rnd_763x25_B_C96", "", 40, 10, "" },
            { "hlc_10Rnd_9x19_B_C96", "", 40, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 20, 10, "" },
            { "2Rnd_12Gauge_Pellets", "", 10, 10, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 20, 10, "" }, //Apex DLC
			{ "CSW_20Rnd_57x28_SS190", "", 20, 10, "" },
            { "10Rnd_9x21_Mag", "", 20, 10, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 99, 49, "" },
			{ "HLC_optic_DocterR", "", 225, 112, "" },
			{ "CSW_FN57_silencer2", "", 449, 224, "" },
			{ "CSW_FN57_flashlight_normal_1", "", 34, 17, "" },
            { "optic_ACO_grn_smg", "", 89, 44, "" }
        };
    };
	//Surplus Gun Store - This is a DB license only. 
	class surplus {
		name = "SurPlus Gun Store";
		side = "civ";
		conditions = "";
		items[] = {
			{ "hlc_pistol_P226R_357", "", 999999, 120, "" }
		};
		mags[] = {
			{ "hlc_12Rnd_357SIG_B_P226", "", 999999, 10, "" }
		};
		accs[] = {
			{ "optic_SOS", "", 999999, 49, "" },
            { "KA_ANPEQ15_Black_IR", "", 99999, 50, "" },
            { "hlc_muzzle_556NATO_M42000", "", 850000, 12, "" }
		};
	};		
	
	class gundealer {
        name = "Gun Dealer Store";
        side = "civ";
        conditions = "license_civ_gundealer";
        items[] = {
            { "hgun_Rook40_F", "", 255, 125, "" },
            { "hlc_Pistol_M11A1", "", 1500, 700, "" },
            { "hlc_pistol_P226US", "", 1500, 700, "" },
            { "hlc_pistol_P229R", "", 1500, 700, "" },
            { "KA_SilverBaller", "", 2000, 700, "" },
            { "GEN_2011COMBATMASTER", "", 2500, 700, "" },
            { "hlc_pistol_C96_Wartime", "", 1500, 700, "" },
            { "hlc_pistol_C96_Prussian_Rework", "", 1500, 700, "" },
            { "hlc_pistol_C96_Bolo", "", 1500, 700, "" },
            { "hgun_Pistol_01_F", "", 344, 150, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 991, 455, "" },
            { "hgun_ACPC2_F", "", 700, 350, "" },
            { "SMG_05_F", "", 1025, 512, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 1750, 850, "" },
			{ "CSW_FN57", "", 1100, 550, "" },
			{ "tf_anprc152_1","Radio 5km", 49, 0}
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 20, 10, "" },
            { "hlc_13Rnd_9x19_B_P228", "", 40, 10, "" },
            { "hlc_15Rnd_9x19_B_P226", "", 40, 10, "" },
            { "hlc_10Rnd_763x25_B_C96", "", 40, 10, "" },
            { "hlc_10Rnd_9x19_B_C96", "", 40, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 20, 10, "" },
            { "KA_8Rnd_45ACP_Mag", "", 20, 10, "" },
            { "22RND_M882_STI", "", 20, 10, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 20, 10, "" }, //Apex DLC
			{ "CSW_20Rnd_57x28_SS190", "", 20, 10, "" },
            { "10Rnd_9x21_Mag", "", 20, 10, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 99, 49, "" },
			{ "HLC_optic_DocterR", "", 225, 112, "" },
			{ "CSW_FN57_silencer2", "", 449, 224, "" },
			{ "CSW_FN57_flashlight_normal_1", "", 34, 17, "" },
            { "optic_ACO_grn_smg", "", 89, 44, "" }
        };
    };

    class rebel {
        name = "Blackmarket weapons";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_Katiba_F", "", 20000, 125, "" },
            { "SMG_01_F", "", 20000, 125, "" },
            { "arifle_AK12_F", "", 30000, 125, "" },
            { "hlc_rifle_ACR_Carb_black", "", 30000, 125, "" },
            { "hlc_rifle_M4a1carryhandle", "", 31000, 125, "" },
            { "hlc_rifle_auga2lsw_b", "", 35000, 125, "" },
            { "hlc_rifle_PSG1A1_RIS", "", 35000, 125, "" },
            { "hlc_rifle_m14sopmod", "", 35000, 125, "" },
            { "hlc_rifle_SLR", "", 25000, 125, "" },
            { "hlc_rifle_416D10C", "", 27000, 125, "" },
            { "hlc_wp_m16A1", "", 30000, 125, "" },
            { "hlc_rifle_augsr_b", "", 30000, 125, "" },
            { "hlc_rifle_SG551LB", "", 30000, 125, "" },
            { "sgun_HunterShotgun_01_sawedoff_F", "", 10000, 125, "" },
            { "hlc_rifle_M1903A1", "", 5000, 125, "" },
            { "CSW_LVOA_C_Black", "", 28000, 125, "" },
            { "arifle_SPAR_01_blk_F", "", 26000, 125, "" },
            { "SMG_03C_TR_black", "", 35000, 125, "" },
            { "SMG_03_black", "", 35000, 125, "" },
            { "hlc_pistol_P229R_357Elite", "", 1000, 125, "" },
            { "hgun_Rook40_F", "", 255, 125, "" },
            { "hlc_Pistol_M11A1", "", 1500, 700, "" },
            { "hlc_pistol_P226US", "", 1500, 700, "" },
            { "hlc_pistol_P229R", "", 1500, 700, "" },
            { "hlc_pistol_C96_Wartime", "", 1500, 700, "" },
            { "hlc_pistol_C96_Prussian_Rework", "", 1500, 700, "" },
            { "KA_SilverBaller", "", 2000, 700, "" },
            { "GEN_2011COMBATMASTER", "", 2500, 700, "" },
            { "hlc_pistol_C96_Bolo", "", 1500, 700, "" },
            { "hgun_Pistol_01_F", "", 344, 150, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 991, 455, "" },
            { "hgun_ACPC2_F", "", 700, 350, "" },
            { "SMG_05_F", "", 1025, 512, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 1750, 850, "" },
			{ "CSW_FN57", "", 1100, 550, "" },
			{ "tf_anprc152_1","Radio 5km", 49, 0}
        };
        mags[] = {
            { "30Rnd_762x39_AK12_Mag_F", "", 20, 10, "" },
            { "hlc_20rnd_762x51_b_G3", "", 20, 10, "" },
            { "hlc_5rnd_3006_1903", "", 20, 10, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 20, 10, "" },
            { "hlc_20Rnd_762x51_B_M14", "", 20, 10, "" },
            { "hlc_30Rnd_556x45_B_AUG", "", 20, 10, "" },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 20, 10, "" },
            { "hlc_30rnd_556x45_EPR", "", 20, 10, "" },
            { "CSW_LVOA_30rnd_Mk318_SOST_mag", "", 40, 10, "" },
            { "2Rnd_12Gauge_Pellets", "", 20, 10, "" },
            { "30Rnd_65x39_caseless_green", "", 20, 10, "" },
            { "hlc_20Rnd_762x51_B_fal", "", 20, 10, "" },
            { "30Rnd_556x45_Stanag", "", 20, 10, "" },
            { "50Rnd_570x28_SMG_03", "", 20, 10, "" },
            { "KA_8Rnd_45ACP_Mag", "", 20, 10, "" },
            { "22RND_M882_STI", "", 20, 10, "" },
            { "hlc_10Rnd_357SIG_B_P229", "", 20, 10, "" },
            { "16Rnd_9x21_Mag", "", 20, 10, "" },
            { "hlc_13Rnd_9x19_B_P228", "", 40, 10, "" },
            { "hlc_15Rnd_9x19_B_P226", "", 40, 10, "" },
            { "hlc_10Rnd_763x25_B_C96", "", 40, 10, "" },
            { "hlc_10Rnd_9x19_B_C96", "", 40, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 20, 10, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 20, 10, "" }, //Apex DLC
			{ "CSW_20Rnd_57x28_SS190", "", 20, 10, "" },
            { "10Rnd_9x21_Mag", "", 20, 10, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 99, 49, "" },
			{ "HLC_optic_DocterR", "", 225, 112, "" },
			{ "CSW_FN57_silencer2", "", 449, 224, "" },
			{ "CSW_FN57_flashlight_normal_1", "", 34, 17, "" },
            { "optic_ACO_grn_smg", "", 89, 44, "" },
            { "optic_Holosight_blk_F", "", 100, 0, "" },
            { "optic_MRCO", "", 100, 0, "" },
            { "optic_Arco", "", 100, 0, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "arifle_Mk20C_plain_F", "", 1175, -1 },
            { "arifle_Mk20_plain_F", "", 1475, -1 },
            { "arifle_CTAR_blk_F", "", 1200, -1 },
            { "arifle_CTARS_blk_F", "", 1100, -1 },
			{ "arifle_Katiba_C_F", "", 2100, -1 },
            { "arifle_Katiba_F", "", 2455, -1 }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 30, -1 },	
            { "30Rnd_580x42_Mag_Tracer_F", "", 40, -1 },				
            { "100Rnd_580x42_Mag_Tracer_F", "", 75, -1 },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 40, -1 }	
        };
        accs[] = {
            { "optic_ACO_grn", "", 100, -1 },
            { "optic_Holosight", "", 100, -1 },
            { "optic_Hamr", "", 100, -1 },
            { "optic_aco_smg", "", 100, -1 },
            { "optic_Aco", "", 100, -1 },
            { "optic_Arco", "", 100, -1 },
            { "optic_ERCO_khk_F", "Apex - ERCO", 450, -1 },				
            { "optic_SOS", "", 600, -1 },	
            { "optic_MRD", "", 600, -1 },
            { "bipod_01_F_blk", "", 50, -1 },				
            { "acc_flashlight", "", 45, -1 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Cedar General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 20, 10, "" },
            { "ItemGPS", "", 110, 55, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 88, 44, "" },
            { "ItemWatch", "", 150, 75, "" },
            { "FirstAidKit", "", 25, 12, "" },
			{ "tf_anprc152_1","Radio 5km", 49, 0},
            { "NVGoggles", "", 2772, 1600, "" },
            { "Chemlight_red", "", 1, 0, "" },
            { "Chemlight_yellow", "", 1, 0, "" },
            { "Chemlight_green", "", 1, 0, "" },
            { "Chemlight_blue", "", 1, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };

	//Melee Store
    class Melee {
        name = "Max's Melee Shop";
        side = "civ";
        conditions = "";
        items[] = {
            { "Max_sword", "", 449, 220, "" },
            { "Max_survivor_knife", "", 99, 44, "" },
            { "Max_shovel", "", 20, 10, "" },
            { "Max_pickaxe", "", 30, 15, "" },
            { "max_Knife", "", 75, 37, "" },
            { "Max_hammer", "", 10, 5, "" },
			{ "Max_baseball_bat","", 50, 25},
            { "Max_Axe", "", 40, 20, "" }
        };
        mags[] = {
		{ "Max_Hit_medium","", 0, 0},
        { "Max_Hit_hard","", 0, 0}
		};
        accs[] = {};
    };

    class f_station_store {
        name = "Cedar fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 20, 10, "" },
            { "ItemGPS", "", 110, 55, "" },
            { "ItemMap", "", 10, 5, "" },
            { "ItemCompass", "", 88, 44, "" },
            { "ItemWatch", "", 150, 75, "" },
            { "FirstAidKit", "", 25, 12, "" },
			{ "tf_anprc152_1","Radio 5km", 49, 0},
            { "NVGoggles", "", 2772, 1600, "" },
            { "Chemlight_red", "", 1, 0, "" },
            { "Chemlight_yellow", "", 1, 0, "" },
            { "Chemlight_green", "", 1, 0, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Rangefinder", "", 0, 0, "call life_coplevel >= 1" },
            { "ItemGPS", "", 0, 0, "call life_coplevel >= 1" },
            { "FirstAidKit", "", 0, 0, "call life_coplevel >= 1" },
            { "NVGoggles_INDEP", "", 0, 0, "call life_coplevel >= 1" },

            { "SmokeShellYellow", "", 100, 100, "call life_coplevel >= 10" },
            { "SmokeShell", "", 100, 100, "call life_coplevel >= 10" },
            { "SmokeShellRed", "", 100, 100, "call life_coplevel >= 10" },
            { "SmokeShellOrange", "", 100, 100, "call life_coplevel >= 10" },
            { "SmokeShellBlue", "", 100, 100, "call life_coplevel >= 10" },
            { "SmokeShellGreen", "", 100, 100, "call life_coplevel >= 10" },

            { "HandGrenade_Stone", $STR_W_items_Flashbang, 150, 75, "call life_coplevel >= 6" },
			{ "hlc_rifle_M4", "", 0, 0, "call life_coplevel >= 3" },
			{ "CSW_M26C", "", 0, 0, "call life_coplevel >= 1" },
			{ "CSW_M870", "", 0, 0, "call life_coplevel >= 6" },
			{ "hlc_rifle_mk18mod0", "", 0, 0, "call life_coplevel >= 3" },
			{ "hlc_pistol_P226R_Combat", "", 0, 0, "call life_coplevel >= 6" },
			{ "tf_anprc152_1","Radio 5km", 0, 0, "call life_coplevel >= 1"},
            { "hgun_Pistol_heavy_01_F", "", 0, 0, "call life_coplevel >= 3" },
            { "SMG_02_ACO_F", "", 0, 0, "call life_coplevel >= 2" },
			{ "tf_rt1523g_big_rhs","Long range radio ", 0, 0, "call life_coplevel >= 6" }, 
            { "arifle_MX_F", "", 0, 0, "call life_coplevel >= 5" },
            { "hgun_ACPC2_F", "", 0, 0, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 0, 0, "call life_coplevel >= 3" },
			{ "hlc_rifle_STG58F", "", 0, 0, "call life_coplevel >= 6" },
			{ "CSW_FN57_Ballistic_Shield", "", 0, 0, "call life_coplevel >= 6" },
			{ "hlc_rifle_awcovert_BL", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_416D10_st6", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_smg_mp5a3", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_416D145", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_416D165", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_416D20", "", 0, 0, "call life_coplevel >= 10" },
            { "CSW_FN57", "", 0, 0, "call life_coplevel >= 4" },
			{ "hlc_pistol_P226R_357", "", 0, 0, "call life_coplevel >= 6" },

            { "SMG_03C_TR_black", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03C_TR_camo", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03C_TR_hex", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03C_TR_khaki", "", 0, 0, "call life_coplevel >= 9" },

            { "SMG_03_black", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03_camo", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03_hex", "", 0, 0, "call life_coplevel >= 9" },
            { "SMG_03_khaki", "", 0, 0, "call life_coplevel >= 9" },
            
            { "CSW_M870_Sawed_Off", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_hk53RAS", "", 0, 0, "call life_coplevel >= 10" },
            { "hlc_rifle_m203", "", 0, 0, "call life_coplevel >= 10" }
        };
        mags[] = {
			{"CSW_M870_8Rnd_buck", "", 100, 100, "call life_coplevel >= 6" },
			{"CSW_M870_8Rnd_slug", "", 100, 100, "call life_coplevel >= 6", ""},
			{"CSW_M870_8Rnd_stun", "", 100, 100,"call life_coplevel >= 6", ""},
			{"CSW_Taser_Probe_Mag", "", 0, 0, "call life_coplevel >= 1"},
			{"hlc_5rnd_300WM_FMJ_AWM", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30rnd_556x45_S", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30rnd_556x45_S_PMAG", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30rnd_556x45_S_L5", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30rnd_556x45_EPR", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30Rnd_9x19_GD_MP5", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30Rnd_9x19_B_MP5", "", 0, 0, "call life_coplevel >= 10"},
            {"hlc_30Rnd_9x19_SD_MP5", "", 0, 0, "call life_coplevel >= 10"},
            { "16Rnd_9x21_Mag", "", 100, 100, "call life_coplevel >= 6" },
            { "11Rnd_45ACP_Mag", "", 100, 100, "call life_coplevel >= 3" },
			{ "hlc_15Rnd_9x19_JHP_P226", "", 100, 100, "call life_coplevel >= 6" },
			{ "hlc_30rnd_556x45_M_PMAG", "", 100, 100, "call life_coplevel >= 1" },
			{ "hlc_30rnd_556x45_EPR_PMAG", "", 100, 100, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 100, 100, "call life_coplevel >= 5" },
            { "30Rnd_9x21_Mag", "", 100, 100, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 100, 100, "call life_coplevel >= 3" },
			{ "hlc_30rnd_556x45_EPR", "", 100, 100, "call life_coplevel >= 3" },
			{ "hlc_15Rnd_9x19_B_P226", "", 100, 100, "call life_coplevel >= 3" },
			{ "CSW_20Rnd_57x28_SS190", "", 100, 100, "call life_coplevel >= 4" },
			{ "hlc_20Rnd_762x51_B_fal", "", 100, 100, "call life_coplevel >= 3" },
			{ "hlc_12Rnd_357SIG_B_P226", "", 100, 100, "call life_coplevel >= 3" },
			{ "hlc_12Rnd_357SIG_JHP_P226", "", 100, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 100, 100, "call life_coplevel >= 3" }, //Apex DLC
            
            { "hlc_30rnd_556x45_b_HK33", "", 100, 100, "call life_coplevel >= 10" },
            { "hlc_30rnd_556x45_EPR_HK33", "", 100, 100, "call life_coplevel >= 10" },
            { "hlc_30rnd_556x45_SPR_HK33", "", 100, 100, "call life_coplevel >= 10" },
            { "hlc_30rnd_556x45_SOST_HK33", "", 100, 100, "call life_coplevel >= 10" },
            { "hlc_30rnd_556x45_t_HK33", "", 100, 100, "call life_coplevel >= 10" },
            { "50Rnd_570x28_SMG_03", "", 100, 100, "call life_coplevel >= 10" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 100, 0, "" },
			{ "CSW_FN57_Shield_P", "", 100, 0, "" },
            { "optic_MRD", "", 100, 0, "" },
            { "acc_flashlight_pistol", "", 100, 0, "" },//Pistol Flashlight
            { "acc_flashlight", "", 100, 0, "" },
            { "optic_Holosight", "", 100, 0, "" },
			{ "hlc_acc_TLR1", "", 100, 0, "" },
            { "optic_Arco", "", 100, 0, "" },
            { "optic_hamr", "", 100, 0, "" },//SWAT/COMMAND
            { "optic_MRCO", "", 100, 0, "" },
            { "KA_ANPEQ15_Black_IR", "", 100, 0, "" },
            { "hlc_muzzle_556NATO_KAC", "", 100, 0, "" },
            { "hlc_optic_ATACR_Offset", "", 100, 0, "" },
            { "optic_Holosight_blk_F", "", 100, 0, "" },
            { "hlc_acc_Surefiregrip", "", 100, 0, "" },
            { "muzzle_snds_L", "", 100, 0, "" },
			{ "hlc_optic_HensoldtZO_Hi_Docter_2D", "", 100, 0, "" },
			{ "HLC_optic_VTAC", "", 100, 0, "" },
            { "muzzle_snds_H", "", 100, 0, "" },

            { "optic_LRPS", "", 100, 0, "" },
            { "optic_LRPS_ghex_F", "", 100, 0, "" },
            { "optic_LRPS_tna_F", "", 100, 0, "" },
            
            { "optic_SOS", "", 100, 0, "" },
            { "optic_SOS_khk_F", "", 100, 0, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
        { "ItemGPS", "", 0, 0, "" },
        { "Rangefinder", "", 0, 0, "" },
        { "Medikit", "", 0, 0, "" },
        { "NVGogglesB_grn_F", "", 1200, 600, "" },
		{ "hgun_Pistol_Signal_F", "", 0, 0, "" },
        { "I_UavTerminal", "", 0, 0, "" },
		{ "tf_anprc152_1","Radio 5km", 0, 0}

    };
        mags[] = {
		{"6Rnd_GreenSignal_F", "", 0, 0, "" },
		{"6Rnd_RedSignal_F", "", 0, 0, "" }	
	};
        accs[] = {};
    };
};
