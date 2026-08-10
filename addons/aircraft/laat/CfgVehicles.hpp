    class ACE_SelfActions;
    class ls_impulsor_base;

    class 3as_LAAT_Mk1;
    class 3as_LAAT_Mk1Lights;
    class 3as_LAAT_Mk2;
    class 3as_LAATC;

    class aux187_LAAT_Mk1 : 3as_LAAT_Mk1
    {
        #include "LAAT_Config.hpp"
        displayName = "LAAT/I (Mk1)";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(laat\data\187th_Default_Hull_co.paa),
            QPATHTOF(laat\data\187th_Default_Wings_co.paa),
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            QPATHTOF(laat\data\187th_Default_Interior_co.paa)
        };
    };

    class aux187_LAAT_Mk2 : 3as_LAAT_Mk2
    {
        #include "LAAT_Config.hpp"
        displayName = "LAAT/I (Mk2)";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(laat\data\187th_Default_Hull_co.paa),
            QPATHTOF(laat\data\187th_Default_Wings_co.paa),
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            QPATHTOF(laat\data\187th_Default_Interior_co.paa)
        };
    };

    class aux187_LAAT_Mk1_Lamps : 3as_LAAT_Mk1Lights
    {
        #include "LAAT_Config.hpp"
        displayName = "LAAT/I (Mk1/Lamps)";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(laat\data\187th_Default_Hull_co.paa),
            QPATHTOF(laat\data\187th_Default_Wings_co.paa),
            "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
            "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
            QPATHTOF(laat\data\187th_Default_Interior_co.paa)
        };
    };

    class aux187_LAAT_C : 3as_LAATC
    {
        #include "LAAT_C_Config.hpp"
        displayName = "LAAT/C";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(laat\data\187th_LAAT_C_Hull_co.paa),
            QPATHTOF(laat\data\187th_LAAT_C_Wings_co.paa),
            QPATHTOF(laat\data\187th_LAAT_C_Top_co.paa),
            "3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
        };
    };
