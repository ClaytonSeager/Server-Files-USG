/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

    Terms of use:
      - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
      - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
      - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define true 1
#define false 0

class Max_Settings_Craft {
    default_lang = "en"; // fr / en / de / es

    textures_base_path = "The-Programmer\Craft\textures";

    item_workbench = "etabli";
    3d_object_workbench = "Land_Workbench_01_F";
    place_only_in_house = true;

    save_workbench_positions = true; // Save the position and re-place the workbench after the reboot of the server

    class crafts {
        class vItem { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VITEMS";

            class engine {
                itemsRequired[] = {
                    {"enginepart",6},
					{"iron_refined",4},
					{"oil_processed",2}
                };
                moneyRequired = 0;

                itemGive = "engine"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Engine used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class cycleengine {
                itemsRequired[] = {
                    {"enginepart",1},
					{"iron_refined",3},
					{"oil_processed",1}
                };
                moneyRequired = 0;

                itemGive = "cycleengine"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Cycle Engine used to create MotorCycle And Go Karts"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class weldsupplies {
                itemsRequired[] = {
					{"iron_refined",1},
					{"salt_unrefined",1}
                };
                moneyRequired = 0;

                itemGive = "weldingsupplies"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A resource used for vehicle building and mechanical repairs"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class engineparts {
                itemsRequired[] = {
                    {"copper_refined",1},
					{"iron_refined",1}
                };
                moneyRequired = 0;

                itemGive = "enginepart"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicle engines"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class tires {
                itemsRequired[] = {
					{"iron_refined",2},
					{"rubber",3}
                };
                moneyRequired = 0;

                itemGive = "tire"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to fix or create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class cyclewheel {
                itemsRequired[] = {
					{"iron_refined",1},
					{"rubber",2}
                };
                moneyRequired = 0;

                itemGive = "cyclewheel"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create Motorcycles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class kartwheel {
                itemsRequired[] = {
					{"iron_refined",1},
					{"rubber",2}
                };
                moneyRequired = 0;

                itemGive = "kartwheel"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create a go kart"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class bulbs {
                itemsRequired[] = {
					{"glass",3},
					{"iron_refined",3}
                };
                moneyRequired = 0;

                itemGive = "bulb"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class gearpart {
                itemsRequired[] = {
					{"iron_refined",2},
					{"copper_refined",2},
					{"oil_processed",2}
                };
                moneyRequired = 0;

                itemGive = "gearpart"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class hydraulics {
                itemsRequired[] = {
					{"iron_refined",5},
					{"copper_refined",5},
					{"oil_processed",3}
                };
                moneyRequired = 0;

                itemGive = "hydraulics"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class winch {
                itemsRequired[] = {
					{"iron_refined",2},
					{"copper_refined",3},
					{"oil_processed",1}
                };
                moneyRequired = 0;

                itemGive = "winchpart"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class glass {
                itemsRequired[] = {
					{"glass",5}
                };
                moneyRequired = 0;

                itemGive = "glasspanel"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class titanium {
                itemsRequired[] = {
					{"iron_refined",5},
					{"copper_refined",5},
					{"sand",5}
                };
                moneyRequired = 0;

                itemGive = "titanium"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Rare and expensive resource used for various products"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class frame {
                itemsRequired[] = {
                    {"panels",2},
					{"iron_refined",3},
					{"gearpart",2},
					{"quicksteel",1},
					{"copper_refined",1},
					{"weldingsupplies",2}
                };
                moneyRequired = 0;

                itemGive = "frame"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A frame/chassis used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class cycleframe {
                itemsRequired[] = {
					{"iron_refined",4},
					{"copper_refined",1},
					{"weldingsupplies",3}
                };
                moneyRequired = 0;

                itemGive = "cycleframe"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A frame used to create a mototrcycle"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class kartframe {
                itemsRequired[] = {
					{"iron_refined",3},
					{"gearpart",2},
					{"weldingsupplies",2}
                };
                moneyRequired = 0;

                itemGive = "kartframe"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A frame used to create a go kart"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class cardoor {
                itemsRequired[] = {
					{"iron_refined",4},
					{"glasspanel",1},
					{"copper_refined",1},
					{"weldingsupplies",1}
                };
                moneyRequired = 0;

                itemGive = "cardoor"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A door used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class carchassis {
                itemsRequired[] = {
                    {"frame",1},
					{"engine",1},
					{"tire",4},
					{"breakparts",4},
					{"weldingsupplies",4}
                };
                moneyRequired = 0;

                itemGive = "carchassis"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A car chassis used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class carhood {
                itemsRequired[] = {
                    {"weldingsupplies",1},
					{"iron_refined",4}
                };
                moneyRequired = 0;

                itemGive = "carhood"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A car hood used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class carfront {
                itemsRequired[] = {
                    {"bulb",2},
					{"iron_refined",3},
					{"toolkit",1},
					{"copper_refined",1}
                };
                moneyRequired = 0;

                itemGive = "carfront"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A cars front end used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class carfender {
                itemsRequired[] = {
                    {"weldingsupplies",1},
					{"iron_refined",3}
                };
                moneyRequired = 0;

                itemGive = "carfender"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A car fender used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class carbody {
                itemsRequired[] = {
                    {"panels",2},
					{"iron_refined",10},
					{"fueltank",1},
					{"weldingsupplies",5}
                };
                moneyRequired = 0;

                itemGive = "carbody"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A car body used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class cyclefork {
                itemsRequired[] = {
                    {"bulb",1},
					{"iron_refined",4},
					{"electronics",2},
					{"copper_refined",1}
                };
                moneyRequired = 0;

                itemGive = "cyclefork"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A front forks used to create motorcycle"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class fueltank {
                itemsRequired[] = {
                    {"fuelFull",1},
					{"quicksteel",3},
					{"iron_refined",3},
					{"copper_refined",1},
					{"weldingsupplies",2}
                };
                moneyRequired = 0;

                itemGive = "fueltank"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A fuel tank used to create vehicles"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class cycletank {
                itemsRequired[] = {
                    {"fuelFull",1},
					{"iron_refined",2}
                };
                moneyRequired = 0;

                itemGive = "cycletank"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A fuel tank used to create a motorcycle"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class karttank {
                itemsRequired[] = {
                    {"fuelFull",1},
					{"iron_refined",1},
					{"copper_refined",1}
                };
                moneyRequired = 0;

                itemGive = "karttank"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A fuel tank used to create a go kart"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
			class barrel {
                itemsRequired[] = {
					{"iron_refined",5}
                };
                moneyRequired = 0;

                itemGive = "barrel"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create firearms"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
			};
			class gunframe {
                itemsRequired[] = {
					{"iron_refined",5}
                };
                moneyRequired = 0;

                itemGive = "gunframe"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create firearms"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class stock {
                itemsRequired[] = {
					{"iron_refined",5},
					{"rubber",5}
                };
                moneyRequired = 0;

                itemGive = "stock"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to create firearms"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class BodyPanel {
                itemsRequired[] = {
					{"iron_refined",4},
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "panels"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to craft a vehicle"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class BrakeParts {
                itemsRequired[] = {
					{"iron_refined",2},
					{"quicksteel",1}
                };
                moneyRequired = 0;

                itemGive = "brakeparts"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Used to repair or craft a vehicle"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class kartseat {
                itemsRequired[] = {
                    {"oil_processed",2}
                };
                moneyRequired = 0;

                itemGive = "kartseat"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "A seat used to create a go kart"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
            };
        };

        class weapon { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_WEAPONS";
			class BCMJack {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_bcmblackjack"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "BCM Jack Carbine Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class BCMMag {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "29rnd_300BLK_STANAG"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "BCM Jack Carbine 29rd Magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class RU556 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_RU556"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AR-15 Magpull Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class RU556Mag {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30rnd_556x45_EPR"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Ar-15 Magpull 30rd Magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class G3 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",4}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_g3sg1ris"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "G3 Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class G3Mag {
                itemsRequired[] = {
					{"iron_refined",5}
                };
                moneyRequired = 0;

                itemGive = "hlc_20rnd_762x51_b_G3"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "G3 20rd Magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class G3A4 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",5}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_g3ka4"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "G3A4 Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class G3A4Mag {
                itemsRequired[] = {
					{"copper_refined",5}
                };
                moneyRequired = 0;

                itemGive = "hlc_20rnd_762x51_b_G3"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "G3A4 20rd Magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class HK416 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_416D10"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "HK416 Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class HK416Mag {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30rnd_556x45_EPR"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "HK416 30rd Magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class M249 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",10}
                };
                moneyRequired = 0;

                itemGive = "hlc_m249_pip2"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "M249 Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class M249Para {
                itemsRequired[] = {
					{"copper_refined",15}
                };
                moneyRequired = 0;

                itemGive = "hlc_200rnd_556x45_M_SAW"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "M249 200rd Box Mag"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class slr107u {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",3}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_slr107u_MTK"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "SLR107u firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class slr762 {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_762x39_b_ak"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "SLR107U 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AEK971 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_aek971"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AEK971 firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AEK971545 {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_545x39_B_AK"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AEK971 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AK74 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",3}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_ak74"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AK74 firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AK545 {
                itemsRequired[] = {
					{"copper_refined",1}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_545x39_B_AK"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AK74 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AKS74 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",3}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_aks74"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AKS74 firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class AKS74mag {
                itemsRequired[] = {
					{"copper_refined",1}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_545x39_B_AK"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "AKS74 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class RPK {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",8}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_RPK12"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "RPK firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class RPKmag {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_545x39_B_AK"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "RPK 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class SG551 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",8}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_SG551LB"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "SG553 firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
            class SG551MAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30Rnd_556x45_EPR_sg550"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "SG551 30 round magazine"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class M27 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_M27IAR"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class M27MAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30rnd_556x45_EPR"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the M27 IAR"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class LVOA {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",3}
                };
                moneyRequired = 0;

                itemGive = "CSW_LVOA_C_Black"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class LVOAMAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "CSW_LVOA_30rnd_Mk318_SOST_mag"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the LVOA"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class FNLFal {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",5}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_FAL5000Rail"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class FNLMAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_20Rnd_762x51_B_fal"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the FNL Fal"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class AR15 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",5}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_vendimus"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class AR15MAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "29rnd_300BLK_STANAG"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the AR-15"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class ACR {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_rifle_ACR68_full_black"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class ACRMAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "hlc_30rnd_68x43_FMJ"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the ACR"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class Mk18 {
                itemsRequired[] = {
					{"barrel",1},
					{"stock",1},	
					{"gunframe",1},
					{"titanium",8}
                };
                moneyRequired = 0;

                itemGive = "srifle_EBR_F"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Firearm"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
			class MK18MAG {
                itemsRequired[] = {
					{"copper_refined",2}
                };
                moneyRequired = 0;

                itemGive = "20Rnd_762x51_Mag"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "Magazine for the Mk 18"; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting in Progress";
                timeToCraft = 10; // In seconds
				
			};
        };

        class uniform { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_UNIFORM";
			class GhillieSuit {
                itemsRequired[] = {
                    {"leather",5},
                    {"Wool",20},
					{"Hemp_fibers",20}
                };
                moneyRequired = 2500;

                itemGive = "u_b_ghilliesuit";
                condition = "";

                description = "This is a full Ghillie Suit. If you craft this clothing item please make sure that you either remove and store your current uniform as this will overwrite your uniform with the Ghillie Suit.";
                picture_path = "";

                progress_text = "Crafting the Ghillie Suit. This will get rid of your CURRENT UNIFORM!";
                timeToCraft = 10; // In seconds
            };
			class LamboOutfit {
                itemsRequired[] = {
                    {"leather",5},
                    {"Wool",20},
					{"diamond_cut",5},
					{"Hemp_fibers",40}
                };
                moneyRequired = 10000;

                itemGive = "U_I_CombatUniform";
                condition = "";

                description = "This is a Yellow Lamborghini Custom Outfit! Fit for a racer with some drip";
                picture_path = "";

                progress_text = "Crafting the Lamborghini Outfit. This will get rid of your CURRENT UNIFORM!";
                timeToCraft = 10; // In seconds
            };
			class LVOutfit {
                itemsRequired[] = {
                    {"leather",5},
					{"diamond_cut",5},
                    {"Wool",20},
					{"Hemp_fibers",40}
                };
                moneyRequired = 10000;

                itemGive = "U_I_CombatUniform_shortsleeve";
                condition = "";

                description = "This is a... Louis Vuitton Outfit? 中国制造";
                picture_path = "";

                progress_text = "Crafting the Louis Vuitton Outfit. This will get rid of your CURRENT UNIFORM!";
                timeToCraft = 10; // In seconds
            };

        };
		
		class headgear { // CATEGORY CLASS -> DO NOT EDIT //THIS DOES NOT WORK
            category_display_name = "STR_HEADGEAR";
			
			class BLACKCombatHelm {
                itemsRequired[] = {
                    {"leather",10},
                    {"Wool",5},
					{"titanium",2},
					{"Hemp_fibers",5}
                };
                moneyRequired = 0;

                itemGive = "TRYK_H_PASGT_BLK";
                condition = "";

                description = "This is a Black TRYK Combat Helmet. If you craft this clothing item please make sure that you either remove and store your current uniform as this will overwrite your uniform with the Ghillie Suit.";
                picture_path = "";

                progress_text = "Crafting the Black Combat Helmet. This will get rid of your CURRENT HELMET!";
                timeToCraft = 10; // In seconds
            };
			class TANCombatHelm {
                itemsRequired[] = {
                    {"leather",10},
                    {"Wool",5},
					{"titanium",2},
					{"Hemp_fibers",5}
                };
                moneyRequired = 0;

                itemGive = "TRYK_H_PASGT_TAN";
                condition = "";

                description = "This is a Tan TRYK Combat Helmet. If you craft this clothing item please make sure that you either remove and store your current uniform as this will overwrite your uniform with the Ghillie Suit.";
                picture_path = "";

                progress_text = "Crafting the Tan Combat Helmet. This will get rid of your CURRENT HELMET!";
                timeToCraft = 10; // In seconds
            };

        };

        class backpack { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_BACKPACK";
			
			class LongRangeRadio {
                itemsRequired[] = {
					{"electronics",5},
					{"rubber",1},	
					{"copper_refined",2},
					{"iron_refined",1},
					{"Wool",2},
					{"leather",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "tf_anprc155"; // Class of the object if virtuel item, classname of the object in the other cases
                condition = "";

                description = "This is the Invisible Long Range Radio! This will overwrite your current backpack, please make sure to take your current one off if you have one on and store it in a storage crate."; // Put "" for nothing
                picture_path = ""; // Put "" for nothing; example : "The-Programmer\Craft\textures\my_logo.paa" -> Size : 512 x 512

                progress_text = "Crafting your Long Range Radio! Make sure you drop your CURRENT BACKPACK!";
                timeToCraft = 10; // In seconds
				
			};

        };

        class vehicle { // CATEGORY CLASS -> DO NOT EDIT
            category_display_name = "STR_VEHICLES";

            class spike {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "Righteous_Spike";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Righteous Spike";
                timeToCraft = 10; // In seconds
            };
			class donkervoort {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "d3s_donkervoort_17";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Donker Voort";
                timeToCraft = 10; // In seconds
            };
			class raptorbig {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "RAPTOR_BIG";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating a Ford Raptor Big";
                timeToCraft = 10; // In seconds
            };
			class hudsonhornet {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "d3s_hornet_53";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Hudson Hornet";
                timeToCraft = 10; // In seconds
            };
			class roadrunner {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "d3s_roadrunner_71_GTX";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Road Runner GTX";
                timeToCraft = 10; // In seconds
            };
			class quartsregalia {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",4},
					{"titamium",6},
					{"oil_processed",2},
					{"electronics",4},
					{"toolkit",4}
                };
                moneyRequired = 0;

                itemGive = "d3s_QUA_Regalia_23_D_UNM";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Quartz Regalia";
                timeToCraft = 10; // In seconds
            };
			class tractor {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",1},
					{"oil_processed",4},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "C_Tractor_01_F";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Quartz Regalia";
                timeToCraft = 10; // In seconds
            };
			class willyjeep {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",1},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "d3s_willys";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Jeep Willy MB";
                timeToCraft = 10; // In seconds
            };
			class skylark {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "d3s_skylark_52";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Ford Model A Sultan";
                timeToCraft = 10; // In seconds
            };
			class eldoradocoupe {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "d3s_eldorado_68";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Cadillac Eldorado Coupe";
                timeToCraft = 10; // In seconds
            };
			class Belair {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "V12_BELAIR_GNOIR";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Belair";
                timeToCraft = 10; // In seconds
            };
			class Datsun {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "Jonzie_Datsun_Z432";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Datsun";
                timeToCraft = 10; // In seconds
            };
			class RT {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "V12_RT";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Charger RT";
                timeToCraft = 10; // In seconds
            };
			class Coronet {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "d3s_coronet_70";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Coronet";
                timeToCraft = 10; // In seconds
            };
			class PanelVan {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "d3s_savana_VAN";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Panel Van";
                timeToCraft = 10; // In seconds
            };
			class GMC {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",2},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "DC_GMC1979";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the GMC";
                timeToCraft = 10; // In seconds
            };
			class MercedesActros {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",4},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "DELTA_Mercedes_Actros";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Mercedes Actros";
                timeToCraft = 10; // In seconds
            };
			class Cobra {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",2},
					{"titamium",3},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 0;

                itemGive = "V12_COBRA_BLEU";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Cobra";
                timeToCraft = 10; // In seconds
            };
			class strider {
                itemsRequired[] = {
                    {"carchassis",1},
                    {"carhood",1},
					{"carfront",1},
					{"carfender",2},
					{"carbody",1},
					{"cardoor",4},
					{"titamium",10},
					{"oil_processed",2},
					{"electronics",2},
					{"toolkit",1}
                };
                moneyRequired = 1000000;

                itemGive = "I_MRAP_03_F";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Strider";
                timeToCraft = 10; // In seconds
            };
			class APRILIAMXV450 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "V12_APRILIAMXV450";
                condition = "";

                description = "";
                picture_path = "";

                progress_text = "Creating the Righteous Spike, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Aprilia {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Aprilia_Tuono_V4_1100_RR";
                condition = "";

                description = "This is the Aprilia Tuona V4 RR";
                picture_path = "";

                progress_text = "Creating the Aprilia Tuono V4, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class H2R {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Kawasaki_Ninja_H2R";
                condition = "";

                description = "This is the Kawasaki Ninja H2R one of the fastest production motorcycles in the world!";
                picture_path = "";

                progress_text = "Creating the Kawasaki Ninja H2R, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Z800 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Kawasaki_Z800";
                condition = "";

                description = "This is the Kawasaki Z800";
                picture_path = "";

                progress_text = "Creating the Kawasaki Z800, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class ZX7RR {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Kawasaki_ZX7RR";
                condition = "";

                description = "This is the Kawasaki ZX7RR";
                picture_path = "";

                progress_text = "Creating the Kawasaki ZX7RR, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Plane {
                itemsRequired[] = {
                    {"engine",1},
                    {"frame",2},
					{"fueltank",2},
					{"toolkit",2},
					{"titanium",5},
					{"electronics",10},
					{"panels",4},
					{"oil_processed",8},
					{"tire",3}
                };
                moneyRequired = 25000;

                itemGive = "C_Plane_Civil_01_F";
                condition = "";

                description = "This is the Cessna Homekit Plane! Enjoy. You can find this in the Air Garage";
                picture_path = "";

                progress_text = "Creating the Cessna Homebuilt Plane, it will be in your Garage";
                timeToCraft = 20; // In seconds
            };
			class GSX {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Suzuki_GSX_R_1000";
                condition = "";

                description = "This is the Suzuki GSX R";
                picture_path = "";

                progress_text = "Crafting the Suzuki GSXR, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class V12_YFZ450_ROUGE {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",4}
                };
                moneyRequired = 0;

                itemGive = "V12_YFZ450_ROUGE";
                condition = "";

                description = "This is the Yamaha YFZ Rouge";
                picture_path = "";

                progress_text = "Crafting the Yamaha YFZ R, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Hayabusa {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "d3s_Suzuki_Hayabusa";
                condition = "";

                description = "This is the Suzuki Hayabusa";
                picture_path = "";

                progress_text = "Crafting the Suzuki Hayabusa, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Rouge {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"cycleframe",1},
					{"cycletank",1},
					{"cyclefork",1},
					{"toolkit",1},
					{"leather",5},
					{"panels",1},
					{"brakeparts",2},
					{"cyclewheel",2}
                };
                moneyRequired = 0;

                itemGive = "V12_S1000RR2018_Rouge";
                condition = "";

                description = "This is the 2018 S100 Rogue";
                picture_path = "";

                progress_text = "Crafting the 2018 S100 Rogue, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Kart1 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"kartframe",1},
					{"karttank",1},
					{"toolkit",1},
					{"kartseat",2},
					{"electronics",1},
					{"brakeparts",2},
					{"oil_processed",2},
					{"kartwheel",4}
                };
                moneyRequired = 0;

                itemGive = "C_Kart_01_F";
                condition = "";

                description = "This is a Go-Kart!";
                picture_path = "";

                progress_text = "Crafting the Go-Kart, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Kart2 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"kartframe",1},
					{"karttank",1},
					{"toolkit",1},
					{"kartseat",2},
					{"electronics",1},
					{"brakeparts",2},
					{"oil_processed",2},
					{"kartwheel",4}
                };
                moneyRequired = 0;

                itemGive = "C_Kart_01_Fuel_F";
                condition = "";

                description = "This is the Fuel Brand Go-Kart!";
                picture_path = "";

                progress_text = "Crafting the Fuel Go-Kart, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Kart3 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"kartframe",1},
					{"karttank",1},
					{"toolkit",1},
					{"kartseat",2},
					{"electronics",1},
					{"brakeparts",2},
					{"oil_processed",2},
					{"kartwheel",4}
                };
                moneyRequired = 0;

                itemGive = "C_Kart_01_Blu_F";
                condition = "";

                description = "This is the BlueKing Brand Go-Kart!";
                picture_path = "";

                progress_text = "Crafting the BlueKing Go-Kart, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
			class Kart4 {
                itemsRequired[] = {
                    {"cycleengine",1},
                    {"kartframe",1},
					{"karttank",1},
					{"toolkit",1},
					{"kartseat",2},
					{"electronics",1},
					{"brakeparts",2},
					{"oil_processed",2},
					{"kartwheel",4}
                };
                moneyRequired = 0;

                itemGive = "C_Kart_01_Red_F";
                condition = "";

                description = "This is the Redstone Brand Go-Kart!";
                picture_path = "";

                progress_text = "Crafting the Redstone Go-Kart, it will be in your Garage";
                timeToCraft = 10; // In seconds
            };
        };
    };
};