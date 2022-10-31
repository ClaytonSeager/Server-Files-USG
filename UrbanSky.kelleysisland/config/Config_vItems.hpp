/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "rubber", "electronics", "quicksteel", "bandages", "etabli", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };
	
	class Drugs {
		name = "STR_Shop_drugs";
		side = "civ";
		conditions = "";
		items[] = { "lsd", "Lude"};
	};
	
	class liquor {
        name = "STR_Shop_Liquor";
        side = "civ";
        conditions = "";
        items[] = { "beer", "whiskey", "moonshine"};
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "bandages", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator"};
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "codeCracker", "rabbit", "ziptie", "gag", "blindfold", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "ziptie", "codeCracker", "gag", "blindfold", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class repair {
        name = "STR_MAR_Repair_Shop";
        side = "civ";
        conditions = "license_civ_repair || {!(playerSide isEqualTo civilian)}";
        items[] = { "quicksteel", "weldingsupplies", "enginepart", "panels", "tire", "bulb", "electronics", "gearpart", "hydraulics", "winchpart", "brakeparts", "stabilizer", "glasspanel", "turret", "track", "rudder", "slat", "era" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 38;
        sellPrice = 19;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 1275;
        sellPrice = 637;
        illegal = false;
        edible = -1;
        icon = "icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 40;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };
	
	class codeCracker {
        variable = "codeCracker";
        displayName = "STR_Item_codeCracker";
        weight = 2;
        buyPrice = 2000;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "icons\codeCracker.paa";
	};

	class counterfitCash {
        variable = "counterfitCash";
        displayName = "STR_Item_counterfitCash";
        weight = 4;
        buyPrice = -1;
        sellPrice = 52500;
        illegal = true;
        edible = -1;
        icon = "icons\counterfitCash.paa";
	};	

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 0;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 39;
        sellPrice = 18;
        illegal = false;
        edible = -1;
        icon = "icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 3;
        buyPrice = 1400;
        sellPrice = 700;
        illegal = true;
        edible = -1;
        icon = "icons\ico_spikeStrip.paa";
    };
	
	class stock {
        variable = "stock";
        displayName = "STR_Item_stock";
        weight = 3;
        buyPrice = 22000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\stock.paa";
    };
	
	class barrel {
        variable = "barrel";
        displayName = "STR_Item_barrel";
        weight = 3;
        buyPrice = 22000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\gunbarrel.paa";
    };
	
	class titanium {
        variable = "titanium";
        displayName = "STR_Item_titanium";
        weight = 3;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\titanium.paa";
    };
	
	class gunframe {
        variable = "gunframe";
        displayName = "STR_Item_gunframe";
        weight = 3;
        buyPrice = 22000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "icons\gunframe.paa";
    };
	
	class weldingsupplies {
        variable = "weldingsupplies";
        displayName = "STR_Item_welding";
        weight = 3;
        buyPrice = 465;
        sellPrice = 230;
        illegal = false;
        edible = -1;
        icon = "icons\welding.paa";
    };
	
	class etabli {
        variable = "etabli";
        displayName = "STR_Item_bench";
        weight = 3;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\bench.paa";
    };

	class enginepart {
        variable = "enginepart";
        displayName = "STR_Item_engineparts";
        weight = 3;
        buyPrice = 2500;
        sellPrice = 1200;
        illegal = false;
        edible = -1;
        icon = "icons\enginepart.paa";
    };
	
	class quicksteel {
        variable = "quicksteel";
        displayName = "STR_Item_quicksteel";
        weight = 3;
        buyPrice = 85;
        sellPrice = 42;
        illegal = false;
        edible = -1;
        icon = "icons\quicksteel.paa";
    };
	
	class engine {
        variable = "engine";
        displayName = "STR_Item_engine";
        weight = 10;
        buyPrice = 10000;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        icon = "icons\engine.paa";
    };
	
	class frame {
        variable = "frame";
        displayName = "STR_Item_frame";
        weight = 10;
        buyPrice = 600;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\frame.paa";
    };
	
	class fueltank {
        variable = "fueltank";
        displayName = "STR_Item_fueltank";
        weight = 10;
        buyPrice = 400;
        sellPrice = 200;
        illegal = false;
        edible = -1;
        icon = "icons\fueltank.paa";
    };
	
	class panels {
        variable = "panels";
        displayName = "STR_Item_panels";
        weight = 3;
        buyPrice = 1200;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\panels.paa";
    };
	
	class tire {
        variable = "tire";
        displayName = "STR_Item_tire";
        weight = 3;
        buyPrice = 1390;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\tire.paa";
    };
	
	class bulb {
        variable = "bulb";
        displayName = "STR_Item_bulb";
        weight = 3;
        buyPrice = 800;
        sellPrice = 400;
        illegal = false;
        edible = -1;
        icon = "icons\bulb.paa";
    };
	
	class electronics {
        variable = "electronics";
        displayName = "STR_Item_electronics";
        weight = 3;
        buyPrice = 300;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\electronics.paa";
    };
	
	class gearpart {
        variable = "gearpart";
        displayName = "STR_Item_gears";
        weight = 3;
        buyPrice = 1590;
        sellPrice = 800;
        illegal = false;
        edible = -1;
        icon = "icons\gears.paa";
    };
	
	class hydraulics {
        variable = "hydraulics";
        displayName = "STR_Item_hydraulic";
        weight = 3;
        buyPrice = 1700;
        sellPrice = 1500;
        illegal = false;
        edible = -1;
        icon = "icons\hydraulics.paa";
    };
	
	class winchpart {
        variable = "winchpart";
        displayName = "STR_Item_winch";
        weight = 3;
        buyPrice = 1300;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\winch.paa";
    };
	
	class brakeparts {
        variable = "brakeparts";
        displayName = "STR_Item_brake";
        weight = 3;
        buyPrice = 1100;
        sellPrice = 850;
        illegal = false;
        edible = -1;
        icon = "icons\brakes.paa";
    };
	
	class stabilizer {
        variable = "stabilizer";
        displayName = "STR_Item_stabilizer";
        weight = 3;
        buyPrice = 1050;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\stabilizer.paa";
    };
	
	class glasspanel {
        variable = "glasspanel";
        displayName = "STR_Item_glasspanel";
        weight = 3;
        buyPrice = 1069;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\glasspane.paa";
    };
	
	class turret {
        variable = "turret";
        displayName = "STR_Item_turret";
        weight = 3;
        buyPrice = 2500;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\turret.paa";
    };
	
	class track {
        variable = "track";
        displayName = "STR_Item_tread";
        weight = 3;
        buyPrice = 1350;
        sellPrice = 1250;
        illegal = false;
        edible = -1;
        icon = "icons\track.paa";
    };
	
	class rudder {
        variable = "rudder";
        displayName = "STR_Item_rudder";
        weight = 3;
        buyPrice = 1200;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\stabilizer.paa";
    };
	
	class slat {
        variable = "slat";
        displayName = "STR_Item_slat";
        weight = 3;
        buyPrice = 30;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\slat.paa";
    };
	
	class era {
        variable = "era";
        displayName = "STR_Item_ERA";
        weight = 3;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\turret.paa";
    };
	
	class beer {
        variable = "beer";
        displayName = "STR_Item_Beer";
        weight = 3;
        buyPrice = 3;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        icon = "icons\beer.paa";
    };
	
	class whiskey {
        variable = "whiskey";
        displayName = "STR_Item_Whiskey";
        weight = 4;
        buyPrice = 15;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\whiskey.paa";
    };
	
	class moonshine {
        variable = "moonshine";
        displayName = "STR_Item_Moonshine";
        weight = 5;
        buyPrice = 20;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\moonshine.paa";
    };


	class ziptie {
		variable = "ziptie";
		displayName = "STR_Ziptie";
		weight = 6;
		buyPrice = 5;
		sellPrice = 2;
		illegal = true;
		edible = -1;
		icon = "icons\ziptie.paa";
	};

	class gag {
		variable = "gag";
		displayName = "STR_gag";
		weight = 7;
		buyPrice = 5;
		sellPrice = 3;
		illegal = true;
		edible = -1;
		icon = "icons\gag.paa";
	};

	class blindfold {
		variable = "blindfold";
		displayName = "STR_blindfold";
		weight = 7;
		buyPrice = 5;
		sellPrice = 3;
		illegal = true;
		edible = -1;
		icon = "icons\blindfold.paa";
	};

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 35;
        sellPrice = 20;
        illegal = true;
        edible = -1;
        icon = "icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 12;
        buyPrice = -1;
        sellPrice = 55000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_goldBar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 3;
        buyPrice = 600;
        sellPrice = 300;
        illegal = true;
        edible = -1;
        icon = "icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 30;
        sellPrice = 15;
        illegal = true;
        edible = -1;
        icon = "icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 400;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 150;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 600;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 320;
        illegal = false;
        edible = -1;
        icon = "icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 275;
        illegal = false;
        edible = -1;
        icon = "icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 275;
        illegal = false;
        edible = -1;
        icon = "icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 90;
        illegal = false;
        edible = -1;
        icon = "icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 120;
        illegal = false;
        edible = -1;
        icon = "icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 15;
        buyPrice = -1;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 8;
        buyPrice = -1;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 5;
        buyPrice = 1200;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 4;
        buyPrice = 800;
        sellPrice = 780;
        illegal = true;
        edible = -1;
        icon = "icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = 1000;
        sellPrice = 940;
        illegal = true;
        edible = -1;
        icon = "icons\ico_cocaineProcessed.paa";
    };
	
	class lsd {
		variable = "lsd";
		displayName = "STR_Item_lsd";
		weight = 1;
		buyPrice = 45;
		sellPrice = 0;
		illegal = true;
		edible = -1;
		icon = "customicons\LSD.paa";
	};
	
	class Lude {
		variable = "Lude";
		displayName = "STR_Item_Lude";
		weight = 1;
		buyPrice = 45;
		sellPrice = 0;
		illegal = true;
		edible = -1;
		icon = "customicons\Lude.paa";
	};

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        icon = "icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 5;
        sellPrice = 30;
        illegal = false;
        edible = 10;
        icon = "icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 5;
        sellPrice = 25;
        illegal = false;
        edible = 10;
        icon = "icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 3;
        sellPrice = 2;
        illegal = false;
        edible = 40;
        icon = "icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 30;
        icon = "icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 30;
        sellPrice = 20;
        illegal = false;
        edible = 20;
        icon = "icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 45;
        sellPrice = 35;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 35;
        sellPrice = 25;
        illegal = false;
        edible = 25;
        icon = "icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 175;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 60;
        sellPrice = 40;
        illegal = false;
        edible = 30;
        icon = "icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 140;
        illegal = false;
        edible = -1;
        icon = "icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 170;
        sellPrice = 140;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 30;
        sellPrice = 20;
        illegal = false;
        edible = 80;
        icon = "icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 140;
        illegal = false;
        edible = -1;
        icon = "icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 170;
        sellPrice = 140;
        illegal = false;
        edible = 100;
        icon = "icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 10;
        buyPrice = -1;
        sellPrice = 2000;
        illegal = true;
        edible = -1;
        icon = "icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 200;
        sellPrice = 100;
        illegal = false;
        edible = 100;
        icon = "icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 20;
        sellPrice = 15;
        illegal = false;
        edible = 65;
        icon = "icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 15;
        illegal = false;
        edible = -1;
        icon = "icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 13;
        buyPrice = 20;
        sellPrice = 15;
        illegal = false;
        edible = 45;
        icon = "icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 180;
        illegal = false;
        edible = -1;
        icon = "icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 200;
        sellPrice = 180;
        illegal = false;
        edible = 100;
        icon = "icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 300;
        sellPrice = 250;
        illegal = false;
        edible = 100;
        icon = "icons\ico_muttonLeg.paa";
    };
	
	class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 80;
        sellPrice = 60;
        illegal = true;
        edible = -1;
        icon = "icons\Morphine.paa";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\ico_hellokittybandage.paa";
    };

    class leather {
        variable = "leather";
        displayName = "STR_Item_leather";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\ico_leather.paa";
    };

    class Hemp_fibers {
        variable = "Hemp Fibers";
        displayName = "STR_Item_HempFibers";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\hempfibers.paa";
    };

    class Wool {
        variable = "Wool";
        displayName = "STR_Item_Wool";
        weight = 2;
        buyPrice = 5;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "icons\ico_wool.paa";
    };
	
	class rubber {
        variable = "Rubber";
        displayName = "STR_Item_rubber";
        weight = 2;
        buyPrice = 200;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_rubber.paa";
    };

    class batmanbandaid {
        variable = "batmanbandaid";
        displayName = "STR_Item_batmanBandaid";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_batmanbandaid.paa";
    };

    class cuddlesbandaid {
        variable = "cuddlesbandaid";
        displayName = "STR_Item_cuddlesBandaid";
        weight = 1;
        buyPrice = 999999;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cuddlebandaid.paa";
    };

    class cycleengine {
        variable = "cycleengine";
        displayName = "STR_Item_cycleEngine";
        weight = 8;
        buyPrice = 5000;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cycleengine.paa";
    };

    class cyclefork {
        variable = "cyclefork";
        displayName = "STR_Item_cyclefork";
        weight = 2;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cycleforks.paa";
    };

    class cycleframe {
        variable = "cycleframe";
        displayName = "STR_Item_cycleFrame";
        weight = 5;
        buyPrice = 1000;
        sellPrice = 500;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cycleframe.paa";
    };

    class cycletank {
        variable = "cycletank";
        displayName = "STR_Item_cycleTank";
        weight = 3;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cycletank.paa";
    };

    class cyclewheel {
        variable = "cyclewheel";
        displayName = "STR_Item_cycleWheel";
        weight = 2;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cyclewheel.paa";
    };

    class drpepper {
        variable = "drpepper";
        displayName = "STR_Item_drPepper";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_drpepper.paa";
    };

    class hotdog {
        variable = "hotdog";
        displayName = "STR_Item_hotDog";
        weight = 2;
        buyPrice = 20;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "icons\ico_hotdog.paa";
    };

    class kartframe {
        variable = "kartframe";
        displayName = "STR_Item_kartFrame";
        weight = 5;
        buyPrice = 300;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kartframe.paa";
    };

    class kartseat {
        variable = "kartseat";
        displayName = "STR_Item_kartSeat";
        weight = 2;
        buyPrice = 200;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kartseat.paa";
    };

    class karttank {
        variable = "karttank";
        displayName = "STR_Item_kartTank";
        weight = 3;
        buyPrice = 200;
        sellPrice = 100;
        illegal = false;
        edible = -1;
        icon = "icons\ico_karttank.paa";
    };

    class kartwheel {
        variable = "kartwheel";
        displayName = "STR_Item_kartWheel";
        weight = 2;
        buyPrice = 100;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "icons\ico_kartwheel.paa";
    };

    class pepsi {
        variable = "pepsi";
        displayName = "STR_Item_pepsi";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_pepsi.paa";
    };

    class scoobydoobandaid {
        variable = "scoobydoobandaid";
        displayName = "STR_Item_scoobydooBandaid";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "icons\ico_scoobybandaid.paa";
    };

    class spraybottle {
        variable = "spraybottle";
        displayName = "STR_Item_sprayBottle";
        weight = 1;
        buyPrice = 999999;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "icons\ico_sprayBottle.paa";
    };

    // ------------

    class carbody {
        variable = "carbody";
        displayName = "STR_Item_carBody";
        weight = 10;
        buyPrice = 100000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carbody.paa";
    };

    class carchassis {
        variable = "carchassis";
        displayName = "STR_Item_carChassis";
        weight = 10;
        buyPrice = 100000;
        sellPrice = 50000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carchassis.paa";
    };

    class cardoor {
        variable = "cardoor";
        displayName = "STR_Item_carDoor";
        weight = 5;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_cardoor.paa";
    };

    class carfender {
        variable = "carfender";
        displayName = "STR_Item_carFender";
        weight = 2;
        buyPrice = 300;
        sellPrice = 150;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carfender.paa";
    };

    class carfront {
        variable = "carfront";
        displayName = "STR_Item_carFront";
        weight = 5;
        buyPrice = 2000;
        sellPrice = 1000;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carfront.paa";
    };

    class carhood {
        variable = "carhood";
        displayName = "STR_Item_carHood";
        weight = 5;
        buyPrice = 500;
        sellPrice = 250;
        illegal = false;
        edible = -1;
        icon = "icons\ico_carhood.paa";
    };
};
