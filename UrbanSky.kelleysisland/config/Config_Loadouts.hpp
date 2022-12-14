/*
    class PLAYERSIDE { // PLAYERSIDE can be: WEST (for cops), CIV (for civ/reb), GUER (for medics), EAST (for opfor)
        // NOTES:
        //     empty array means that nothing will be add on players
        //     if you put more than a uniform on the CIV's class, they will be selected randonly,
        //         otherwise, for the other teams, player will get the uniform related to his level

        itemType[] = { // itemType can be: uniform, vest, backpack, weapon, items or linkedItems
            { "classname", "conditions" }
        };
    };
*/
class Loadouts {
    // COP
    class WEST {
        uniform[] = {
            {"SH_1", "call life_copLevel >= 0"}
        };
        vest[] = {
            {"", "call life_copLevel >= 0"}
        };
        backpack[] = {};
        weapon[] = {
            {"CSW_M26C", "call life_copLevel >= 0"}
        };
        mags[] = {
            {"CSW_Taser_Probe_Mag", 6, "call life_copLevel >= 0"}
        };
        items[] = {};
        linkedItems[] = {
            {"ItemMap", "call life_copLevel >= 0"},
            {"ItemCompass", "call life_copLevel >= 0"},
            {"ItemWatch", "call life_copLevel >= 0"},
			{"tf_anprc152_1", "call life_copLevel >= 0"}
        };
    };

    // CIV
    class CIV {
        uniform[] = {
            {"U_C_Poloshirt_stripped", ""},
        };
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {};
        linkedItems[] = {
            {"ItemMap", ""},
            {"ItemCompass", ""},
            {"ItemWatch", ""}
        };
    };

    // MED
    class GUER {
        uniform[] = {
            {"U_B_CombatUniform_mcam", "call life_medicLevel >= 1"}
        };
        vest[] = {};
        backpack[] = {};
        weapon[] = {};
        mags[] = {};
        items[] = {
            {"FirstAidKit", 2, "call life_medicLevel >= 1"}
        };
        linkedItems[] = {
            {"ItemMap", "call life_medicLevel >= 1"},
            {"ItemCompass", "call life_medicLevel >= 1"},
            {"ItemWatch", "call life_medicLevel >= 1"}
        };
    };
};
