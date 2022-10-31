/*
    Author: Maxence Lyon
    Altis DEV: https://altisdev.com/user/maxence-lyon
    Teamspeak 3: ts.familledeschats.ovh (Une Vache Sur CS)
    Web site: http://62.210.144.223/ (http://familledeschats.ovh)
    Steam: « Une Vache Sur CS – Maxence », please leave a message on my profile who says the exact reason before adding me.

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

class Max_Settings_Phone {
    default_lang = "en"; // fr / en / de / es

    tonic_version = 5; //5 if you are on version 5.0 or 4 if you are on version 4.X
    textures_base_path = "The-Programmer\Phone\textures";

    price_buy_sim = 100;
    price_offer_1 = 500;
    price_offer_2 = 750;
    price_offer_3 = 900;

    calls_management_script_enable = false; // ONLY IF YOU HAVE INSTALLED OUR PRODUCT "DISPATCH SYSTEM"

    phone_number_first_connexion = false; // CREATE PHONE NUMBER ON FIRST CONNEXION

    messages_to_depanneurs = true; // AUTORISER L'ENVOIE DE MESSAGE AUX DEPANNEURS (true/false)
    calls_to_depanneurs = true; // AUTORISER L'APPEL VERS LES DEPANNEURS (true/false)
    licence_depanneurs = "license_civ_depanneur"; // LICENCE DES DEPANNEURS ("license_civ" + variable de la licence)

    start_with_0 = true; // LE TOUT PREMIER NUMERO DU TELEPHONE EST UN 0
    first_numbers = 6; // PREMIERS NUMERO(S) D'UN NUMERO DE TELEPHONE APRES LE 0 SI ACTIVE
    numbers_after_first_numbers = 8; // NOMBRE DE NUMERO GENERES APRES LES NUMERO DE LA LIGNE DU DESSUS

    allow_anonymous_messages = true;
    allow_anonymous_calls = true;
    anonymous_prefix = "#31#";

    allow_group_call = true;
    group_call_players_limit = 6; // -1 = unlimited

    num_cop = 911; // NUMERO POUR ENVOYER UN MESSAGE AUX GENDARMES
    num_med = 311; // NUMERO POUR ENVOYER UN MESSAGE AUX MEDECINS
    num_cop_med = 112; // NUMERO POUR ENVOYER UN MESSAGE AUX GENDARMES ET MEDECINS
    num_dep = 60; // NUMERO POUR ENVOYER UN MESSAGE AUX DEPANNEURS
    num_east = 80; // NUMERO POUR ENVOYER UN MESSAGE AUX ESAT (ADAC)

    time_before_delete_dep_marker = 300; // in seconds

    display_online_contacts = true; // DISPLAY (with color) IF YOUR CONTACT IS ONLINE

    class phone_contact_customization {
        police_contact = true;
        medic_contact = true;
        contact_cop_med = true;
        contact_dep = false;
        east_contact = false;

        customized_contact[] = {
            //{"DISPLAY NAME","NUMBER"}
        };
    };

    class special_numbers {
        class entreprise1 {
            number = 150;
            displayname = "entreprise";
            license = "license_civ_variable_licence_entreprise";
        };
    };
};
