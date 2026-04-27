	scope = 2;
	side = 2;
	scopeCurator = 2;
	faction = "187th_Republic"; //187th_Republic, 187th_CIS
	editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
	editorSubcategory = "187th_Helicopter"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
	crew="187th_Pilot";
	reportRemoteTargets = 1;
	TFAR_hasIntercom = 1;
	weapons[]=
	{
		"ParticleBeamCannon_F",
		"aux187_LAAT_AGM_Missile",
		"aux187_LAAT_AA_Missile",
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
	tcw_emp_protection = 1;
	tcw_can_use_afterburner = 1;
	tcw_afterburner_max_boost_speed = 650;
	tcw_afterburner_min_boost_speed = 20;
	tcw_afterburner_min_brake_speed = 20;
	tcw_afterburner_increment = 10;
	tcw_afterburner_fuel_drag = 2000;
	tcw_afterburner_fuel_multi = 4;
	tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};

    class ACE_SelfActions : ACE_SelfActions
    {
        class aux187_LAAT_skins
        {
            displayName = "Change LAAT Skin";
            exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
            condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
            showDisabled = 0;
            priority = 2.5;
            icon = "";
            
            class Aux187_LAAT_Skin_Default
            {
                displayName = "Plain";
                statement = "(vehicle player) setObjectTextureGlobal [0,'3AS\3as_Laat\LAATI\data\Hull_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
            };
            class Aux187_LAAT_Skin_Gypsy
            {
                displayName = "Custom (Gypsy)";
                statement = "(vehicle player) setObjectTextureGlobal [0,'\187th-aux\Data\Vehicles\LAAT_Nose_Art\Hull_Gypsy_CO.paa']; (vehicle player) setObjectTextureGlobal[1,'3AS\3as_Laat\LAATI\data\Wings_CO.paa']; (vehicle player) setObjectTextureGlobal[2,'3AS\3as_Laat\LAATI\data\Weapons_CO.paa'];(vehicle player) setObjectTextureGlobal[3,'3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa'];(vehicle player) setObjectTextureGlobal[4,'3AS\3as_Laat\LAATI\data\Interior_CO.paa'];";
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
