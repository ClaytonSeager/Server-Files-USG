class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "d3s_oka", "" },
			{ "d3s_malibu_18_red", "" },
			{ "d3s_malibu_18", "" },
		    { "d3s_tahoe_08", "" },
			{ "d3s_300C_12", "" },
		    { "d3s_charger_15", "" },
		    { "d3s_durango_18", "" },
		    { "d3s_explorer_13", "" },
			{ "d3s_savana_05", "" },
		    { "d3s_civic_17", "" },
		    { "d3s_santafe_19", "" },
		    { "d3s_cherokee_18", "" },
		    { "d3s_beetle_04", "" },
			{ "d3s_luaz969m", "" },
			{ "d3s_luaz969m_2", "" },
			{ "d3s_oka", "" },
		    
		};
	};

	class Sur_plus {
		side = "civ";
		conditions = "license_civ_SurplusShop";
		vehicles[] = {
			{ "d3s_luaz969m", "" },
			{ "d3s_luaz969m_2", "" },
			{ "d3s_oka", "" },
			{ "V12_BELAIR_GNOIR", "" },
			{ "Jonzie_Datsun_Z432", "" },
		    { "V12_RT", "" },
		    { "d3s_coronet_70", "" },
		    { "d3s_savana_VAN", "" },
		    { "DC_GMC1979", "" },
		    { "DELTA_Mercedes_Actros", "" },
		    { "V12_COBRA_BLEU", "" },
		    { "d3s_savana_05", "" },
		    { "d3s_w140_98", "" },
		    { "d3s_zil_130_06", "" }
		};
	};

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "DELTA_Caterpillar_CT610", "" },
            { "DELTA_Durastar_Box_Truck_2002", "" },
            { "V12_FREIGHTLINER", "" },
            { "DELTA_Kennworth_C500", "" },
            { "DELTA_Kennworth_T660_11", "" },
            { "DELTA_Peterbilt_389", "" },
		    { "DELTA_Renault_K_430", "" },
			{ "DELTA_Scania_R730", "" },		 
			{ "DELTA_Scania_R730_Dump_Truck", "" },
		    { "C_Tractor_01_F", "" },
			{ "DELTA_Volvo_VAH_630", "" },
			{ "Jonzie_Tanker_Truck", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
			{ "d3s_actros_14", "" },
			{ "d3s_next_bocha", "" },
			{ "d3s_next_tent", "" },
			{ "d3s_kamaz_6350", "" },
			{ "d3s_kraz_6316", "" },
            { "B_Truck_01_fuel_F", "" },
			{ "d3s_zil_130_06", "" }
        };
    };
	
	class civ_sports {
        side = "civ";
        conditions = "";
        vehicles[] = {
			{ "d3s_rapide_10", ""},
			{ "d3s_sian_20", ""},
			{ "d3s_zonda_18", ""},
			{ "d3s_zonda_18_R", ""},
			{ "d3s_roadrunner_71_GTX", ""},
			{ "d3s_veyron_12", ""},
			{ "d3s_voiture_19", ""},
			{ "d3s_mclaren_18", ""},
			{ "d3s_teslaS_16_85", ""},
			{ "d3s_senna_18", ""},
			{ "d3s_amazing_ACS8_17", ""},
			{ "d3s_ghibli_14_nerissimo", ""},
			{ "d3s_boss_15", ""},
			{ "d3s_alfieri_14", ""},
			{ "d3s_e89_12", ""},
			{ "d3s_escalade_16", ""},
			{ "d3s_eldorado_76", ""},
			{ "d3s_veneno_13", ""},
			{ "d3s_tuatara_19", ""},
			{ "d3s_huracan_18_SPD_P", ""},
			{ "d3s_asterion_15_DMC", ""},
			{ "d3s_LaFerrari_14", ""},
			{ "d3s_599XXE_12", ""},
		    { "d3s_e60_09_ACS5", ""},
		    { "d3s_giulia_quad_16", ""},
		    { "d3s_giulietta_16", ""},
			{ "d3s_skyline_02_V", ""},
		    { "d3s_bentayga_18", ""},
		    { "d3s_continentalGT_18", ""},
		    { "d3s_f87_17", ""},
		    { "d3s_f87_17_ACH", ""},
		    { "d3s_amazing_ACS8_17_IND", ""},
		    { "d3s_f87_17_m", ""},
		    { "d3s_f87_17_EX", ""},
		    { "d3s_f87_18_m", ""},
		    { "d3s_f80_14", ""},
		    { "d3s_f80_14_SE", ""},
		    { "d3s_f80_14_GTS", ""},
		    { "d3s_f82_14_LB", ""},
		    { "d3s_amazing_f82_16", ""},
		    { "d3s_e60_09", ""},
		    { "d3s_f10_12", ""},
		    { "d3s_f90_18", ""},
		    { "d3s_f90_18_FE", ""},
		    { "d3s_f90_18_m", ""},
		    { "d3s_f10_12_EX", ""},
		    { "d3s_f85_15_m", ""},
		    { "d3s_f86_15_OFF", ""},
		    { "d3s_f86_15_m", ""},
		    { "d3s_e89_12", ""},
		    { "d3s_g800_17", ""},
		    { "d3s_skylark_52", ""},
		    { "d3s_ctsv_16", ""},
		    { "d3s_escalade_16", ""},
		    { "d3s_camaro_16", ""},
		    { "d3s_camaro_zl1_17", ""},
		    { "d3s_camaro_zl1_1le_18", ""},
		    { "d3s_malibu_18", ""},
		    { "d3s_tahoe_08", ""},
		    { "d3s_300C_12", ""},
		    { "d3s_survolt_10", ""},
		    { "d3s_srthellcat_15", ""},
		    { "d3s_durango_18", ""},
		    { "d3s_durango_18_SRT", ""},
		    { "d3s_LaFerrari_14", ""},
		    { "d3s_explorer_13", ""},
		    { "d3s_raptor_SCR_17", ""},
		    { "d3s_raptor_17", ""},
		    { "d3s_fseries_17", ""},
		    { "d3s_model_a", ""},
		    { "d3s_taurus_eco_10", ""},
	 	    { "d3s_civic_17", ""},
		    { "d3s_hornet_52", ""},
		    { "d3s_q50_14", ""},
		    { "d3s_q50_ER_14", ""},
		    { "d3s_qx56_13", ""},
		    { "d3s_qx56_13_SE", ""},
		    { "d3s_QX60_16", ""},
		    { "d3s_QX60_16_S", ""},
		    { "d3s_fpace_17_r", ""},
		    { "d3s_fpace_17_s", ""},
		    { "d3s_xe_15", ""},
		    { "d3s_xes_15", ""},
		    { "d3s_xesv_17", ""},
		    { "d3s_cherokee_18", ""},
		    { "d3s_cherokee_18_TRCK", ""},
		    { "d3s_vesta_15", ""},
		    { "d3s_vesta_15_turbo", ""},
		    { "d3s_asterion_15", ""},
		    { "d3s_lm002_90", ""},
		    { "d3s_urus_12", ""},
		    { "d3s_urus_18", ""},
		    { "d3s_is_16", ""},
		    { "d3s_lx570_16", ""}, 
		    { "d3s_g65amg_Mansory", ""},
		    { "3s_ghibli_14", ""},
		    { "d3s_ghibli_14_30", ""},
		    { "d3s_ghibli_esteso_14", ""},
		    { "d3s_ghibli_14_q4", ""},
		    { "d3s_levante_17", ""},
		    { "d3s_levante_s_17_mat", ""},
		    { "C_Mazda_MX5", ""},
		    { "d3s_C63_14", ""},
		    { "d3s_C63S_14", ""},
		    { "d3s_g63amg_16", ""},
		    { "d3s_g63amg_18", ""},
		    { "d3s_g65amg_16", ""},
		    { "d3s_gle43amg_15", ""},
		    { "d3s_gle63amgS_15", ""},
		    { "d3s_amgGT_15", ""},
		    { "d3s_amgGTR_15", ""}, //continue here
		    { "d3s_C180_14", ""},
		    { "d3s_titan_17", ""},
			{ "d3s_challenger_15_LW", ""},
		    { "d3s_challenger_15_WIDE", ""},
			{ "d3s_challenger_15", ""},
			{ "V12_RX7VEILSIDE", ""},
		    { "V12_ECLIPSEFNF1", ""},
			{ V12_EVO7"", ""},
			{ "V12_S15_NOIR", ""},
			{ "V12_S15_FNF", ""},
		    { "V12_SKYLINEFNF", ""},
		    { "d3s_911gt3rs_18", ""},
			{ "d3s_panamera_17", ""},
			{ "V12_SUPRAFNF_FAST", ""},
			{ "V12_SLAPJACK", ""},
			{ "V12_JETTA", ""},
			{ "d3s_uaz_469P_EXP", ""},
			{ "d3s_trailcat_17", ""},
		    { "d3s_C300_14", ""},
		    { "d3s_C450_15", ""},
		    { "d3s_cla_14", ""},
		    { "d3s_cla_15", ""},
		    { "d3s_cla_250_14", ""},
		    { "d3s_cla_250_15", ""},
		    { "d3s_cla_45amg_14", ""},
		    { "d3s_cla_45amg_15", ""},
		    { "d3s_e220_16", ""},
		    { "d3s_e350_16", ""},
		    { "d3s_w212_13", ""},
		    { "d3s_w212s_13", ""},
		    { "d3s_w212s_13_EX", ""},
		    { "d3s_g350d_15", ""},
		    { "d3s_g500_18", ""},
		    { "d3s_gl63amg_12", ""},
		    { "d3s_gl63amg_12_SE", ""},
		    { "d3s_ml350_09", ""},
		    { "d3s_s600_14", ""},
		    { "d3s_s600_17", ""},
		    { "d3s_vklasse_17", ""},
		    { "d3s_s560_18", ""},
		    { "d3s_vv222_18", ""},
		    { "d3s_gls63_17", ""},
		    { "d3s_clubman_11", ""},
		    { "d3s_coupeconcept_10", ""},
		    { "d3s_pajero_07_38", ""},
		    { "d3s_silvia_s15_02", ""},
		    { "d3s_cayenne_16", ""},
		    { "d3s_cayenne_turbo_16", ""},
		    { "d3s_macan_16", ""},
		    { "d3s_evoque_16", ""},
		    { "d3s_evoque_sd4_16", ""},
		    { "d3s_evoque_si4_16", ""},
		    { "d3s_evoque_td4_16", ""},
		    { "d3s_svr_17_SD4", ""},
		    { "d3s_svr_17_CHARGED", ""},
		    { "d3s_svr_17_SVR", ""},
		    { "d3s_svr_17_007", ""},
		    { "d3s_cullinan_19", ""},
		    { "d3s_cullinan_19_II", ""},
		    { "d3s_cullinan_19_BB", ""},
		    { "d3s_cullinan_19_FE", ""},
		    { "d3s_ghost_18_EWB", ""},
		    { "d3s_ghost_18_EWB_II", ""},
		    { "d3s_ghost_18_EWB_III", ""},
		    { "d3s_novus_phantom_18", ""},
		    { "d3s_novus_phantom_18_2", ""},
		    { "d3s_novus_phantom_18_3", ""},  
		    { "d3s_wrx_17", ""},
		    { "d3s_wrx_sti_17", ""},
		    { "d3s_200_16_EX", ""},	  
		    { "d3s_f80_14_EX2", ""},
		    { "d3s_f80_14_EX3", ""},
		    { "d3s_e60_09_EX", ""},
		    { "d3s_qx56_13_EX", ""},
		    { "d3s_qx56_13_EX2", ""},
		    { "d3s_vesta_15_EX", ""},  
			{ "d3s_eldorado_76", ""}
        };
    };

	class tow_shop {
		side = "civ";
		conditions = "license_civ_tow || {!(playerSide isEqualTo civilian)}";
		vehicles[] = {
			{ "d3s_titan_17_TAR", "" },
			{ "d3s_fseries_17_P3E", "" },
			{ "Jonzie_Forklift", "" },
			{ "Jonzie_Tow_Truck", "" }
        };
    };
	
	class civ_bike {
		side = "civ";
		conditions = "license_civ_bike || {!(playerSide isEqualTo civilian)}";
		vehicles[] = {
			{ "V12_DIAVEL_NR", "" },
			{ "V12_APRILIARSV4_Rouge", "" },
			{ "V12_KTM", "" },
			{ "V12_YFZ450_BLEU", "" },			
			{ "V12_YFZ450_RACE1", "" },
			{ "V12_YFZ450_RACE2", "" },
			{ "V12_YFZ450_RACE3", "" },
			{ "V12_YFZ450_RACE4", "" },
			{ "V12_YFZ450_RACE5", "" },
			{ "V12_YFZ450_ROUGE", "" },
			{ "V12_KAWASAKIH2_2017_Rouge", "" },
			{ "V12_S1000RRSTREET_Rouge", "" },
			{ "V12_HARLEYBOBBER_noir", "" },
			{ "V12_HARLEYKNUCKLEHEAD_noir", "" },
			{ "V12_YZF_VO", "" },
			{ "V12_APRILIAMXV4504", "" },
			{ "V12_CRF450SGEND", "" }, 
			{ "V12_MONKEY_Rouge", "" },
			{ "d3s_Suzuki_Hayabusa", "" },
			{ "d3s_Ducati_XDiavel_S", "" },
			{ "d3s_KTM_1290_Super_Duke", "" },
			{ "d3s_Aprilia_Tuono_V4_1100_RR", "" },
			{ "d3s_Ducati_Monster_1200_S", "" }, 
			{ "d3s_BMW_S_1000_RR", "" },
			{ "V12_KTM50CCN", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "EC635_Unarmed", "" },
			{ "d3s_AS_365", "" },
            { "C_Plane_Civil_01_F", "" } //Apex DLC
        };
    };

    class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
			{ "d3s_tiger_2975", "" },// ADD PRICE 
			{ "d3s_6x6_14", "" },// ADD PRICE 
			{ "d3s_lm002_90", "" },// ADD PRICE 
			{ "d3s_kuruma_gtaV", "" },// ADD PRICE 
			{ "Cactus_Jeep", "" },// ADD PRICE 
			{ "d3s_insurgent_gtaV", "" },// ADD PRICE 
			{ "d3s_h1_06", "" },// ADD PRICE 
			{ "d3s_g800_17", "" },// ADD PRICE 
            { "B_Heli_Light_01_stripped_F", "" },
			{ "I_Heli_Transport_02_F", "" }, // ADD PRICE 
			{ "O_Heli_Transport_04_covered_F", "" }, // ADD PRICE 
			{ "I_E_Heli_light_03_unarmed_F", "" }, // ADD PRICE 
            { "O_T_LSV_02_unarmed_F", "" } //Apex DLC
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "d3s_charger_15_EMS", "" },
            { "d3s_explorer_EMS_13", "" },
			{ "d3s_g500_18_EMS", "" },
			{ "d3s_raptor_EMS_17", "" },
			{ "Jonzie_Ambulance", "" }
        };
    };

    class med_air_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "B_UAV_06_medical_F", "" },
			{ "EC635_ADAC", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
			{ "d3s_crown_98_PD", "call life_coplevel >= 1" },
			{ "d3s_taurus_FPI_10", "call life_coplevel >= 1" },
			{ "d3s_cherokee_18_JPPV", "call life_coplevel >= 1" },
			{ "d3s_charger_15_CPP", "call life_coplevel >= 4" },
			{ "d3s_FPIU_13", "call life_coplevel >= 4" },
			{ "d3s_explorer_UNM_13", "call life_coplevel >= 8" },
			{ "d3s_camry_18_UNM", "call life_coplevel >= 8" },
			{ "d3s_tiger_233034", "call life_coplevel >= 8" },
			{ "d3s_tahoe_UNM", "call life_coplevel >= 10" },
			{ "d3s_ctsv_16_unm", "call life_coplevel >= 10" },
			{ "d3s_raptor_UNM_17", "call life_coplevel >= 10" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
			{ "EC635_ADAC", "call life_coplevel >= 2" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" },
			{ "O_Heli_Light_02_unarmed_F", "call life_covlevel >= 4"},
			{ "I_Heli_light_03_unarmed_F", "call life_coplevel >= 4"}
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class B_UAV_06_medical_F { 
        vItemSpace = 60;
        conditions = "";
        price = 1200;
        textures[] = {};
    };
	
	class d3s_fseries_17_P3E {
        vItemSpace = 150;
        conditions = "";
        price = 52000;
        textures[] = {};
    };
	
	class d3s_sian_20 {
        vItemSpace = 75;
        conditions = "";
        price = 1250000;
        textures[] = {};
    };
	
	class d3s_zonda_18 {
        vItemSpace = 75;
        conditions = "";
        price = 3210000;
        textures[] = {};
    };
	
	class d3s_zonda_18_R {
        vItemSpace = 75;
        conditions = "";
        price = 3250000;
        textures[] = {};
    };
	
	class d3s_roadrunner_71_GTX {
        vItemSpace = 75;
        conditions = "";
        price = 41000;
        textures[] = {};
    };
	
	class d3s_veyron_12 {
        vItemSpace = 75;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class d3s_voiture_19 {
        vItemSpace = 75;
        conditions = "";
        price = 3200000;
        textures[] = {};
    };
	
	class d3s_mclaren_18 {
        vItemSpace = 75;
        conditions = "";
        price = 3200000;
        textures[] = {};
    };
	
	class d3s_senna_18 {
        vItemSpace = 75;
        conditions = "";
        price = 3200000;
        textures[] = {};
    };
	
	class d3s_teslaS_16_85 {
        vItemSpace = 75;
        conditions = "";
        price = 75000;
        textures[] = {};
    };
	
	//REBEL VEHICLES ARE BELOW
	class d3s_tiger_2975 {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_6x6_14 {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_lm002_90 {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_kuruma_gtaV {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class Cactus_Jeep {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_insurgent_gtaV {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_h1_06 {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class d3s_g800_17 {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 45;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class I_E_Heli_light_03_unarmed_F {
        vItemSpace = 200;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

    // Apex DLC
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 1469;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            }, "" },
            { "Black", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };

    // Police ems

	class d3s_cherokee_18_JPPV {
        vItemSpace = 150;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\PDSKINS\PDCHEROKEE.paa"
            }, "" }
		};
    };
	
	
	class d3s_taurus_FPI_10 {
        vItemSpace = 100;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\PDSKINS\PDTAURUS.paa"
            }, "" }	
		};
    };
	
	class d3s_crown_98_PD {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\PDSKINS\PDCROWN.paa"
            }, "" }
		};
    };

	class d3s_FPIU_13 {
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\PDSKINS\PDEXPLORER.paa"
            }, "" }	
		};
    };
	
	class d3s_raptor_UNM_17 {
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {};
    };

	class d3s_tahoe_UNM {
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {};
    };

	class d3s_explorer_UNM_13 {
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {};
    };

	class d3s_camry_18_UNM { //Unmarked Toyota Camry
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class d3s_tiger_233034 { //SERT HUMVEE
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class d3s_charger_15_CPP {
        vItemSpace = 120;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
				"textures\PDSKINS\PDCHARGER.paa"
			}, "" }
		};
    };
	
	class d3s_charger_15_EMS {
        vItemSpace = 120;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSCHARGER.paa"
            }, "" }	
		};
    };
	
	class d3s_g500_18_EMS {
        vItemSpace = 120;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSGWAGON.paa"
            }, "" }	
		};
    };
	
	class Jonzie_Ambulance {
        vItemSpace = 120;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSAMBULANCE.paa"
            }, "" }	
		};
    };
	
	class d3s_explorer_EMS_13 {
        vItemSpace = 200;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSEXPLORER.paa"
            }, "" }	
		};
    };
	
	class Fox_Silverado {
        vItemSpace = 450;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSAMBULANCE.paa"
            }, "" }	
		};
    };
	
	class Fox_Stretcher_Ambulance {
        vItemSpace = 1;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class d3s_raptor_EMS_17 {
        vItemSpace = 250;
        conditions = "";
        price = 0;
        textures[] = {
			{ "EMS", "med", {
                "textures\EMSSKINS\EMSRAPTOR.paa"
            }, "" }	
		};
    };
	
	class Fox_Firetruck {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	
	
	class Fox_HeavyRescue2 {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {};
    };
	
	class d3s_f86_15_UNM {
        vItemSpace = 50;
        conditions = "";
        price = 25000;
        textures[] = {};
    };
	
	class EC635_SAR {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
    };
	
	class d3s_gls63amg_17_FSB {
        vItemSpace = 50;
        conditions = "";
        price = 98000;
        textures[] = {};
    };
	
	class d3s_vklasse_17_UNM {
        vItemSpace = 50;
        conditions = "";
        price = 71988;
        textures[] = {};
    };
	
	class d3s_ctsv_16_unm {
	    vItemSpace = 100;
        conditions = "";
        price = 46500;
        textures[] = {};
    };
	
	class d3s_challenger_15_CPU {
        vItemSpace = 50;
        conditions = "";
        price = 32000;
        textures[] = {};
    };
	
	class Fox_CrownVictoria_PoliceUnMarked {
        vItemSpace = 50;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
	
	class Fox_CrownVictoria_NYPD {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\fox\crownvic.paa"
            }, "" },
			{ "Sheriff 2", "cop", {
                "textures\fox\foxcrownpd.paa"
            }, "" }		
        };
    };
	
		class Fox_Taurus16_HWP {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\fox\2016taurus.paa"
            }, "" }
        };
    };

	class Fox_Explorer16 {
        vItemSpace = 50;
        conditions = "";
        price = 25000;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\fox\explorer16.paa"
            }, "" }
        };
    };
	
	class Fox_Charger16_HWP {
        vItemSpace = 50;
        conditions = "";
        price = 24000;
        textures[] = {
			{ "Sheriff", "cop", {
                "textures\fox\charger16.paa"
            }, "" }
        };
    };
	
	class Fox_2003Impala {
		vItemSpace = 100;
		conditions = "";
		price = 12000;
		textures[] = {};
	};

	
    //D3S
	class d3s_santafe_19 {
		vItemSpace = 75;
		conditions = "";
		price = 27600;
		textures[] = {};
	};

	
	class d3s_kraz_6316 {
		vItemSpace = 200;
		conditions = "";
		price = 45000;
		texture[] = {};
	};
	
	class Jonzie_Forklift {
		vItemSpace = 0;
		conditions = "";
		price = 150;
		textures[] = {};
	};
	
	class d3s_eldorado_76 {
		vItemSpace = 75;
		conditions = "";
		price = 29000;
		textures[] = {};
	};
	
	class d3s_zil_130_01 {
		vItemSpace = 150;
		conditions = "";
		price = 8300;
		textures[] = {};
	};
	
	class d3s_zil_130_06 {
		vItemSpace = 150;
		conditions = "";
		price = 11000;
		textures[] = {};
	};
	
	class d3s_zil_131 {
		vItemSpace = 150;
		conditions = "";
		price = 9200;
		textures[] = {};
	};
	
	class d3s_zil_131_3 {
		vItemSpace = 175;
		conditions = "";
		price = 12400;
		textures[] = {};
	};
	
	class d3s_zil_131_2 {
		vItemSpace = 150;
		conditions = "";
		price = 9400;
		textures[] = {};
	};
	
	class d3s_kamaz_5350_bocha {
		vItemSpace = 200;
		conditions = "";
		price = 18500;
		textures[] = {};
	};
	
	class d3s_zil_131_4 {
		vItemSpace = 350;
		conditions = "";
		price = 52000;
		textures[] = {};
	};
	
	class d3s_kraz_6315 {
		vItemSpace = 225;
		conditions = "";
		price = 18500;
		textures[] = {};
	};
	
	class d3s_luaz969m {
		vItemSpace = 75;
		conditions = "";
		price = 2500;
		textures[] = {};
	};
	
	class d3s_zaz968m {
		vItemSpace = 75;
		conditions = "";
		price = 1200;
		textures[] = {};
	};
	
	class d3s_uaz_3159 {
		vItemSpace = 100;
		conditions = "";
		price = 4300;
		textures[] = {};
	};
	class d3s_ural {
		vItemSpace = 200;
		conditions = "";
		price = 36000;
		textures[] = {};
	};
	class d3s_ural_tent {
		vItemSpace = 375;
		conditions = "";
		price = 54000;
		textures[] = {};
	};
	
	class d3s_next_kung {
		vItemSpace = 250;
		conditions = "";
		price = 48000;
		textures[] = {};
	};
	
	class d3s_actros_14 {
		vItemSpace = 550;
		conditions = "";
		price = 65292;
		textures[] = {};
	};
	
	class d3s_malibu_18_red {
		vItemSpace = 50;
		conditions = "";
		price = 28465;
		textures[] = {};
	};
	
	class d3s_malibu_18 {
		vItemSpace = 50;
		conditions = "";
		price = 24550;
		textures[] = {};
	};
	

	class d3s_Suzuki_GSX_R_1000 {
		vItemSpace = 40;
		conditions = "";
		price = 17699;
		textures[] = {};
	};

	class d3s_KTM_1290_Super_Duke {
		vItemSpace = 40;
		conditions = "";
		price = 18699;
		textures[] = {};
	};

	class d3s_Kawasaki_ZX7RR {
		vItemSpace = 40;
		conditions = "";
		price = 7250;
		textures[] = {};
	};

	class d3s_Kawasaki_Z800 {
		vItemSpace = 40;
		conditions = "";
		price = 8399;
		textures[] = {};
	};

	class d3s_Kawasaki_Ninja_H2R {
		vItemSpace = 40;
		conditions = "";
		price = 55000;
		textures[] = {};
	};

	class d3s_Ducati_XDiavel_S {
		vItemSpace = 40;
		conditions = "";
		price = 20995;
		textures[] = {};
	};

	class d3s_Ducati_Monster_1200_S {
		vItemSpace = 40;
		conditions = "";
		price = 17295;
		textures[] = {};
	};

	class d3s_BMW_S_1000_RR {
		vItemSpace = 40;
		conditions = "";
		price = 13995;
		textures[] = {};
	};

	class d3s_Aprilia_Tuono_V4_1100_RR {
		vItemSpace = 40;
		conditions = "";
		price = 17900;
		textures[] = {};
	};

	class d3s_uaz_3162 {
		vItemSpace = 100;
		conditions = "";
		price = 11667;
		textures[] = {};
	};

	class d3s_uaz_469P {
		vItemSpace = 140;
		conditions = "";
		price = 14999;
		textures[] = {};
	};

	class d3s_uaz_469P_EXP {
		vItemSpace = 150;
		conditions = "";
		price = 15445;
		textures[] = {};
	};

	class d3s_niva_2329 {
		vItemSpace = 100;
		conditions = "";
		price = 6000;
		textures[] = {};
	};

	class d3s_oka {
		vItemSpace = 50;
		conditions = "";
		price = 800;
		textures[] = {};
	};

	class d3s_g63amg_16 {
		vItemSpace = 100;
		conditions = "";
		price = 99950;
		texture[] = {};
	};

	class d3s_willys {
		vItemSpace = 40;
		conditions = "";
		price = 2099;
		textures[] = {};
	};

	class d3s_vesta_15_EX {
		vItemSpace = 100;
		conditions = "";
		price = 6448;
		textures[] = {};
	};

	class d3s_qx56_13_EX2 {
		vItemSpace = 100;
		conditions = "";
		price = 22424;
		textures[] = {};
	};

	class d3s_qx56_13_EX {
		vItemSpace = 100;
		conditions = "";
		price = 19899;
		textures[] = {};
	};

	class d3s_e60_09_EX {
		vItemSpace = 100;
		conditions = "";
		price = 9750;
		textures[] = {};
	};
	
	class d3s_ghibli_14_nerissimo {
		vItemSpace = 100;
		conditions = "";
		price = 78850;
		textures[] = {};
	};

	class d3s_f80_14_EX3 {
		vItemSpace = 100;
		conditions = "";
		price = 62000;
		textures[] = {};
	};

	class d3s_f80_14_EX2 {
		vItemSpace = 100;
		conditions = "";
		price = 60000;
		textures[] = {};
	};

	class d3s_beetle_04 {
		vItemSpace = 100;
		conditions = "";
		price = 4499;
		textures[] = {};
	};

	class d3s_200_VX_16 {
		vItemSpace = 100;
		conditions = "";
		price = 73480;
		textures[] = {};
	};

	class d3s_200_16_EX {
		vItemSpace = 100;
		conditions = "";
		price = 84480;
		textures[] = {};
	};

	class d3s_titan_17_TAR {
		vItemSpace = 300;
		conditions = "";
		price = 44000;
		textures[] = {};
	};
	
	class d3s_veneno_13 {
		vItemSpace = 100;
		conditions = "";
		price = 4000000;
		textures[] = {};
	};
	
	class d3s_tuatara_19 {
		vItemSpace = 100;
		conditions = "";
		price = 1300000;
		textures[] = {};
	};
	
	class d3s_huracan_18_SPD_P {
		vItemSpace = 100;
		conditions = "";
		price = 274000;
		textures[] = {};
	};
	
	class d3s_asterion_15_DMC {
		vItemSpace = 100;
		conditions = "";
		price = 950000;
		textures[] = {};
	};
	
	class d3s_599XXE_12 {
		vItemSpace = 100;
		conditions = "";
		price = 1400000;
		textures[] = {};
	};

	class d3s_wrx_sti_17 {
		vItemSpace = 100;
		conditions = "";
		price = 36015;
		textures[] = {};
	};

	class d3s_wrx_17 {
		vItemSpace = 100;
		conditions = "";
		price = 27515;
		textures[] = {};
	};
	
	class d3s_cla_14 {
		vItemSpace = 100;
		conditions = "";
		price = 28999;
		textures[] = {};
	};

	class d3s_kodiaq_17 {
		vItemSpace = 100;
		conditions = "";
		price = 36990;
		textures[] = {};
	};

	class d3s_novus_phantom_18_3 {
		vItemSpace = 100;
		conditions = "";
		price = 625000;
		textures[] = {};
	};

	class d3s_novus_phantom_18_2 {
		vItemSpace = 100;
		conditions = "";
		price = 550000;
		textures[] = {};
	};

	class d3s_novus_phantom_18 {
		vItemSpace = 100;
		conditions = "";
		price = 499000;
		textures[] = {};
	};

	class d3s_ghost_18_EWB_III {
		vItemSpace = 100;
		conditions = "";
		price = 722700;
		textures[] = {};
	};

	class d3s_ghost_18_EWB_II {
		vItemSpace = 100;
		conditions = "";
		price = 668000;
		textures[] = {};
	};

	class d3s_ghost_18_EWB {
		vItemSpace = 100;
		conditions = "";
		price = 628760;
		textures[] = {};
	};

	class d3s_cullinan_19_FE {
		vItemSpace = 100;
		conditions = "";
		price = 415000;
		textures[] = {};
	};

	class d3s_cullinan_19_BB {
		vItemSpace = 100;
		conditions = "";
		price = 399000;
		textures[] = {};
	};

	class d3s_cullinan_19_II {
		vItemSpace = 100;
		conditions = "";
		price = 349000;
		textures[] = {};
	};

	class d3s_cullinan_19 {
		vItemSpace = 100;
		conditions = "";
		price = 325000;
		textures[] = {};
	};

	class d3s_svr_17_007 {
		vItemSpace = 100;
		conditions = "";
		price = 115000;
		textures[] = {};
	};

	class d3s_svr_17_SVR {
		vItemSpace = 100;
		conditions = "";
		price = 85000;
		textures[] = {};
	};

	class d3s_svr_17_CHARGED {
		vItemSpace = 100;
		conditions = "";
		price = 96000;
		textures[] = {};
	};

	class d3s_svr_17_SD4 {
		vItemSpace = 100;
		conditions = "";
		price = 89000;
		textures[] = {};
	};
