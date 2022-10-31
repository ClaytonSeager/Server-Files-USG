/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_BG_Guerrilla_6_1", "", 100, "" },
			{ "TRYK_U_B_RED_T_BG_BR", "", 100, "" },
			{ "TRYK_SUITS_BR_F", "", 1200, "" },
			{ "TRYK_SUITS_BLK_F", "", 1500, "" },
			{ "TRYK_U_taki_wh", "", 100, "" },
			{ "TRYK_U_pad_j", "", 100, "" },
			{ "TRYK_U_pad_j_blk", "", 100, "" },
			{ "TRYK_U_denim_hood_blk", "", 100, "" },
			{ "TRYK_U_pad_hood_Blk", "", 100, "" },
			{ "TRYK_U_B_PCUGs_OD_R", "", 100, "" },
			{ "TRYK_U_B_PCUGs_gry_R", "", 100, "" },
			{ "TRYK_U_B_PCUGs_BLK_R", "", 100, "" },
			{ "TRYK_U_Bts_GRYGRY_PCUs", "", 100, "" },
			{ "TRYK_OVERALL_SAGE_BLKboots_nk", "", 100, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 500, "" },
            { "U_C_Poloshirt_stripped", "", 100, "" },
            { "U_C_Poloshirt_redwhite", "", 100, "" },
            { "U_C_Poloshirt_salmon", "", 100, "" },
            { "U_C_Poloshirt_blue", "", 100, "" },
            { "U_C_Poloshirt_burgundy", "", 100, "" },
            { "U_C_Poloshirt_tricolour", "", 100, "" },
            { "U_C_Poor_2", "", 100, "" },
            { "U_IG_Guerilla2_2", "", 100, "" },
            { "U_IG_Guerilla3_1", "", 100, "" },
            { "U_OrestesBody", "", 450, "" },
            { "U_IG_Guerilla2_3", "", 100, "" },
            { "U_C_HunterBody_grn", "", 100, "" },
            { "U_C_WorkerCoveralls", "", 100, "" },
            { "U_NikosBody", "", 100, "" },
            { "A3L_CivShirtAdidasMake", "", 100, "" },
            { "A3L_CivShirtAdidas", "", 100, "" },
            { "A3L_CivShirtAnotherCat", "", 100, "" },
            { "A3L_CivShirtBillabong","", 100, ""},
            { "A3L_CivShirtBillabong2","", 100, ""},
            { "A3L_BluePoloShirt","", 100, ""},
            { "A3L_BrownPoloShirt","", 100, ""},
            { "A3LCatShirt","", 100, ""},
            { "A3LCloudShirt","", 100, ""},
            { "A3LCokeShirt","", 100, ""},
            { "A3L_CivShirtDiamond","", 100, ""},
            { "A3L_CivShirtDJ","", 100, ""},
            { "A3L_Dude_Outfit","", 100, ""},
            { "A3L_Farmer_Outfit","", 100, ""},
            { "A3L_CivShirtGetHigh","", 100, ""},
            { "A3L_GreenPoloShirt","", 100, ""},
            { "A3LHandShirt","", 100, ""},
            { "A3L_CivShirtHollister","", 100, ""},
            { "A3L_CivShirtKeepCalm","", 100, ""},
            { "A3L_CivShirtNikeCamo","", 100, ""},
            { "A3L_CivShirtNikeDoIt2","", 100, ""},
            { "A3L_CivShirtNikeDoIt","", 100, ""},
            { "A3L_CivShirtNikeFeet","", 100, ""},
            { "A3L_CivShirtObey","", 100, ""},
            { "A3L_CivShirtOhBoy","", 100, ""},
            { "A3LPikaShirt","", 100, ""},
            { "A3L_CivShirtRelationships","", 100, ""},
			{ "U_C_E_LooterJacket_01_F","", 100, ""}, //CONTACT DLC
			{ "U_I_L_Uniform_01_tshirt_black_F","", 100, ""}, //CONTACT DLC
			{ "U_I_L_Uniform_01_tshirt_olive_F","", 100, ""}, //CONTACT DLC
			{ "U_I_L_Uniform_01_tshirt_skull_F","", 100, ""}, //CONTACT DLC
			{ "U_I_L_Uniform_01_tshirt_sport_F","", 100, ""}, //CONTACT DLC
			{ "U_C_Uniform_Scientist_01_formal_F","", 100, ""}, //CONTACT DLC
			{ "U_C_Uniform_Scientist_01_F","", 100, ""}, //CONTACT DLC
			{ "U_C_Uniform_Scientist_02_F","", 100, ""}, //CONTACT DLC
			{ "U_C_Uniform_Scientist_02_formal_F","", 100, ""}, //CONTACT DLC
			{ "TRYK_U_B_PCUGs_BLK_R","", 100, ""},
			{ "TRYK_U_B_PCUGs_gry_R","", 100, ""},
			{ "TRYK_U_B_PCUGs_OD_R","", 100, ""},
			{ "TRYK_U_B_PCUGs_BLK","", 100, ""},
			{ "TRYK_shirts_DENIM_BK","", 100, ""},
			{ "TRYK_shirts_DENIM_BL","", 100, ""},
			{ "TRYK_shirts_DENIM_BWH","", 100, ""},
			{ "TRYK_shirts_DENIM_od","", 100, ""},
			{ "TRYK_shirts_DENIM_RED2","", 100, ""},
			{ "TRYK_shirts_DENIM_WH","", 100, ""},
			{ "TRYK_shirts_DENIM_WHB","", 100, ""},
			{ "TRYK_shirts_DENIM_ylb","", 100, ""},
			{ "TRYK_shirts_DENIM_od_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_ylb_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_BK_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_BL_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_BWH_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_R_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_RED2_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_WH_Sleeve","", 100, ""},
			{ "TRYK_shirts_DENIM_WHB_Sleeve","", 100, ""},
			{ "TRYK_shirts_PAD_BK","", 100, ""},
			{ "TRYK_shirts_BLK_PAD_BL","", 100, ""},
			{ "TRYK_shirts_BLK_PAD_BLW","", 100, ""},
			{ "TRYK_shirts_OD_PAD_BLW","", 100, ""},
			{ "TRYK_shirts_OD_PAD_BLU3","", 100, ""},
			{ "TRYK_shirts_BLK_PAD","", 100, ""},
			{ "TRYK_shirts_OD_PAD","", 100, ""},
			{ "TRYK_shirts_TAN_PAD","", 100, ""},
			{ "TRYK_shirts_PAD_YEL","", 100, ""},
			{ "TRYK_U_pad_hood_Cl_blk","", 100, ""},
			{ "TRYK_U_pad_hood_odBK","", 100, ""},
			{ "TRYK_U_denim_jersey_blk","", 100, ""},
			{ "TRYK_U_denim_jersey_blu","", 100, ""},
			{ "TRYK_U_pad_j_blk","", 100, ""},
			{ "TRYK_U_pad_j","", 100, ""},
			{ "TRYK_U_taki_BL","", 100, ""},
			{ "TRYK_U_taki_wh","", 100, ""},
			{ "TRYK_U_taki_G_WH","", 100, ""},
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 100, "" },
            { "U_C_Man_casual_1_F", "", 100, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 100, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 100, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 100, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 100, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 100, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 100, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 100, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 100, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 15, "" },
            { "H_Bandanna_surfer", "", 15, "" },
            { "H_Bandanna_khk", "", 15, "" },
			{ "casco_pumas", "", 15, "" },
			{ "H_HeadBandage_clean_F", "", 15, "" },
			{ "H_HeadBandage_stained_F", "", 15, "" },
			{ "H_HeadBandage_bloody_F", "", 15, "" },
			{ "H_PASGT_basic_blue_press_F", "", 15, "" },
			{ "H_RacingHelmet_1_black_F", "", 15, "" },
			{ "H_RacingHelmet_1_blue_F", "", 15, "" },
			{ "H_RacingHelmet_2_F", "", 15, "" },
			{ "H_RacingHelmet_1_F", "", 15, "" },
			{ "H_RacingHelmet_1_green_F", "", 15, "" },
			{ "H_RacingHelmet_1_orange_F", "", 15, "" },
			{ "H_RacingHelmet_1_red_F", "", 15, "" },
			{ "H_RacingHelmet_3_F", "", 15, "" },
			{ "H_RacingHelmet_4_F", "", 15, "" },
			{ "H_RacingHelmet_1_white_F", "", 15, "" },
			{ "H_RacingHelmet_1_yellow_F", "", 15, "" },
			{ "H_Hat_Tinfoil_F", "", 15, "" }, //CONTACT DLC
			{ "TRYK_H_woolhat", "", 15, "" },
			{ "TRYK_H_woolhat_br", "", 15, "" },
			{ "TRYK_H_woolhat_cu", "", 15, "" },
			{ "TRYK_H_woolhat_CW", "", 15, "" },
			{ "TRYK_H_woolhat_tan", "", 15, "" },
			{ "TRYK_H_woolhat_WH", "", 15, "" },
            { "H_Cap_blu", "", 20, "" },
            { "H_Cap_grn", "", 20, "" },
            { "H_Cap_grn_BI", "", 20, "" },
            { "H_Cap_oli", "", 20, "" },
            { "H_Cap_red", "", 20, "" },
            { "H_Cap_tan", "", 20, "" },
            { "H_Helmet_Skate", "", 49, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 15, "" },
            { "H_Bandanna_sgg", "", 15, "" },
            { "H_Bandanna_cbr", "", 15, "" },
            { "H_StrawHat", "", 10, "" },
            { "H_Hat_tan", "", 20, "" },
            { "H_Hat_brown", "", 20, "" },
            { "H_Hat_grey", "", 20, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 15, "" },
            { "H_Hat_blue", "", 25, "" },
            { "H_Hat_checker", "", 25, "" },
            { "H_Booniehat_tan", "", 30, "" },
            { "TRYK_r_cap_blk_Glasses", "", 50, "" },
			{ "TRYK_r_cap_od_Glasses", "", 50, "" },
			{ "TRYK_r_cap_tan_Glasses", "", 50, "" },
			{ "H_Booniehat_grn", "", 30, "" },
            { "A3L_russianhat", "", 45, "" },
            { "A3L_sombrero", "", 20, "" },
            { "A3L_crown", "", 4500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 25, "" },
            { "G_Shades_Green", "", 25, "" },
            { "G_Shades_Red", "", 25, "" },
            { "G_Sport_Blackred", "", 65, "" },
            { "G_Sport_BlackWhite", "", 65, "" },
            { "G_Sport_Blackyellow", "", 65, "" },
            { "G_Sport_Checkered", "", 65, "" },
            { "G_Sport_Greenblack", "", 65, "" },
            { "G_Sport_Red", "", 65, "" },
            { "G_Lowprofile", "", 99, "" },
            { "G_Squares", "", 110, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Combat", "", 145, "" },
            { "G_Lady_Mirror", "", 110, "" },
            { "G_Lady_Dark", "", 110, "" },
            { "G_Lady_Blue", "", 110, "" },
			{ "TRYK_Beard_BK", "", 25, "" },
			{ "TRYK_Beard_BW", "", 25, "" },
			{ "TRYK_Beard", "", 25, "" },
			{ "TRYK_Beard_Gr", "", 25, "" },
			{ "TRYK_kio_balaclavas", "", 25, "" },
			{ "TRYK_Shemagh_shade_MH", "", 25, "" },
			{ "G_Lady_Blue", "", 25, "" },
			{ "G_Bandanna_aviator", "", 55, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_SmershVest_01_F", "", 25, "" },
			{ "V_SmershVest_01_radio_F", "", 25, "" },
			{ "V_LegStrapBag_black_F", "", 25, "" },
			{ "V_LegStrapBag_coyote_F", "", 25, "" },
			{ "V_LegStrapBag_olive_F", "", 25, "" },
			{ "V_CarrierRigKBT_01_EAF_F", "", 25, "" },
			{ "V_Pocketed_black_F", "", 25, "" },
			{ "V_Safety_yellow_F", "", 25, "" },
			{ "V_Safety_blue_F", "", 25, "" },
			{ "V_Safety_orange_F", "", 25, "" },
			{ "TRYK_V_Bulletproof_BL", "", 25, "" },
			{ "TRYK_V_Bulletproof_BLK", "", 25, "" },
			{ "TRYK_V_IOTV_BLK", "", 25, "" },
			{ "V_Press_F", "", 25, "" },
			{ "TRYK_V_tacSVD_BK", "", 25, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_Messenger_Black_F", "", 50, "" },
			{ "B_Messenger_Coyote_F", "", 50, "" },
			{ "TRYK_B_tube_cyt", "", 50, "" },
            { "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 30, "" },
            { "B_AssaultPack_dgtl", "", 30, "" },
            { "B_AssaultPack_rgr", "", 30, "" },
            { "B_AssaultPack_sgg", "", 30, "" },
            { "B_AssaultPack_blk", "", 30, "" },
            { "B_AssaultPack_cbr", "", 30, "" },
            { "B_AssaultPack_mcamo", "", 30, "" },
            { "B_AssaultPack_tna_f", "", 30, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 30, "" },
            { "B_Kitbag_mcamo", "", 40, "" },
            { "B_Kitbag_sgg", "", 40, "" },
            { "B_Kitbag_cbr", "", 40, "" },
            { "B_FieldPack_blk", "", 25, "" },
            { "B_FieldPack_ocamo", "", 25, "" },
            { "B_FieldPack_oucamo", "", 25, "" },
            { "B_FieldPack_ghex_f", "", 25, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 250, "" },
            { "B_Bergen_mcamo", "", 250, "" },
            { "B_Bergen_rgr", "", 250, "" },
            { "B_Bergen_blk", "", 250, "" },
            { "B_Carryall_ocamo", "", 150, "" },
            { "B_Carryall_oucamo", "", 150, "" },
            { "B_Carryall_mcamo", "", 150, "" },
            { "B_Carryall_oli", "Invisible Bag", 150, "" },
            { "B_Carryall_khk", "", 150, "" },
            { "B_Carryall_cbr", "", 150, "" },
            { "casper_beautifulbackpack", "", 150, "" },
            { "casper_facbackpack", "", 150, "" },
            { "casper_hellokittybackpack", "", 150, "" },
            { "casper_cockbackpack", "", 150, "" },
            { "casper_mcdonaldsbackpack", "", 150, "" },
            { "casper_nemobackpack", "", 150, "" },
            { "casper_ppatrolbackpack", "", 150, "" },
            { "A3L_BergenMurica", "", 250, "" },
            { "B_Carryall_ghex_f", "", 150, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove", 0, "" },
            { "A3L_EC_SODS", "UnderSheriff Uniform", 0, "call life_coplevel >= 10" },
            { "A3L_EC_SOOFC", "Deputy", 0, "call life_coplevel >= 2" },
            { "A3L_EC_SOCPL", "Corporal", 0, "call life_coplevel >= 3" },
            { "A3L_EC_SOSGT", "Sergeant", 0, "call life_coplevel >= 4" },
            { "A3L_EC_SOLT", "LT", 0, "call life_coplevel >= 5" },
            { "A3L_EC_SOCPT", "CPT", 0, "call life_coplevel >= 6" },
			{ "A3L_EC_SOSHERIFF", "Sheriff Uniform", 0, "call life_coplevel >= 10" },
			{ "A3L_EC_SOCDT", "Cadet", 0, "call life_coplevel >= 1" },
			{ "A3L_EC_SOMAJ", "Major", 0, "call life_coplevel >= 8" },
			{ "A3L_ECSO_CID_Jacket3", "CID Sheriff Black", 0, "call life_coplevel >= 8" },
			{ "A3L_ECSO_Patrol_Jacket", "Patrol Jacket", 0, "call life_coplevel >= 6" },
			{ "A3L_ECSO_CID_Jacket2", "ESCO Black/Yellow", 0, "call life_coplevel >= 8" },
			{ "A3L_ECSO_CID_Jacket1", "ESCO Blue/White", 0, "call life_coplevel >= 3" },
			{ "A3L_SERT_Patrol", "SERT Uniform", 0, "call life_coplevel >=10" },
			{ "TRYK_U_B_BLKBLK_CombatUniform", "Black SERT Uniform", 0, "call life_coplevel >=10" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
			{ "M_sheriffhat", "Sheriff Hat", 0, "call life_coplevel >= 1" },
            { "TRYK_r_cap_blk_Glasses", "", 0, "call life_coplevel >= 1" },
            { "TRYK_r_cap_od_Glasses", "", 0, "call life_coplevel >= 1" },

            { "TRYK_G_bala_ess_NV", "", 0, "call life_coplevel >= 10" },
            { "TRYK_H_PASGT_BLK", "", 0, "call life_coplevel >= 10" },
            { "TRYK_H_PASGT_OD", "", 0, "call life_coplevel >= 10" },

			{ "TRYK_H_headsetcap_od_Glasses", "Sheriff Cap", 0, "call life_coplevel >= 1" },
			{ "TRYK_H_headsetcap_od", "Hat w/ Mic Green", 0, "call life_coplevel >= 1" },
			{ "TRYK_H_headsetcap_blk", "Hat w/ Mic Blk", 0, "call life_coplevel >= 1" },
			{ "TRYK_H_PASGT_OD", "SERT Helmet", 0, "call life_coplevel >= 10" },
			{ "S_VHO_H_MK7_Blk", "Black SERT Helmet", 0, "call life_coplevel >= 10" },
			{ "H_CrewHelmetHeli_B", "", 0, "call life_coplevel >= 7" }
        };
        goggles[] = {
            { "NONE", "Remove", 0, "call life_coplevel >= 1" },
            { "G_Squares", "", 0, "call life_coplevel >= 1" },
            { "G_Shades_Blue", "", 0, "call life_coplevel >= 1" },
            { "G_Sport_Blackred", "", 0, "call life_coplevel >= 1" },
            { "G_Sport_Checkered", "", 0, "call life_coplevel >= 1" },
            { "G_Aviator", "", 0, "call life_coplevel >= 2" },
            { "G_Sport_BlackWhite", "", 0, "call life_coplevel >= 1" },
            { "G_Shades_Black", "", 0, "call life_coplevel >= 1" },
			{ "TRYK_Spset_PHC1_Glasses", "", 0, "call life_coplevel >= 1" },
			{ "TRYK_kio_balaclavas", "", 0, "call life_coplevel >= 10" },
			{ "G_Spectacles_Tinted", "", 0, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "call life_coplevel >= 1" },
			{ "S_VHO_PB_1", "Duty Belt", 0, "call life_coplevel >= 1" },
			{ "ECSO_ridealong_vest02", "Ride Along Vest", 0, "call life_coplevel >= 1" },
			{ "S_VHO_OV_MTP_2", "Patrol Vest Black", 0, "call life_coplevel >= 2" },
			{ "S_VHO_OV_OD_4", "Standard Vest", 0, "call life_coplevel >= 2" },
			{ "S_VHO_OV_OD_2", "Sheriff Vest I", 0, "call life_coplevel >= 3" },
            { "S_VHO_PV_OD", "Sheriff Vest II", 0, "call life_coplevel >= 4" },
			{ "S_VHO_OV_MTP_2", "Sheriff Vest Black", 0, "call life_coplevel >= 2" },
			{ "S_VHO_OV_MTP_4", "Sheriff Vest III", 0, "call life_coplevel >= 7" },
			{ "SERT_FULL_VESTGRN", "SERT VEST GREEN", 0, "call life_coplevel >= 10" },
			{ "SERT_FULL_VEST", "SERT VEST BLK", 0, "call life_coplevel >= 10" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "Invisible Pack", 0, "call life_coplevel >= 1" },
			{ "tf_anprc155", "Invisible Backpack", 0, "" },
			{ "S_VHO_PB_1", "Duty Belt", 0, "call life_coplevel >= 1" }
        };
    };

    class sert {
        title = "STR_Shops_C_sert";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "TRYK_U_B_BLKBLK_CombatUniform", "Black SERT Uniform", 0, "" },
            { "A3L_SERT_Patrol", "SERT Uniform", 0, "" },
            { "A3L_ECSO_CID_Jacket3", "CID Sheriff Black", 0, "" },
			{ "A3L_ECSO_Patrol_Jacket", "Patrol Jacket", 0, "" },
			{ "A3L_ECSO_CID_Jacket2", "ESCO Black/Yellow", 0, "" },
			{ "A3L_ECSO_CID_Jacket1", "ESCO Blue/White", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "S_VHO_H_MK7_Blk", "Black SERT Helmet", 0, "" },
            { "TRYK_H_PASGT_OD", "SERT Helmet", 0, "" },
            { "TRYK_G_bala_ess_NV", "", 0, "" },
            { "TRYK_H_PASGT_BLK", "", 0, "" },
            { "TRYK_H_PASGT_OD", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            

        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class Surplus {
        title = "STR_Shops_C_SurPlus";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "TRYK_U_B_BLKTANR_CombatUniformTshirt", "", 500, "" },
			{ "U_I_E_Uniform_01_shortsleeve_F", "", 500, "" },
			{ "U_I_E_Uniform_01_sweater_F", "", 500, "" },
			{ "U_I_L_Uniform_01_deserter_F", "", 500, "" },
			{ "niedobity_ems_ae", "", 500, "" },
			{ "U_B_T_Sniper_F", "", 500, "" },
			{ "U_I_E_Uniform_01_coveralls_F", "", 500, "" },
			{ "U_I_C_Soldier_Para_1_F", "", 500, "" },
			{ "TRYK_U_B_ACUTshirt", "", 500, "" },
			{ "TRYK_U_B_AOR2_BLK_R_CombatUniform", "", 500, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 500, "" },
			{ "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "", 500, "" },
			{ "TRYK_U_B_BLOD_T", "", 500, "" },
			{ "TRYK_U_B_BLTAN_T", "", 500, "" },
			{ "TRYK_U_B_BLK3CD_Tshirt", "", 500, "" },
			{ "TRYK_U_B_3CD_Ranger_BDUTshirt", "", 500, "" },
			{ "TRYK_U_B_GRYOCP_R_CombatUniformTshirt", "", 500, "" },
			{ "TRYK_U_B_MARPAT_Wood", "", 500, "" },
			{ "TRYK_U_pad_hood_Blod", "", 500, "" },
			{ "TRYK_U_pad_hood_Blk", "", 500, "" },
			{ "TRYK_U_pad_hood_Cl", "", 500, "" },
			{ "TRYK_hoodie_Wood", "", 500, "" },
			{ "TRYK_U_denim_hood_blk", "", 500, "" },
			{ "TRYK_U_denim_hood_mc", "", 500, "" },
			{ "TRYK_U_denim_jersey_blu", "", 500, "" },
			{ "TRYK_U_B_RED_T_BG_BR", "", 500, "" },
			{ "TRYK_U_B_BLK_T_BK", "", 500, "" },
			{ "TRYK_U_B_Denim_T_BK", "", 500, "" },
			{ "U_B_GEN_Commander_F", "", 500, "" },
			{ "U_Tank_green_F", "", 500, "" },
            { "TRYK_U_B_PCUHsW3nh", "", 500, "" },
            { "U_I_E_Uniform_01_tanktop_F", "", 500, "" },
            { "TRYK_U_pad_j_blk", "", 500, "" },
            { "TRYK_U_B_woodR_CombatUniformTshirt", "", 500, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "TRYK_H_headsetcap_blk_Glasses", "", 0, "" },
            { "TRYK_H_Bandana_H", "", 0, "" },
            { "H_HelmetB_light", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "DTU_VEST_TACTICAL_BK", "", 150, "" },
            { "S_VHO_OV_BLK_2", "", 50, "" },
			{ "V_CarrierRigKBT_01_light_Olive_F", "", 50, "" },
			{ "TRYK_V_tacSVD_BK", "", 50, "" },
            { "S_VHO_PB_1", "", 50, "" },
            { "V_SmershVest_01_F", "", 25, "" },
            { "TRYK_V_ArmorVest_Delta2", "", 15, "" },
            { "DTU_VEST_TACTICAL_TAN", "", 24, "" }

        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 30, "" },
            { "B_AssaultPack_dgtl", "", 30, "" },
            { "B_AssaultPack_rgr", "", 30, "" },
            { "B_AssaultPack_sgg", "", 30, "" },
            { "B_AssaultPack_blk", "", 30, "" },
            { "B_AssaultPack_cbr", "", 30, "" },
            { "B_AssaultPack_mcamo", "", 30, "" },
            { "B_AssaultPack_tna_f", "", 30, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 30, "" },
            { "B_Kitbag_mcamo", "", 40, "" },
            { "B_Kitbag_sgg", "", 40, "" },
            { "B_Kitbag_cbr", "", 40, "" },
            { "B_FieldPack_blk", "", 25, "" },
            { "B_FieldPack_ocamo", "", 25, "" },
            { "B_FieldPack_oucamo", "", 25, "" },
            { "B_FieldPack_ghex_f", "", 25, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 250, "" },
            { "B_Bergen_mcamo", "", 250, "" },
            { "B_Bergen_rgr", "", 250, "" },
            { "B_Bergen_blk", "", 250, "" },
            { "B_Carryall_ocamo", "", 150, "" },
            { "B_Carryall_oucamo", "", 150, "" },
            { "B_Carryall_mcamo", "", 150, "" },
            { "B_Carryall_oli", "", 150, "" },
            { "B_Carryall_khk", "", 150, "" },
            { "B_Carryall_cbr", "", 150, "" },
			{ "TRYK_B_Carryall_blk", "", 150, "" },
            { "casper_beautifulbackpack", "", 150, "" },
            { "casper_facbackpack", "", 150, "" },
            { "casper_hellokittybackpack", "", 150, "" },
            { "casper_cockbackpack", "", 150, "" },
            { "casper_mcdonaldsbackpack", "", 150, "" },
            { "casper_nemobackpack", "", 150, "" },
            { "casper_ppatrolbackpack", "", 150, "" },
            { "A3L_BergenMurica", "", 250, "" },
            { "B_Carryall_ghex_f", "", 150, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 500, "" } //Apex DLC
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "U_B_CombatUniform_mcam", "Horizon EMS Skin", 0, "call life_mediclevel >= 1" },
			{ "U_C_CBRN_Suit_01_White_F", "CBRN Uniform", 0, "call life_mediclevel >= 1" },
            { "niedobity_ems_paramedic", "Trainee", 0, "call life_mediclevel >= 1" },
			{ "niedobity_ems_2ndlieutenant", "JuniorParamedic", 0, "call life_mediclevel >= 2" },
			{ "niedobity_ems_seniorparamedic", "ParaMedic", 0, "call life_mediclevel >= 3" },
			{ "niedobity_ems_captain", "SeniorParaMedic", 0, "call life_mediclevel >= 4" },
			{ "niedobity_ems_ae", "Lieutenant", 0, "call life_mediclevel >= 5" },
			{ "niedobity_ems_ae", "Captain", 0, "call life_mediclevel >= 6" },
			{ "niedobity_ems_rru", "Division Chief", 0, "call life_mediclevel >= 7" },
			{ "niedobity_ems_rru", "Superintendent", 0, "call life_mediclevel >= 8" },
			{ "niedobity_ems_rru", "Dep Commisioner", 0, "call life_mediclevel >= 9" },
			{ "niedobity_ems_rru", "Commisioner", 0, "call life_mediclevel >= 10" },
            { "niedobity_ems_seniorparamedic_official", "SeniorParaMedic", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_rru", "RRU", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_probie", "Probie", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_paramedic_official", "SeniorParaMedic", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_lieutenant_official", "LT", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_lieutenant", "LT", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_captain_official", "Air Medic", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_ams", "Air Medic", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_ae_official", "A&E", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_ae", "A&E", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_2ndlieutenant_official", "2nd LT", 0, "call life_mediclevel >= 4" },
            { "niedobity_ems_2ndlieutenant", "2nd lt", 0, "call life_mediclevel >= 4" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_red", "", 10, "" },
			{ "H_Cap_blk", "", 10, "" },
            { "H_Construction_earprot_white_F", "", 10, "" },
            { "TRYK_r_cap_blk_Glasses", "", 10, "" },
            { "H_Bandanna_gry", "", 10, "" },
			{ "H_Cap_marshal", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
			{ "G_AirPurifyingRespirator_01_F", "", 10, "" },
            { "G_Respirator_white_F", "", 10, "" },
			{ "G_Respirator_blue_F", "", 10, "" },
			{ "G_Shades_Black", "", 10, "" },
            { "TRYK_Beard_BK4", "", 10, "" },
			{ "G_Sport_Blackred", "", 10, "" },
			{ "G_Spectacle", "", 10, "" },
			{ "G_Aviator", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "V_RebreatherB", "", 0, "" },
			{ "V_TacVestIR_blk", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
			{ "B_SCBA_01_F", "Tank", 0, "" },
            { "I_UAV_06_medical_backpack_F", "", 600, "" },
			{ "B_Kitbag_sgg", "EMS Backpack", 0, "" },
			{ "B_Carryall_cbr", "Invisible Pack", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 100, "" },
            { "U_I_G_Story_Protagonist_F", "", 100, "" },
            { "U_I_G_resistanceLeader_F", "", 100, "" },
            { "U_IG_leader", "", 100, "" },
            { "U_O_PilotCoveralls", "", 100, "" },
            { "U_O_SpecopsUniform_ocamo", "", 100, "" },
			{ "3cd_ranger", "", 100, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 100, "" },
			{ "TRYK_U_B_BLKBLK_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_BLKOCP_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_BLKTAN_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_BLK3CD", "", 100, "" },
			{ "TRYK_U_B_ARO1_GRY_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_ARO1_GR_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_ARO1_CBR_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_ARO1_BLK_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_ARO1_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_ACU", "", 100, "" },
			{ "U_O_R_Gorka_01_black_F", "", 100, "" },
			{ "TRYK_U_B_WOOD_MARPAT_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_wood3c_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_wood_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_Woodland", "", 100, "" },
			{ "TRYK_U_B_PCUHsW6", "", 100, "" },
			{ "TRYK_U_B_PCUHsW5", "", 100, "" },
			{ "TRYK_U_B_NATO_UCP_GRY_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_TANTAN_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_TANOCP_CombatUniform", "", 100, "" },
			{ "TRYK_U_B_woodtan_CombatUniform", "", 100, "" },
			{ "TRYK_U_denim_hood_nc", "", 100, "" },
			{ "TRYK_U_denim_hood_mc", "", 100, "" },
			{ "TRYK_U_pad_hood_tan", "", 100, "" },
			{ "clothing_blk3cd_co", "", 100, "" },
			{ "clothing_odtan_co", "", 100, "" },
			{ "customuni_WOOD", "", 100, "" },
			{ "customuni_FBI_OD", "", 100, "" },
			{ "customuni_OD_TAN", "", 100, "" },
			{ "customuni_GR_TAN", "", 100, "" },
			{ "customuni_WOOD", "", 100, "" },
            { "U_B_T_Soldier_F", "", 100, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 100, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 100, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 10, "" },
            { "H_ShemagOpen_khk", "", 10, "" },
            { "H_ShemagOpen_tan", "", 10, "" },
            { "H_Shemag_olive", "", 10, "" },
			{ "Wood_Boonie", 10, "" },
			{ "RangerHELMET", "", 10, "" },
			{ "MARPAT_HELMET", "", 10, "" },
			{ "WoodHELMET","", 10, ""},
			{ "TRYK_H_PASGT_TAN","", 10, ""},
			{ "TRYK_H_PASGT_BLK","", 10, ""},
			{ "TRYK_H_PASGT_COYO","", 10, ""},
			{ "TRYK_H_PASGT_OD","", 10, ""},
			{ "TRYK_ESS_CAP","", 10, ""},
			{ "TRYK_ESS_CAP_OD","", 10, ""},
			{ "TRYK_ESS_CAP_tan","", 10, ""},
			{ "TRYK_H_headsetcap_blk","", 10, ""},
			{ "TRYK_H_headsetcap_od","", 10, ""},
			{ "TRYK_H_headsetcap","", 10, ""},
			{ "TRYK_H_Booniehat_3CD","", 10, ""},
			{ "TRYK_H_Booniehat_AOR1","", 10, ""},
			{ "TRYK_H_Booniehat_AOR2","", 10, ""},
			{ "TRYK_H_Booniehat_CC","", 10, ""},
			{ "TRYK_H_Booniehat_MARPAT_Desert","", 10, ""},
			{ "TRYK_H_Booniehat_MARPAT_WOOD","", 10, ""},
			{ "TRYK_H_Booniehat_JSDF","", 10, ""},
			{ "TRYK_H_Booniehat_WOOD","", 10, ""},
            { "H_HelmetO_ocamo", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 10, "" },
            { "G_Balaclava_combat", "", 10, "" },
            { "G_Balaclava_lowprofile", "", 10, "" },
            { "G_Balaclava_oli", "", 10, "" },
            { "G_Bandanna_aviator", "", 10, "" },
            { "G_Bandanna_beast", "", 10, "" },
            { "G_Bandanna_blk", "", 10, "" },
            { "G_Bandanna_khk", "", 10, "" },
            { "G_Bandanna_oli", "", 10, "" },
            { "G_Bandanna_shades", "", 10, "" },
            { "G_Bandanna_sport", "", 10, "" },
            { "G_Bandanna_tan", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 50, "" },
            { "V_HarnessO_brn", "", 60, "" },
            { "V_TacVest_khk", "", 99, "" },
			{ "3cd_Ranger_Vest", "", 300, "" },
			{ "3cd_delta_Vest", "", 300, "" },
			{ "V_Chestrig_khk", "", 150, "" },
			{ "V_Chestrig_blk", "", 150, "" },
			{ "TRYK_Loc_ak_chestrig_OD", "", 40, "" },
			{ "V_PlateCarrierSpec_rgr", "", 400, "" },
			{ "V_PlateCarrierSpec_blk", "", 400, "" },
			{ "V_PlateCarrierSpec_mtp", "", 400, "" },
			{ "V_I_G_resistanceLeader_F", "", 125, "" },
			{ "V_TacChestrig_grn_F", "", 125, "" },
			{ "V_TacChestrig_oli_F", "", 125, "" },
			{ "V_TacChestrig_cbr_F", "", 125, "" },
			{ "equip_ia_vest01_black_co", "", 100, "" },
			{ "equip_ia_vest01_coyo_co", "", 100, "" },
			{ "equip_ia_vest01_wood_co", "", 100, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 50, "" },
            { "B_AssaultPack_khk", "", 30, "" },
            { "B_AssaultPack_dgtl", "", 30, "" },
            { "B_AssaultPack_rgr", "", 30, "" },
            { "B_AssaultPack_sgg", "", 30, "" },
            { "B_AssaultPack_blk", "", 30, "" },
            { "B_AssaultPack_cbr", "", 30, "" },
            { "B_AssaultPack_mcamo", "", 30, "" },
            { "B_AssaultPack_tna_f", "", 30, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 30, "" },
            { "B_Kitbag_mcamo", "", 40, "" },
            { "B_Kitbag_sgg", "", 40, "" },
            { "B_Kitbag_cbr", "", 40, "" },
            { "B_FieldPack_blk", "", 25, "" },
            { "B_FieldPack_ocamo", "", 25, "" },
            { "B_FieldPack_oucamo", "", 25, "" },
            { "B_FieldPack_ghex_f", "", 25, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 250, "" },
            { "B_Bergen_mcamo", "", 250, "" },
            { "B_Bergen_rgr", "", 250, "" },
            { "B_Bergen_blk", "", 250, "" },
            { "B_Carryall_ocamo", "", 150, "" },
            { "B_Carryall_oucamo", "", 150, "" },
            { "B_Carryall_mcamo", "", 150, "" },
            { "B_Carryall_oli", "", 150, "" },
            { "B_Carryall_khk", "", 150, "" },
            { "B_Carryall_cbr", "", 150, "" },
			{ "TRYK_B_Carryall_blk", "", 150, "" },
            { "casper_beautifulbackpack", "", 150, "" },
            { "casper_facbackpack", "", 150, "" },
            { "casper_hellokittybackpack", "", 150, "" },
            { "casper_cockbackpack", "", 150, "" },
            { "casper_mcdonaldsbackpack", "", 150, "" },
            { "casper_nemobackpack", "", 150, "" },
            { "casper_ppatrolbackpack", "", 150, "" },
            { "A3L_BergenMurica", "", 250, "" },
            { "B_Carryall_ghex_f", "", 150, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 500, "" } //Apex DLC
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
	
	class tow {
		title = "STR_Shops_C_tow";
		conditions = "license_civ_tow || {!(playerSide isEqualTo civilian)}";
		side = "civ";
		uniforms[] = {
			{"NONE",STR_C_Remove_uniforms, 0, "" },
			{"U_C_WorkerCoveralls", "", 100, "" },
			{"TRYK_U_B_TANTAN_R_CombatUniform", "", 100, "" },
			{"TRYK_U_B_BLK_T_BG_BK", "", 100, "" }
		};
		headgear[] = {
			{"NONE",STR_C_Remove_headgear, 0, "" },
			{"H_Construction_headset_black_F", "", 20, "" },
			{"H_Construction_headset_white_F", "", 20, "" },
			{"H_Cap_blk_ION", "", 20, "" },
			{"H_Cap_marshall", "", 100, "" }
		};
		goggles[] = {
			{"NONE",STR_C_Remove_goggles, 0, ""},
			{"TRYK_Beard_BK4", "", 20, "" },
			{"TRYK_TAC_SET_MESH", "", 20, "" },
			{"G_EyeProtectors_Earpiece_F", "", 20, "" }
		};
		vests[] = {
			{"NONE",STR_C_Remove_vests, 0, ""},
			{"V_RebreatherB", "", 20, "" }
		};
		backpacks[] = {
			{"NONE",STR_C_Remove_backpacks, 0, ""},
			{"B_ViperLightHarness_blk_F", "", 100, "" }
		};
	};
	
	
	class bwagang {
		title = "STR_Shops_C_bwagnag";
		conditions = "license_civ_bwagang || {!(playerSide isEqualTo civilian)}";
		side = "civ";
		uniforms[] = {
			{"NONE",STR_C_Remove_uniforms, 0, "" }
		};
		headgear[] = {
			{"NONE",STR_C_Remove_headgear, 0, "" }
		};
		goggles[] = {
			{"NONE",STR_C_Remove_goggles, 0, ""}
		};
		vests[] = {
			{"NONE",STR_C_Remove_vests, 0, ""}
		};
		backpacks[] = {
			{"NONE",STR_C_Remove_backpacks, 0, ""}
		};
	};
};
