    class 3AS_ARC_170_Republic;
    class aux187_ARC_170 : 3AS_ARC_170_Republic
    {
        displayName = "ARC-170";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(arc170\data\187th_ARC170_Default_Frame_CO.paa),
            QPATHTOF(arc170\data\187th_ARC170_Default_Engines_CO.paa),
            QPATHTOF(arc170\data\187th_ARC170_Default_Guns_CO.paa)
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

        /*weapons[]=
        {
            "ParticleBeamCannon_F",
            "Aux187_LAAT_AGM_Missile",
            "Aux187_LAAT_AA_Missile",
            "CMFlareLauncher",
            "Laserdesignator_pilotCamera"
        };
        magazines[]=
        {
            "Laser_Battery",
            "Laser_Battery",
            "aux187_LAAT_6Rnd_AGM_Missile",
            "aux187_LAAT_4Rnd_AA_Missile",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "240Rnd_CMFlare_Chaff_Magazine",
            "Laserbatteries"
        };*/

        textureList[] = {"aux187_ARC170_Texture_Default", 1};

        class ACE_SelfActions : ACE_SelfActions
        {
            class aux187_ARC170_Skins
            {
                displayName = "Change Aircraft Skin";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_ARC170_Skin_Default
                {
                    displayName = "Default";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\aircraft\arc170\data\187th_ARC170_Default_Frame_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\aircraft\arc170\data\187th_ARC170_Default_Engines_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\aircraft\arc170\data\187th_ARC170_Default_Guns_CO.paa'];";
                };
            };
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
            class aux187_ARC170_Texture_Default
            {
                displayName = "Default";
                author = "187th Legion";
                textures[] = 
                {
                    QPATHTOF(arc170\data\187th_ARC170_Default_Frame_CO.paa),
                    QPATHTOF(arc170\data\187th_ARC170_Default_Engines_CO.paa),
                    QPATHTOF(arc170\data\187th_ARC170_Default_Guns_CO.paa)
                };
            };
        };
    };
