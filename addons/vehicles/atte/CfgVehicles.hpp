    class 3AS_ATTE_Base;
    class ACE_SelfActions;
    class aux187_ATTE : 3AS_ATTE_Base
    {
        displayName = "AT-TE";

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(atte\data\187th_Default_ATTE_Shell_CO.paa),
            "3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
            "3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
            QPATHTOF(atte\data\187th_Default_ATTE_Legs_CO.paa),
            "3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
            "3as\3as_atte\data\textures\3as_atte_armor_co.paa"
        };

        scope = 2;
        side = 1;
        scopeCurator = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_Vehicles";
        crew="aux187_crewman";
        reportRemoteTargets = 1;
        TFAR_hasIntercom = 1;

        textureList[] = {"aux187_ATTE_Texture_Default", 1};

        class ACE_SelfActions : ACE_SelfActions
        {
            class aux187_ATTE_Skins
            {
                displayName = "Change Vehicle Skin";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_Z95_Skin_Default
                {
                    displayName = "Default";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\atte\data\187th_Default_ATTE_Shell_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa']; (vehicle player) setObjectTextureGlobal[2,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa']; (vehicle player) setObjectTextureGlobal [3,'z\aux187\addons\vehicles\atte\data\187th_Default_ATTE_Legs_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa']; (vehicle player) setObjectTextureGlobal[5,'3as\3as_atte\data\textures\3as_atte_armor_co.paa'];";
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
            class aux187_ATTE_Texture_Default
            {
                displayName = "Default";
                author = "187th Legion";
                textures[] = 
                {
                    QPATHTOF(atte\data\187th_Default_ATTE_Shell_CO.paa),
                    "3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
                    "3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
                    QPATHTOF(atte\data\187th_Default_ATTE_Legs_CO.paa),
                    "3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
                    "3as\3as_atte\data\textures\3as_atte_armor_co.paa"
                };
            };
        };
    };
