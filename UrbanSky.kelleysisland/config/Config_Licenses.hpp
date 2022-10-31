/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 30;
        illegal = false;
        side = "civ";
    };
	
	class restrictedlicense {
        variable = "restrictedlicense";
        displayName = "STR_Restricted_License";
        price = 0;
        illegal = false;
        side = "civ";
    };
	
	class SurplusShop {
		variable = "SurplusShop";
		displayName = "STR_License_SurplusShop";
		Price = 0;
		illegal = false;
		side = "civ";
	};
	
	class repair {
        variable = "repair";
        displayName = "Repair License";
        price = 0;
        illegal = false;
        side = "civ";
    };
	
    class sport {
        variable = "sport";
        displayName = "Dealer License";
        price = 0;
        illegal = false;
        side = "civ";
    };
	
	class bike {
        variable = "bike";
        displayName = "STR_License_Bike";
        price = 0;
        illegal = false;
        side = "civ";
    };
	
	class tow {
		variable = "tow";
		displayName = "STR_License_tow";
		price = 0;
		illegal = false;
		side = "civ";
	};
	
    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 50;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 5000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 100;
        illegal = false;
        side = "civ";
    };
	
	class gundealer {
        variable = "gundealer";
        displayName = "Gun Dealer";
        price = 0;
        illegal = false;
        side = "civ";
    };
	
	class rifle {
        variable = "rifle";
        displayName = "STR_License_Rifle";
        price = 100;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 3000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 1500;
        illegal = false;
        side = "civ";
    };

    class business {
        variable = "business";
        displayName = "STR_License_Business";
        price = 99999999999;
        illegal = false;
        side = "civ";
    };


    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 1500;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 500;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 500;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 1000;
        illegal = true;
        side = "civ";
    };

    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 1000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 1000;
        illegal = true;
        side = "civ";
    };

    class rebel {
        variable = "rebel";
        displayName = "STR_License_Rebel";
        price = 20000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 8000;
        illegal = false;
        side = "cop";
    };

    class undercovergear {
        variable = "cug";
        displayName = "STR_License_DTU";
        price = 0;
        illegal = false;
        side = "cop";
    };

    class swat {
        variable = "csert";
        displayName = "STR_License_sert";
        price = 0;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 0;
        illegal = false;
        side = "med";
    };
};
