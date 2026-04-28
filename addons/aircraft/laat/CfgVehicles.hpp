class 3as_LAAT_Mk1;
class 3as_LAATC;
class ACE_SelfActions;

class aux187_LAAT_Mk1 : 3as_LAAT_Mk1
{
    #include "LAAT_Config.hpp"
    displayName = "LAAT/I (Mk1)";

    hiddenSelectionsTextures[] = 
    { 
        QPATHTOF(laat\data\187th_Default_Hull_CO.paa),
        QPATHTOF(laat\data\187th_Default_Wings_CO.paa),
        "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
        "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
        QPATHTOF(laat\data\187th_Default_Interior_CO.paa)
    };
};

class aux187_LAAT_C : 3as_LAATC
{
    #include "LAAT_C_Config.hpp"
    displayName = "LAAT/C";

    hiddenSelectionsTextures[] = 
    { 
        QPATHTOF(laat\data\187th_LAAT_C_Hull_CO.paa),
        QPATHTOF(laat\data\187th_LAAT_C_Wings_CO.paa),
        QPATHTOF(laat\data\187th_LAAT_C_Top_CO.paa),
        "3AS\3AS_LAATC\data\Textures\LAAT_C_Detail_Front_co.paa"
    };
};
