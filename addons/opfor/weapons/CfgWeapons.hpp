    class JLTS_E5;
    class aux187_opfor_e5 : JLTS_E5
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_e5";
        displayName = "[187th OPFOR] E-5 Blaster Carbine";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "E5";
        };

        canShootInWater = 1;
        drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
        recoil = "IDA_recoil_BlasterCarbine";
        recoilProne = "assaultRifleBase";
        reloadAction = "GestureReload_IDA_Reload_Blaster";
        reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

        magazines[] = 
        {
            "IDA_Blaster_Cell_Power3_40Rnd_Red"
        };
    };

    class IDA_SBB3;
    class aux187_opfor_sbb3 : IDA_SBB3
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_sbb3";
        displayName = "[187th OPFOR] SB-B3 Scatter Blaster";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "SBB3";
        };

        magazines[] = 
        {
            "IDA_Blaster_Cell_Scatter_6Rnd_Red"
        };
    };

    class JLTS_E5_shield;
    class aux187_opfor_e5_shield : JLTS_E5_shield
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_e5_shield";
        displayName = "[187th OPFOR] E-5 Blaster Carbine (Shield)";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "E5Shield";
        };

        canShootInWater = 1;
        drySound[] = {"\Indecisive_Armoury_Sounds\weapon_dry.ogg",5,1,10};
        recoil = "IDA_recoil_BlasterCarbine";
        recoilProne = "assaultRifleBase";
        reloadAction = "GestureReload_IDA_Reload_Blaster";
        reloadMagazineSound[] = {"\Indecisive_Armoury_Sounds\Blaster_reload_Vent.ogg",5,1,100};

        magazines[] = 
        {
            "IDA_Blaster_Cell_Power3_40Rnd_Red"
        };
    };

    class IDA_E5C;
    class aux187_opfor_e5c : IDA_E5C
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_e5c";
        displayName = "[187th OPFOR] E-5C Blaster Repeater";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "E5C";
        };
    };

    class IDA_E5S;
    class aux187_opfor_e5s : IDA_E5S
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_e5s";
        displayName = "[187th OPFOR] E-5S Targeting Blaster";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "E5S";
        };
    };

    class ls_weapon_wristblaster_droideka;
    class aux187_opfor_droidekaBlaster : ls_weapon_wristblaster_droideka
    {
        author = "Tim";
        scope = 1;
        scopeArsenal = 1;

        baseWeapon = "aux187_opfor_droidekaBlaster";
        displayName = "[187th OPFOR] Twin Blaster Cannons";

        magazines[] = { "aux187_opfor_droideka_magazine" };
    };

    class 3AS_J10_Turret_MG;
    class aux187_opfor_j10s_weapon : 3AS_J10_Turret_MG
    {
        author = "Tim";
        scope = 1;
        scopeArsenal = 1;

        baseWeapon = "aux187_opfor_j10s_weapon";
        displayName = "[187th OPFOR] Twin Blaster Turrets";

        magazines[] = { "aux187_opfor_mag_500Rnd_j10s" };
    };



// HUMAN DIVISION GUNS

    /*class IDA_E5C;
    class aux187_opfor_e5c : IDA_E5C
    {
        author = "Tim";
        scope = 2;
        scopeArsenal = 2;

        baseWeapon = "aux187_opfor_e5c";
        displayName = "[187th OPFOR] E-5C Blaster Repeater";

        
        class XtdGearInfo {
            model = "aux187_opfor_PrimaryWeapon_Model";
            weaponType = "E5C";
        };
    };*/
