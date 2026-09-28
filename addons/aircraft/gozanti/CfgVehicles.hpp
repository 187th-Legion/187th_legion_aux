    class 3AS_Gozanti_Republic;
    class Turrets;
    class NewTurret;
    class aux187_Gozanti : 3AS_Gozanti_Republic
    {
        displayName = "Gozanti Light Cruiser";

        hiddenselectionstextures[] =
        { 
            QPATHTOF(gozanti\data\187th_Gozanti_Default_Camo_CO.paa),
            "3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
            QPATHTOF(gozanti\data\187th_Gozanti_Default_Camo2_CO.paa),
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
            "3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
        };

        scope = 2;
        side = 1;
        scopeCurator = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_Aircraft";
        crew="aux187_pilot";
        reportRemoteTargets = 1;
        TFAR_hasIntercom = 1;

        magazines[] = 
        {
            "300Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine",
            "300Rnd_CMFlare_Chaff_Magazine"

        };
        weapons[] = 
        {
            "CMFlareLauncher"
        };

        class Turrets : Turrets
        {
            class MainTurret : NewTurret
            {
                magazines[] = 
                {
                    "aux187_mag_30rnd_z35_cannon",
                    "aux187_mag_30rnd_z35_cannon",
                    "aux187_mag_30rnd_z35_cannon",
                    "SmokeLauncherMag"
                };
                weapons[] = 
                {
                    "aux187_gozanti_massDriver",
                    "SmokeLauncher"
                };
            };

            class MainTurretRear : MainTurret {};
            class MainTurretUnder : MainTurret {};
        };

        textureList[] = {"aux187_Gozanti_Texture_Default", 1};

        class ACE_SelfActions : ACE_SelfActions
        {
            class TFAR_IntercomChannel 
            {
                displayName = "Intercom Channel"; 
                condition = "true"; 
                statement = ""; 
                icon = ""; 

                class TFAR_IntercomChannel_disabled 
                {
                    displayName = "Disabled"; 
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != -1"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];"; 
                }; 
                class TFAR_IntercomChannel_1 
                {
                    displayName = "Cargo"; 
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 0"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];"; 
                }; 
                class TFAR_IntercomChannel_2 
                {
                    displayName = "Crew"; 
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 1"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];"; 
                };
                class TFAR_IntercomChannel_3 
                {
                    displayName = "Misc Channel 1"; 
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 2"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];"; 
                };
                class TFAR_IntercomChannel_4
                {
                    displayName = "Misc Channel 2";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_5
                {
                    displayName = "Misc Channel 3";
                    condition = "_vehicle = vehicle ACE_Player; _intercom = _vehicle getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = _vehicle getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 4";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            }; 
        };

        class TextureSources
        {
            class aux187_Gozanti_Texture_Default
            {
                displayName = "Default";
                author = "187th Legion";
                textures[] = 
                {
                    QPATHTOF(gozanti\data\187th_Gozanti_Default_Camo_CO.paa),
                    "3AS\3AS_Imperial_Air\Gozanti\data\Gozanti_Int_co.paa",
                    QPATHTOF(gozanti\data\187th_Gozanti_Default_Camo2_CO.paa),
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo3_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo4_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo5_co.paa",
                    "3AS\3AS_Imperial_Air\Gozanti\data\Camo6_co.paa"
                };
            };
        };
    };
