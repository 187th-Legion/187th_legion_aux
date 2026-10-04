    class OPTRE_AU_44_Mortar_Standalone;
    class aux187_au44 : OPTRE_AU_44_Mortar_Standalone
    {
        displayName = "AU-44 Mortar";
        forceInGarage=1;
        author = "Tim";

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_emplacements";
        crew="aux187_crewman";

        class ace_csw
        {
            enabled = 1;
            ammoLoadTime = 0.5;
            ammoUnloadTime = 1;
            desiredAmmo = 12;
            magazineLocation = "_target selectionPosition 'magazine'";
            /*proxyWeapon = "OPTRE_CSW_SGM122_Mortar_122mm";
            disassembleTurret = "OPTRE_CSW_Mortar_Baseplate";
            disassembleWeapon = "OPTRE_CSW_AU44_Mortar_Carry";*/

        };
        artilleryScanner = 1;

        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = { "aux187_backpack_mortar_base" };
            primary = 0;
        };

        class Turrets : Turrets
        {
            class MainTurret : MainTurret
            {
                weapons[] = { "aux187_weapon_au44" };

                magazines[] = 
                { 
                    "aux187_ammo_au44_he", // Slightly beefed up 122mm
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_he",
                    "aux187_ammo_au44_smoke",
                    "aux187_ammo_au44_smoke",
                    "aux187_ammo_au44_smoke",
                    "aux187_ammo_au44_smoke",
                    "aux187_ammo_au44_flare",
                    "aux187_ammo_au44_flare",
                    "aux187_ammo_au44_thermo", //High Area of Effect damage - low direct damage
                    "aux187_ammo_au44_thermo",
                    "aux187_ammo_au44_thermo",
                    "aux187_ammo_au44_thermo",
                    "aux187_ammo_au44_laser", //Mix between guided and regular HE
                    "aux187_ammo_au44_laser",
                    "aux187_ammo_au44_laser",
                    "aux187_ammo_au44_laser",
                    "aux187_ammo_au44_apfgds", //Guided Rod of Doom
                    "aux187_ammo_au44_apfgds",
                };
            };
        };
    };

    class aux187_au44_wood : aux187_au44
    {
        scope = 1;

        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = { "aux187_backpack_mortar_wood" };
            primary = 0;
        };
    };

    class aux187_au44_sand : aux187_au44
    {
        scope = 1;

        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = { "aux187_backpack_mortar_sand" };
            primary = 0;
        };
    };

    class aux187_au44_snow : aux187_au44
    {
        scope = 1;

        class assembleInfo
        {
            assembleTo = "";
            base = "";
            displayName = "";
            dissasembleTo[] = { "aux187_backpack_mortar_snow" };
            primary = 0;
        };
    };
