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

class Max_Settings_Entreprise {
    default_lang = "en"; // fr / en / de / es

    textures_base_path = "The-Programmer\Entreprise\textures";

    allow_acces_to_create_company_forearch_player = true;
    allowed_licenses[] = { "license_civ_business" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION
    allowed_playerid[] = { "76561198105940600" }; //Only if allow_acces_to_create_company_forearch_player = false // OPTIONAL OPTION

    price_upgrade_100_storage = 500;
    price_upgrade_1000_storage = 1500;

    open_color = "ColorGreen"; // check : https://community.bistudio.com/wiki/CfgMarkerColors_Arma_3
    close_color = "ColorBlack";
    open_or_close_for_new_employes = false;

    blacklisted_virtual_items[] = {}; // Items that the company's CEO cannot buy from his employees (config class of the item)

    class positions_entreprises {
        class entreprise1 {
            markerVar = "entreprise_1";
            radius = 100;
            price = 250000;
        };
        class entreprise2 {
            markerVar = "entreprise_2";
            radius = 10;
            price = 35000;
        };
        class entreprise3 {
            markerVar = "entreprise_3";
            radius = 25;
            price = 58000;
        };
        class entreprise4 {
            markerVar = "entreprise_4";
            radius = 50;
            price = 142000;
        };
        class entreprise5 {
            markerVar = "entreprise_5";
            radius = 75;
            price = 210000;
        };
        class entreprise6 {
            markerVar = "entreprise_6";
            radius = 75;
            price = 210000;
        };
    };

    class types_entreprises {
        class autoentreprise {
            displayName = "General Business";
            max_stock_commum = 1500;
            max_stock_private = 500;
            max_players = 2;
            price = 50000;
        };
        class sarl {
            displayName = "LLC";
            max_stock_commum = 3000;
            max_stock_private = 2000;
            max_players = 5;
            price = 150000;
        };
        class sas {
            displayName = "Corporation";
            max_stock_commum = 5000;
            max_stock_private = 3500;
            max_players = 10;
            price = 1500000;
        };
        class sa {
            displayName = "Mega Corporation";
            max_stock_commum = 10000;
            max_stock_private = 7500;
            max_players = 20;
            price = 5000000;
        };
    };
};
