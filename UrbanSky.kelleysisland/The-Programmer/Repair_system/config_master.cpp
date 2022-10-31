/*
    Author: Jean_Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Discord : https://discord.gg/DhFUFsq

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

    License number:
    Server's name:
    Owner's name:
*/
#define false 0
#define true 1

class The_Programmer_RepairSystem {
    /* General parameters */
	default_lang = "en"; // fr / en / de / es
    textures_base_path = "The-Programmer\Repair_System\textures";

    roadServiceSystem_script_enable = false; //Allows to link the service plug to the "Road Service System". The repairman will be able to repair items on the map and vehicles
    
    minimum_number_repairman = 2; //Minimum number of technicians to limit civilian vehicle repair 
    condition_tobeRepairman = "playerSide isEqualTo civilian"; //This is the condition to take up your service as a repairman, it can be a license (license_civ_XXX) or a side restriction (playerSide isEqualTo independent) 

    /* Parameter for the repairman' s */
    item_to_analyse = "toolkit"; //Object to analyse the state of the vehicle (must be an virtual object)
    time_to_analyze = 30; //Time to analyze the status of the vehicle in seconds
    remove_analyse_item = false; //If the object is deleted during the analyse process

    /* Parameter for civilians */
    item_to_repair = "toolkit";
    remove_repair_item = false;
    allow_full_repair = true; //Allows full repair of the vehicle if there is no repairman available 
    chance_of_success = 1; //Chance of being able to repair a part of a vehicle for a civilian (0.7 : 70% of success)

    class vehicle_part { //List of vehicle parts with their parameters
        class fuel {
            objet_required = "quicksteel"; //The object required to repair the part
            time_to_repair = 150;//Time to repair in seconds
            remove_item = true; //If the object is deleted during the repair process
            item_type = "virtual"; //virtual or physical
        };
        class hull {
            objet_required = "weldingsupplies"; 
            time_to_repair = 150;
            remove_item = true;
            item_type = "virtual";
        };
        class engine {
            objet_required = "enginepart";
            time_to_repair = 15;
            remove_item = true;
            item_type = "virtual";
        };
        class body {
            objet_required = "panels";
            time_to_repair = 80;
            remove_item = true;
            item_type = "virtual";
        };
        class wheel {
            objet_required = "tire";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class light {
            objet_required = "bulb";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class avionics {
            objet_required = "electronics";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class gear {
            objet_required = "gearpart";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class hydraulics {
            objet_required = "hydraulics";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class winch {
            objet_required = "winchpart";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class rotor {
            objet_required = "brakeparts";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class stabilizer {
            objet_required = "stabilizer";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class glass {
            objet_required = "glasspanel";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
       	class turret {
            objet_required = "turret";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class track {
            objet_required = "track";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class rudder {
            objet_required = "rudder";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class slat { //Shielding
            objet_required = "slat";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
        class era { //Shielding
            objet_required = "era";
            time_to_repair = 30;
            remove_item = true;
            item_type = "virtual";
        };
    }; 
};
