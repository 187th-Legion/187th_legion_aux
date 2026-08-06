	scope = 2;
    side = 1;
    scopeCurator = 2;
    faction = "aux187_Faction_187th";
    editorCategory = "aux187_edCat_187th";
    editorSubcategory = "aux187_edSubcat_Aircraft";
    crew="aux187_pilot";
    reportRemoteTargets = 1;
    TFAR_hasIntercom = 1;

    weapons[]=
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
    };
	
    /*
    tcw_emp_protection = 1;
	tcw_can_use_afterburner = 1;
	tcw_afterburner_max_boost_speed = 650;
	tcw_afterburner_min_boost_speed = 20;
	tcw_afterburner_min_brake_speed = 20;
	tcw_afterburner_increment = 10;
	tcw_afterburner_fuel_drag = 2000;
	tcw_afterburner_fuel_multi = 4;
	tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
    */

    textureList[] = {"aux187_LAAT_Skin_Default", 1};

    class EventHandlers
    {
        fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
        init = "(_this select 0) execVM 'z\aux187\addons\core\functions\loadSupply';";
    };

    class ACE_SelfActions : ACE_SelfActions
    {
        class aux187_LAAT_Skins
        {
            displayName = "Change LAAT Skin";
            exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
            condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
            showDisabled = 0;
            priority = 2.5;
            icon = "";
            
            class aux187_LAAT_Skin_Default
            {
                displayName = "Default";
                statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\aircraft\laat\data\187th_Default_Hull_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\aircraft\laat\data\187th_Default_Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_co.paa']; (vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_co.paa']; (vehicle player) setObjectTextureGlobal[4,'z\aux187\addons\aircraft\laat\data\187th_Default_Interior_CO.paa'];";
            };

            class aux187_LAAT_Skin_Tim
            {
                displayName = "Custom (Tim)";
                statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\aircraft\laat\data\customs\187th_Tim_Hull_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\aircraft\laat\data\customs\187th_Tim_Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_co.paa']; (vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_co.paa']; (vehicle player) setObjectTextureGlobal[4,'z\aux187\addons\aircraft\laat\data\customs\187th_Tim_Interior_CO.paa'];";
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
        class aux187_LAAT_Texture_Default
        {
            displayName = "Plain";
            author = "187th Legion";
            textures[] = 
            {
                QPATHTOF(laat\data\187th_Default_Hull_co.paa),
                QPATHTOF(laat\data\187th_Default_Wings_co.paa),
                "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                QPATHTOF(laat\data\187th_Default_Interior_co.paa)
            };
        };

        class aux187_LAAT_Texture_Tim
        {
            displayName = "Custom (Tim)";
            author = "187th Legion";
            textures[] = 
            {
                QPATHTOF(laat\data\customs\187th_Tim_Hull_co.paa),
                QPATHTOF(laat\data\customs\187th_Tim_Wings_co.paa),
                "3AS\3as_Laat\LAATI\data\Weapons_CO.paa",
                "3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa",
                QPATHTOF(laat\data\customs\187th_Tim_Interior_co.paa)
            };
        };
    };
    /*
    class UserActions
    {
        class afterburners_turn_on
        {
            showWindow = 0;
            hideOnUse = 0;
            priority = 9;
            role = 0;
            displayName = "Activate Impulse";
            position = "pilotview";
            radius = 6;
            shortcut = "User13";
            onlyforplayer = 0;
            condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
            statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
        };
        class afterburners_turn_off
        {
            showWindow = 0;
            hideOnUse = 0;
            priority = 9;
            role = 0;
            displayName = "Deactivate Impulse";
            position = "pilotview";
            radius = 6;
            shortcut = "User14";
            onlyforplayer = 0;
            condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
            statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
        };
    };
    */