//I STOPPED HERE SOMEONE ELSE NEEDS TO WORK ON VEHICLES AT THIS POINT
	class d3s_evoque_td4_16 {
		vItemSpace = 100;
		conditions = "";
		price = 42500;
		textures[] = {};
	};

	class d3s_evoque_si4_16 {
		vItemSpace = 100;
		conditions = "";
		price = 68200;
		textures[] = {};
	};

	class d3s_evoque_sd4_16 {
		vItemSpace = 100;
		conditions = "";
		price = 58000;
		textures[] = {};
	};

	class d3s_evoque_16 {
		vItemSpace = 125;
		conditions = "";
		price = 58000;
		textures[] = {};
	};

	class d3s_macan_16 {
		vItemSpace = 100;
		conditions = "";
		price = 53500;
		textures[] = {};
	};

	class d3s_cayenne_turbo_16 {
		vItemSpace = 100;
		conditions = "";
		price = 76000;
		textures[] = {};
	};

	class V12_DIAVEL_NR {
        vItemSpace = 40;
        conditions = "";
        price = 18795;
        textures[] = {};
    };
	
	class V12_KTM50CCN {
		vItemSpace = 1;
		conditions = "";
		price = 1200;
		textures[] = {};
	};

	class V12_APRILIARSV4_Rouge {
        vItemSpace = 40;
        conditions = "";
        price = 21999;
        textures[] = {};
    };

	class V12_HARLEYKNUCKLEHEAD_noir {
        vItemSpace = 40;
        conditions = "";
        price = 14900;
        textures[] = {};
    };

	class V12_HARLEYBOBBER_noir {
        vItemSpace = 40;
        conditions = "";
        price = 19000;
        textures[] = {};
    };

	class V12_S1000RRSTREET_Rouge {
        vItemSpace = 40;
        conditions = "";
        price = 17000;
        textures[] = {};
    };

	class V12_KAWASAKIH2_2017_Rouge {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };

		class V12_KTM {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
		class V12_YFZ450_ROUGE {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
		
		class V12_YFZ450_RACE1 {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
			
		class V12_YFZ450_RACE2 {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
			
		class V12_YFZ450_RACE3 {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
			
		class V12_YFZ450_RACE4 {
        vItemSpace = 40;
        conditions = "";
        price = 10000;
        textures[] = {};
    };
			
		class V12_YFZ450_RACE5 {  
        vItemSpace = 40;       
        conditions = "";
        price = 10000;
        textures[] = {};
    };
	
	class d3s_titan_17 {
		vItemSpace = 185;
		conditions = "";
		price = 156000;
		textures[] = {};
	};
		
	class d3s_challenger_15_LW {
		vItemSpace = 30;
		conditions = "";
		price = 100000;
		textures[] = {};
	};
		
	class d3s_challenger_15_WIDE {
		vItemSpace = 30;
		conditions = "";
		price = 86600;
		textures[] = {};
	};
		
	class d3s_challenger_15 {
		vItemSpace = 30;
		conditions = "";
		price = 46800;
		textures[] = {};
	};
		
	class V12_RX7VEILSIDE {
		vItemSpace = 20;
		conditions = "";
		price = 113000;
		textures[] = {};
	};
		
	class V12_ECLIPSEFNF1 {
		vItemSpace = 30;
		conditions = "";
		price = 23876;
		textures[] = {};
	};
		
	class V12_EVO7 {
		vItemSpace = 30;
		conditions = "";
		price = 85800;
		textures[] = {};
	};
		
	class V12_S15_NOIR {
		vItemSpace = 30;
		conditions = "";
		price = 45000;
		textures[] = {};
	};
		
	class V12_S15_FNF {
		vItemSpace = 30;
		conditions = "";
		price = 56200;
		textures[] = {};
	};
		
	class V12_SKYLINEFNF {
		vItemSpace = 40;
		conditions = "";
		price = 114800;
		textures[] = {};
	};
		
	class d3s_911gt3rs_18 {
		vItemSpace = 30;
		conditions = "";
		price = 97800;
		textures[] = {};
	};
		
	class d3s_panamera_17 {
		vItemSpace = 40;
		conditions = "";
		price = 200850;
		textures[] = {};
	};
		
	class V12_SUPRAFNF_FAST {
		vItemSpace = 40;
		conditions = "";
		price = 185000;
		textures[] = {};
	};
		
	class V12_SLAPJACK {
		vItemSpace = 30;
		conditions = "";
		price = 156800;
		textures[] = {};
	};
		
	class V12_JETTA {
		vItemSpace = 30;
		conditions = "";
		price = 46500;
		textures[] = {};
	};
		
	class d3s_uaz_469P_EXP {
		vItemSpace = 120;
		conditions = "";
		price = 266800;
		textures[] = {};
	};
		
	class d3s_trailcat_17 {
		vItemSpace = 100;
		conditions = "";
		price = 166800;
		textures[] = {};
	};
	
	class Jonzie_Tanker_Truck {
		vItemSpace = 200;
		conditions = "";
		price = 1166800;
		textures[] = {};
	};
		
	class V12_BELAIR_GNOIR {
		vItemSpace = 50;
		conditions = "";
		price = 456800;
		textures[] = {};
	};
		
	class Jonzie_Datsun_Z432 {
		vItemSpace = 45;
		conditions = "";
		price = 166800;
		textures[] = {};
	};
		
	class V12_RT {
		vItemSpace = 75;
		conditions = "";
		price = 3366800;
		textures[] = {};
	};
		
	class d3s_coronet_70 {
		vItemSpace = 50;
		conditions = "";
		price = 75800;
		textures[] = {};
	};
		
	class d3s_savana_VAN {
		vItemSpace = 200;
		conditions = "";
		price = 60800;
		textures[] = {};
	};
		
	class DC_GMC1979 {
		vItemSpace = 200;
		conditions = "";
		price = 90800;
		textures[] = {};
	};
		
	class DELTA_Mercedes_Actros {
		vItemSpace = 70;
		conditions = "";
		price = 2266800;
		textures[] = {};
	};
		
	class V12_COBRA_BLEU {
		vItemSpace = 60;
		conditions = "";
		price = 1166800;
		textures[] = {};
	};
	
	class DELTA_Caterpillar_CT610 {
		vItemSpace = 200;
		conditions = "";
		price = 126800;
		textures[] = {};
	};
			
	class DELTA_Durastar_Box_Truck_2002 {
		vItemSpace = 250;
		conditions = "";
		price = 3115500;
		textures[] = {};
	};
			
	class V12_FREIGHTLINER {
		vItemSpace = 200;
		conditions = "";
		price = 106800;
		textures[] = {};
	};
			
	class DELTA_Kennworth_C500 {
		vItemSpace = 200;
		conditions = "";
		price = 106800;
		textures[] = {};
	};
			
	class DELTA_Kennworth_T660_11 {
		vItemSpace = 200;
		conditions = "";
		price = 106800;
		textures[] = {};
	};
			
	class DELTA_Peterbilt_389 {
		vItemSpace = 220;
		conditions = "";
		price = 1200000;
		textures[] = {};
	};
			
	class DELTA_Renault_K_430 {
		vItemSpace = 200;
		conditions = "";
		price = 190800;
		textures[] = {};
	};
			
	class DELTA_Scania_R730 {
		vItemSpace = 230;
		conditions = "";
		price = 2234800;
		textures[] = {};
	};
			
	class DELTA_Scania_R730_Dump_Truck {
		vItemSpace = 250;
		conditions = "";
		price = 3466800;
		textures[] = {};
	};
			
	class C_Tractor_01_F {
		vItemSpace = 100;
		conditions = "";
		price = 45860;
		textures[] = {};
	};
			
	class  DELTA_Volvo_VAH_630 {
		vItemSpace = 210;
		conditions = "";
		price = 120800;
		textures[] = {};
	};

	class d3s_cayenne_16 {
		vItemSpace = 100;
		conditions = "";
		price = 66800;
		textures[] = {};
	};

	class d3s_titan_17 {
		vItemSpace = 160;
		conditions = "";
		price = 56000;
		textures[] = {};
	};

	class d3s_silvia_s15_02 {
		vItemSpace = 100;
		conditions = "";
		price = 9209;
		textures[] = {};
	};

	class d3s_pajero_07_38 {
		vItemSpace = 100;
		conditions = "";
		price = 14000;
		textures[] = {};
	};

	class d3s_coupeconcept_10 {
		vItemSpace = 100;
		conditions = "";
		price = 26000;
		textures[] = {};
	};

	class d3s_clubman_11 {
		vItemSpace = 100;
		conditions = "";
		price = 13000;
		textures[] = {};
	};

	class d3s_gls63_17 {
		vItemSpace = 100;
		conditions = "";
		price = 125000;
		textures[] = {};
	};

	class d3s_vv222_18 {
		vItemSpace = 100;
		conditions = "";
		price = 228000;
		textures[] = {};
	};

	class d3s_s560_18 {
		vItemSpace = 100;
		conditions = "";
		price = 144638;
		textures[] = {};
	};

	class d3s_vklasse_17 {
		vItemSpace = 100;
		conditions = "";
		price = 40000;
		textures[] = {};
	};

	class d3s_s600_17 {
		vItemSpace = 100;
		conditions = "";
		price = 192000;
		textures[] = {};
	};

	class d3s_s600_14 {
		vItemSpace = 100;
		conditions = "";
		price = 125000;
		textures[] = {};
	};

	class d3s_ml350_09 {
		vItemSpace = 100;
		conditions = "";
		price = 16000;
		textures[] = {};
	};

	class d3s_trailcat_17 {
		vItemSpace = 100;
		conditions = "";
		price = 65000;
		texture[] = {};
	};

	class d3s_gl63amg_12_SE {
		vItemSpace = 100;
		conditions = "";
		price = 46000;
		textures[] = {};
	};

	class d3s_gl63amg_12 {
		vItemSpace = 100;
		conditions = "";
		price = 160000;
		textures[] = {};
	};

	class d3s_g500_18 {
		vItemSpace = 100;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_g350d_15 {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {};
	};

	class d3s_w212s_13_EX {
		vItemSpace = 100;
		conditions = "";
		price = 225000;
		textures[] = {};
	};

	class d3s_w212s_13 {
		vItemSpace = 100;
		conditions = "";
		price = 225000;
		textures[] = {};
	};

	class d3s_w212_13 {
		vItemSpace = 100;
		conditions = "";
		price = 225000;
		textures[] = {};
	};

	class d3s_e350_16 {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {};
	};

	class d3s_e220_16 {
		vItemSpace = 100;
		conditions = "";
		price = 90000;
		textures[] = {};
	};

	class d3s_cla_45amg_15 {
		vItemSpace = 100;
		conditions = "";
		price = 68000;
		textures[] = {};
	};

	class d3s_cla_45amg_14 {
		vItemSpace = 100;
		conditions = "";
		price = 56000;
		textures[] = {};
	};

	class d3s_cla_250_15 {
		vItemSpace = 100;
		conditions = "";
		price = 67000;
		textures[] = {};
	};

	class d3s_cla_250_14 {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
	};

	class d3s_cla_15 {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
	};
	
	class A3L_MonsterTruck {
		vItemSpace = 100;
		conditions = "";
		price = 120000;
		textures[] = {};
	};

	class d3s_C450_15 {
		vItemSpace = 100;
		conditions = "";
		price = 90000;
		textures[] = {};
	};

	class d3s_C300_14 {
		vItemSpace = 100;
		conditions = "";
		price = 90000;
		textures[] = {};
	};

	class d3s_C180_14 {
		vItemSpace = 100;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_amgGTR_15 {
		vItemSpace = 100;
		conditions = "";
		price = 250000;
		textures[] = {};
	};

	class d3s_amgGT_15 {
		vItemSpace = 100;
		conditions = "";
		price = 180000;
		textures[] = {};
	};

	class d3s_gle63amgS_15 {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {};
	};

	class d3s_gle43amg_15 {
		vItemSpace = 100;
		conditions = "";
		price = 90000;
		textures[] = {};
	};
	
	class EC635_Unarmed {
		vItemSpace = 100;
		conditions = "license_civ_pilot";
		price = 600000;
		textures[] = {};
	};

	class d3s_g65amg_16 {
		vItemSpace = 100;
		conditions = "";
		price = 110000;
		textures[] = {};
	};

	class d3s_g63amg_18 {
		vItemSpace = 100;
		conditions = "";
		price = 115000;
		textures[] = {};
	};

	class d3s_C63S_14 {
		vItemSpace = 100;
		conditions = "";
		price = 125000;
		textures[] = {};
	};

	class d3s_C63_14 {
		vItemSpace = 100;
		conditions = "";
		price = 120000;
		textures[] = {};
	};

	class d3s_amazing_a45_16_EX {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {};
	};

	class d3s_amazing_a45_16 {
		vItemSpace = 100;
		conditions = "";
		price = 100000;
		textures[] = {};
	};

	class C_Mazda_MX5 {
		vItemSpace = 100;
		conditions = "";
		price = 25730;
		textures[] = {};
	};

	class d3s_levante_s_17_mat {
		vItemSpace = 100;
		conditions = "";
		price = 72990;
		textures[] = {};
	};

	class d3s_levante_17 {
		vItemSpace = 100;
		conditions = "";
		price = 72990;
		textures[] = {};
	};

	class d3s_ghibli_14_q4 {
		vItemSpace = 100;
		conditions = "";
		price = 69490;
		textures[] = {};
	};

	class d3s_ghibli_esteso_14 {
		vItemSpace = 100;
		conditions = "";
		price = 75500;
		textures[] = {};
	};

	class d3s_ghibli_14_30 {
		vItemSpace = 100;
		conditions = "";
		price = 68000;
		textures[] = {};
	};

	class d3s_ghibli_14 {
		vItemSpace = 100;
		conditions = "";
		price = 68000;
		textures[] = {};
	};

	class d3s_alfieri_14 {
		vItemSpace = 100;
		conditions = "";
		price = 92000;
		textures[] = {};
	};

	class d3s_g65amg_Mansory {
		vItemSpace = 100;
		conditions = "";
		price = 225000;
		textures[] = {};
	};

	class V12_MONKEY_Rouge {
        vItemSpace = 20;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

	class V12_CRF450SGEND {
        vItemSpace = 40;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

	class V12_APRILIAMXV4504 {
        vItemSpace = 40;
        conditions = "";
        price = 22000;
        textures[] = {};
    };

	class V12_YZF_VO {
        vItemSpace = 40;
        conditions = "";
        price = 17000;
        textures[] = {};
    };


	class d3s_Suzuki_Hayabusa {
        vItemSpace = 40;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

	class d3s_lx570_16 {
		vItemSpace = 100;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_is_16 {
		vItemSpace = 100;
		conditions = "";
		price = 90000;
		textures[] = {};
	};

	class d3s_urus_18 {
		vItemSpace = 100;
		conditions = "";
		price = 40000;
		textures[] = {};
	};

	class d3s_urus_12 {
		vItemSpace = 100;
		conditions = "";
		price = 32000;
		textures[] = {};
	};


	class d3s_asterion_15 {
		vItemSpace = 100;
		conditions = "";
		price = 1000000;
		textures[] = {};
	};

	class d3s_vesta_15_turbo {
		vItemSpace = 100;
		conditions = "";
		price = 16000;
		textures[] = {};
	};

	class d3s_vesta_15 {
		vItemSpace = 100;
		conditions = "";
		price = 16000;
		textures[] = {};
	};

	class d3s_cherokee_18_TRCK {
		vItemSpace = 200;
		conditions = "";
		price = 25740;
		textures[] = {};
	};

	class d3s_cherokee_18 {
		vItemSpace = 200;
		conditions = "";
		price = 25740;
		textures[] = {};
	};

	class d3s_xesv_17 {
		vItemSpace = 100;
		conditions = "";
		price = 30000;
		textures[] = {};
	};

	class d3s_xes_15 {
		vItemSpace = 100;
		conditions = "";
		price = 25000;
		textures[] = {};
	};

	class d3s_xe_15 {
		vItemSpace = 100;
		conditions = "";
		price = 19000;
		textures[] = {};
	};

	class d3s_fpace_17_s {
		vItemSpace = 100;
		conditions = "";
		price = 45200;
		textures[] = {};
	};

	class d3s_fpace_17_r {
		vItemSpace = 1;
		conditions = "";
		price = 45000;
		textures[] = {};
	};

	class d3s_QX60_16_S {
		vItemSpace = 100;
		conditions = "";
		price = 44350;
		textures[] = {};
	};

	class d3s_QX60_16 {
		vItemSpace = 100;
		conditions = "";
		price = 40000;
		textures[] = {};
	};

	class d3s_qx56_13_SE {
		vItemSpace = 100;
		conditions = "";
		price = 66750;
		textures[] = {};
	};

	class d3s_qx56_13 {
		vItemSpace = 100;
		conditions = "";
		price = 60000;
		textures[] = {};
	};

	class d3s_q50_ER_14 {
		vItemSpace = 100;
		conditions = "";
		price = 21000;
		textures[] = {};
	};

	class d3s_q50_14 {
		vItemSpace = 100;
		conditions = "";
		price = 21000;
		textures[] = {};
	};

	class d3s_hornet_52 {
		vItemSpace = 100;
		conditions = "";
		price = 15000;
		textures[] = {};
	};

	class d3s_civic_17 {
		vItemSpace = 50;
		conditions = "";
		price = 16000;
		textures[] = {};
	};

	class d3s_savana_VAN {
		vItemSpace = 100;
		conditions = "";
		price = 32050;
		textures[] = {};
	};

	class d3s_savana_05 {
		vItemSpace = 100;
		conditions = "";
		price = 32500;
		textures[] = {};
	};

	class d3s_taurus_eco_10 {
		vItemSpace = 100;
		conditions = "";
		price = 27800;
		textures[] = {};
	};

	class d3s_boss_15 {
		vItemSpace = 100;
		conditions = "";
		price = 32000;
		textures[] = {};
	};

	class d3s_model_a {
		vItemSpace = 100;
		conditions = "";
		price = 42500;
		textures[] = {};
	};

	class d3s_focus_14 {
		vItemSpace = 100;
		conditions = "";
		price = 17950;
		textures[] = {};
	};

	class d3s_focus_17_LB {
		vItemSpace = 100;
		conditions = "";
		price = 20000;
		textures[] = {};
	};

	class d3s_focus_17 {
		vItemSpace = 100;
		conditions = "";
		price = 20000;
		textures[] = {};
	};

	class d3s_fiesta_16 {
		vItemSpace = 100;
		conditions = "";
		price = 15000;
		textures[] = {};
	};

	class d3s_fseries_17_TOW {
        vItemSpace = 50;
        conditions = "";
        price = 0;
        textures[] = {
			{ "TowTruck", "civ", {
                "textures\tow\towtruck.paa"
            }, "" }
		};
    };

	class d3s_fseries_17 {
		vItemSpace = 200;
		conditions = "";
		price = 30000;
		textures[] = {};
	};

	class d3s_raptor_17 {
		vItemSpace = 100;
		conditions = "";
		price = 55000;
		textures[] = {};
	};

	class d3s_raptor_SCR_17 {
		vItemSpace = 200;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_explorer_13 {
		vItemSpace = 100;
		conditions = "";
		price = 32000;
		textures[] = {};
	};

	class d3s_crown_98 {
		vItemSpace = 100;
		conditions = "";
		price = 5000;
		textures[] = {};
	};

	class d3s_LaFerrari_14 {
		vItemSpace = 100;
		conditions = "";
		price = 2200000;
		textures[] = {};
	};

	class d3s_durango_18_SRT {
		vItemSpace = 100;
		conditions = "";
		price = 30495;
		textures[] = {};
	};

	class d3s_durango_18 {
		vItemSpace = 100;
		conditions = "";
		price = 30000;
		textures[] = {};
	};

	class d3s_srthellcat_15 {
		vItemSpace = 100;
		conditions = "";
		price = 60000;
		textures[] = {};
	};

	class d3s_charger_15 {
		vItemSpace = 100;
		conditions = "";
		price = 30000;
		textures[] = {};
	};

	class d3s_survolt_10 {
		vItemSpace = 100;
		conditions = "";
		price = 1300000;
		textures[] = {};
	};

	class d3s_300C_12 {
		vItemSpace = 100;
		conditions = "";
		price = 29590;
		textures[] = {};
	};

	class d3s_tahoe_08 {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
	};

	class d3s_camaro_zl1_1le_18 {
		vItemSpace = 100;
		conditions = "";
		price = 25000;
		textures[] = {};
	};

	class d3s_camaro_zl1_17 {
		vItemSpace = 100;
		conditions = "";
		price = 30000;
		textures[] = {};
	};

	class d3s_camaro_16 {
		vItemSpace = 100;
		conditions = "";
		price = 35000;
		textures[] = {};
	};

	class d3s_escalade_16 {
		vItemSpace = 100;
		conditions = "";
		price = 75000;
		textures[] = {};
	};

	class d3s_ctsv_16 {
		vItemSpace = 100;
		conditions = "";
		price = 47000;
		textures[] = {};
	};

	class d3s_skylark_52 {
		vItemSpace = 100;
		conditions = "";
		price = 15000;
		textures[] = {};
	};
	
	class d3s_skyline_02_V {
		vItemSpace = 100;
		conditions = "";
		price = 45000;
		textures[] = {};
	};

	class d3s_e89_12 {
		vItemSpace = 100;
		conditions = "";
		price = 50000;
		textures[] = {};
	};

	class d3s_f86_15_m {
		vItemSpace = 100;
		conditions = "";
		price = 219000;
		textures[] = {};
	};

	class d3s_f86_15_OFF {
		vItemSpace = 100;
		conditions = "";
		price = 219000;
		textures[] = {};
	};

	class d3s_f85_15_m {
		vItemSpace = 100;
		conditions = "";
		price = 9000;
		textures[] = {};
	};

	class d3s_f13_13 {
		vItemSpace = 100;
		conditions = "";
		price = 113000;
		textures[] = {};
	};

	class d3s_f10_12_UNM_GOV1 {
		vItemSpace = 100;
		conditions = "";
		price = 23000;
		textures[] = {};
	};

	class d3s_f10_12_EX {
		vItemSpace = 100;
		conditions = "";
		price = 23000;
		textures[] = {};
	};

	class d3s_f90_18_m {
		vItemSpace = 100;
		conditions = "";
		price = 120000;
		textures[] = {};
	};

	class d3s_f90_18_FE {
		vItemSpace = 100;
		conditions = "";
		price = 120000;
		textures[] = {};
	};
//DAker done here
	class d3s_f90_18 {
		vItemSpace = 100;
		conditions = "";
		price = 45000;
		textures[] = {};
	};

	class d3s_f10_12 {
		vItemSpace = 100;
		conditions = "";
		price = 14800;
		textures[] = {};
	};

	class d3s_e60_09 {
		vItemSpace = 100;
		conditions = "";
		price = 10000;
		textures[] = {};
	};
	
	class d3s_next_bocha {
		vItemSpace = 250;
		conditions = "";
		price = 75000;
		textures[] = {};
	};
	
	class Jonzie_Tow_Truck {
		vItemSpace = 90;
		conditions = "";
		price = 15000;
		textures[] = {};
	};
	
	class d3s_next_tent {
		vItemSpace = 250;
		conditions = "";
		price = 250000;
		textures[] = {};
	};
	
	class d3s_kamaz_6350 {
		vItemSpace = 250;
		conditions = "";
		price = 450000;
		textures[] = {};
	};

	class d3s_amazing_f82_16 {
		vItemSpace = 100;
		conditions = "";
		price = 70000;
		textures[] = {};
	};

	class d3s_f82_14_LB {
		vItemSpace = 100;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_f80_14_GTS {
		vItemSpace = 100;
		conditions = "";
		price = 83000;
		textures[] = {};
	};

	class d3s_f80_14_SE {
		vItemSpace = 100;
		conditions = "";
		price = 78000;
		textures[] = {};
	};

	class d3s_f80_14 {
		vItemSpace = 100;
		conditions = "";
		price = 70000;
		textures[] = {};
	};

	class d3s_f87_18_m {
		vItemSpace = 100;
		conditions = "";
		price = 58900;
		textures[] = {};
	};

	class d3s_f87_17_EX {
		vItemSpace = 100;
		conditions = "";
		price = 92000;
		textures[] = {};
	};

	class d3s_f87_17_m {
		vItemSpace = 100;
		conditions = "";
		price = 58900;
		textures[] = {};
	};

	class d3s_amazing_ACS8_17 {
		vItemSpace = 100;
		conditions = "";
		price = 150000;
		textures[] = {};
	};

	class d3s_amazing_ACS8_17_IND {
		vItemSpace = 100;
		conditions = "";
		price = 150000;
		textures[] = {};
	};

	class d3s_f87_17_ACH {
		vItemSpace = 100;
		conditions = "";
		price = 58900;
		textures[] = {};
	};

	class d3s_f87_17 {
		vItemSpace = 100;
		conditions = "";
		price = 80000;
		textures[] = {};
	};

	class d3s_continentalGT_18 {
		vItemSpace = 100;
		conditions = "";
		price = 202000;
		textures[] = {};
	};

	class d3s_bentayga_18 {
		vItemSpace = 100;
		conditions = "";
		price = 165000;
		textures[] = {};
	};

	class d3s_rapide_10 {
		vItemSpace = 100;
		conditions = "";
		price = 132000;
		textures[] = {};
	};

	class d3s_giulietta_16 {
		vItemSpace = 100;
		conditions = "";
		price = 41000;
		textures[] = {};
	};

	class d3s_giulia_quad_16 {
		vItemSpace = 50;
		conditions = "";
		price = 40000;
		textures[] = {};
	};

	class d3s_e60_09_ACS5 {
		vItemSpace = 100;
		conditions = "";
		price = 14800;
		textures[] = {};
	};

	class d3s_e38_98 {
		vItemSpace = 80;
		conditions = "";
		price = 62900;
		textures[] = {};
	};

	class d3s_AS_365 {
		vItemSpace = 120;
		conditions = "license_civ_pilot";
		price = 420000;
		textures[] = {};
	};

	class d3s_luaz969m_2 {
		vItemSpace = 120;
		conditions = "";
		price = 3000;
		textures[] = {};
	};

	class d3s_w140_98 {
		vItemSpace = 120;
		conditions = "";
		price = 13000;
		textures[] = {};
	};

    // Apex DLC
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" }
        };
    };
 
    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 307500;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 1500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };

    // Apex DLC
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 20000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 8000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 0;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 0;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 0;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 0;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 80000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 0;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 3500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 500;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 4000;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 90000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 85000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 50;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
			{ "EMS", "med", {
                "textures\EMSSKINS\Medic_M900.jpg"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
			{ "EMS", "med", {
                "textures\EMSSKINS\Medic_M900.jpg"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 50;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS", "med", {
                "textures\EMSSKINS\medic_orca.jpg"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
};
