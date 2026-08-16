    
    class Turrets;
    class MainTurret;
    class DefaultEventHandlers;
    class AnimationSources;
    class LandVehicle;

    class Car : LandVehicle {};
    class Car_F : Car {};
    class wheeled_Apc_F : Car_F {};
    class APC_Wheeled_01_Base_F : wheeled_Apc_F {};

    class B_APC_Wheeled_01_cannon_F : APC_Wheeled_01_Base_F {};
    class TKE_APC_MD_BASE : APC_Wheeled_01_Base_F {};
    class TKE_Galea_Autocannon : TKE_APC_MD_BASE {};
    class TKE_Galea_Cannon : TKE_Galea_Autocannon {};
    class FCF_APC_MGS : TKE_Galea_Cannon {};
    
    class VehicleSystemsTemplateLeftCommander;
    class VehicleSystemsTemplateRightCommander;
    class HitPoints;
    class Components;
    
    class aux187_bantha_mk2 : B_APC_Wheeled_01_cannon_F
    {
        displayName = "Bantha (Mk2)";
        forceInGarage=1;
        author = "Tim";
        

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(bantha\data\Bantha_01_base_co.paa), 
			QPATHTOF(bantha\data\Bantha_01_adds_co.paa), 
			QPATHTOF(bantha\data\Bantha_01_tows_co.paa),
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
        };

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_vehicles";
        crew="aux187_crewman";
       
        TFAR_hasIntercom = 1;

        tas_canBlift=2;
		tas_liftVars="[[[[0,-2.5,-4]],[[-1.55,-2.5,-3.5],[1.55,-2.5,-3.5]]], [0.4,-0.06], [0,0.3]]";
        thrustDelay=0.2;
		fuelCapacity=50;
		clutchStrength=65;
		enginePower=2000;
		peakTorque=6000;
		idleRpm=600;
		redRpm=4000;
		armor=1200;
		armorStructural=6;
        armorLights=1;
		transportSoldier = 11;
		reportRemoteTargets = 1;
        ace_cargo_space=6;
		ace_cargo_hasCargo=1;
		LESH_canTow=1;
		LESH_AxisOffsetTower[]={0,-6,1};
		ace_repair_canRepair=1;

        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"aux187_bantha_cannon",
					"aux187_bantha_plx",
                    "aux187_bantha_z6"
				};
				magazines[]=
				{
					"aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
					"aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
					"aux187_Bantha_Missile",
					"aux187_Bantha_Missile",
					"aux187_Bantha_Missile"
				};

			};
		};
        class EventHandlers : DefaultEventHandlers
        {
            fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
            killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";

            init = "_vehicle = _this select 0; _vehicle setVariable ['aux187_BagsVisible', false, true]; _vehicle setVariable ['aux187_NetsVisible', false, true]; _vehicle setVariable ['aux187_SlatsVisible', false, true];";
        };
        class ACE_SelfActions : ACE_SelfActions
        {
            class aux187_Bantha_Skins
            {
                displayName = "Change Vehicle Skin";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_Bantha_Skin_Woodland
                {
                    displayName = "Woodland";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'a3\Armor_F\Data\cage_olive_CO.paa'];";
                };
                class aux187_Bantha_Skin_Sand
                {
                    displayName = "Desert";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'a3\Armor_F\Data\cage_sand_CO.paa'];";
                };
                class aux187_Bantha_Skin_Snow
                {
                    displayName = "Snow";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'z\aux187\addons\vehicles\bantha\data\camonet_snow_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'z\aux187\addons\vehicles\bantha\data\cage_snow_CO.paa'];";
                };
            };
            class aux187_Bantha_Attachments
            {
                displayName = "Change Vehicle Attachments";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_Bantha_Attachment_CamoNets
                {
                    displayName = "Camoflague Nets";
                    statement = "
                        switch (true) do
                        {
                            case ((vehicle player) getVariable ['aux187_NetsVisible', false]):
                            {
                                (vehicle player) animateSource ['showCamonetTurret', 0, true];
                                (vehicle player) animateSource ['showCamonetHull', 0, true];
                                (vehicle player) animateSource ['showCamonetCannon', 0, true];

                                (vehicle player) setVariable ['aux187_NetsVisible', true];
                            };

                            case !((vehicle player) getVariable ['aux187_NetsVisible', false]):
                            {
                                (vehicle player) animateSource ['showCamonetTurret', 1, true];
                                (vehicle player) animateSource ['showCamonetHull', 1, true];
                                (vehicle player) animateSource ['showCamonetCannon', 1, true];

                                (vehicle player) setVariable ['aux187_NetsVisible', false];
                            };
                        };
                    ";
                };

                class aux187_Bantha_Attachment_Bags
                {
                    displayName = "Bags";
                    statement = "
                        switch (true) do
                        {
                            case ((vehicle player) getVariable ['aux187_BagsVisible', false]):
                            {
                                (vehicle player) animateSource ['showBags', 0, true];

                                (vehicle player) setVariable ['aux187_BagsVisible', true];
                            };

                            case !((vehicle player) getVariable ['aux187_BagsVisible', false]):
                            {
                                (vehicle player) animateSource ['showBags', 1, true];

                                (vehicle player) setVariable ['aux187_BagsVisible', false];
                            };
                        };
                    ";
                };

                class aux187_Bantha_Attachment_Slats
                {
                    displayName = "Slats";
                    statement = "
                        switch (true) do
                        {
                            case ((vehicle player) getVariable ['aux187_SlatsVisible', false]):
                            {
                                (vehicle player) animateSource ['showSLATHull', 0, true];
                                (vehicle player) animateSource ['showSLATTurret', 0, true];

                                (vehicle player) setVariable ['aux187_SlatsVisible', true];
                            };

                            case !((vehicle player) getVariable ['aux187_SlatsVisible', false]):
                            {
                                (vehicle player) animateSource ['showSLATHull', 1, true];
                                (vehicle player) animateSource ['showSLATTurret', 1, true];

                                (vehicle player) setVariable ['aux187_SlatsVisible', false];
                            };
                        };
                    ";
                };
            };
            /*class TFAR_IntercomChannel 
            {
                displayName = "Intercom Channel"; 
                condition = "true"; 
                statement = ""; 
                icon = ""; 

                class TFAR_IntercomChannel_disabled 
                {
                    displayName = "Disabled"; 
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != -1"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],-1,true];"; 
                }; 
                class TFAR_IntercomChannel_1 
                {
                    displayName = "Cargo"; 
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 0"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],0,true];"; 
                }; 
                class TFAR_IntercomChannel_2 
                {
                    displayName = "Crew"; 
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2];if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]};_intercom != 1"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],1,true];"; 
                };
                class TFAR_IntercomChannel_3 
                {
                    displayName = "Misc Channel 1"; 
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 2"; 
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],2,true];"; 
                };
                class TFAR_IntercomChannel_4
                {
                    displayName = "Misc Channel 2";
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 3";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],3,true];";
                };
                class TFAR_IntercomChannel_5
                {
                    displayName = "Misc Channel 3";
                    condition = "(vehicle player) = vehicle ACE_Player; _intercom = (vehicle player) getVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)], -2]; if (_intercom == -2) then {_intercom = (vehicle player) getVariable ['TFAR_defaultIntercomSlot', TFAR_defaultIntercomSlot]}; _intercom != 4";
                    statement = "(vehicle ACE_Player) setVariable [format ['TFAR_IntercomSlot_%1',(netID ACE_Player)],4,true];";
                };
            };*/
        };

        textureList[] = {"aux187_Bantha_Texture_Woodland", 1};

        class TextureSources
        {
            class aux187_Bantha_Texture_Woodland 
			{
				author = "187th Legion";
				displayName = "Woodland";
				textures[]= 
				{
				QPATHTOF(bantha\data\Bantha_01_base_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_adds_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_tows_co.paa),
				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
				"a3\Armor_F\Data\cage_olive_CO.paa"
				};
			};
			class aux187_Bantha_Texture_Sand 
			{
				author = "187th Legion";
				displayName = "Desert";
				textures[]= 
				{
				QPATHTOF(bantha\data\Bantha_01_base_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_adds_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_tows_co.paa),
				"a3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
				"a3\Armor_F\Data\cage_sand_CO.paa"
				};
			};
            class aux187_Bantha_Texture_Snow 
			{
				author = "187th Legion";
				displayName = "Snow";
				textures[]= 
				{
				QPATHTOF(bantha\data\Bantha_01_base_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_adds_co.paa), 
				QPATHTOF(bantha\data\Bantha_01_tows_co.paa),
				QPATHTOF(bantha\data\camonet_snow_CO.paa),
				QPATHTOF(bantha\data\cage_snow_CO.paa)
				};
			};
        };
    };


    class aux187_bantha_mk2_unarmed : aux187_bantha_mk2
    {
        displayName = "Bantha (Mk2, Unarmed)";
        forceInGarage=1;
        author = "Tim";
        

        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(bantha\data\Bantha_01_base_co.paa), 
			QPATHTOF(bantha\data\Bantha_01_adds_co.paa), 
			QPATHTOF(bantha\data\Bantha_01_tows_co.paa),
			"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
			"a3\Armor_F\Data\cage_olive_CO.paa"
        };

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_vehicles";
        crew="aux187_crewman";

        class AnimationSources : AnimationSources
        {
            class HideTurret
            {
                animPeriod = 0.001;
                initPhase = 1;
                source = "user";
            };
        };

        class ACE_SelfActions : ACE_SelfActions
        {
            class aux187_Bantha_Skins
            {
                displayName = "Change Vehicle Skin";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_Bantha_Skin_Woodland
                {
                    displayName = "Woodland";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Green_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'a3\Armor_F\Data\cage_olive_CO.paa'];";
                };
                class aux187_Bantha_Skin_Sand
                {
                    displayName = "Desert";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'a3\Armor_F\Data\camonet_NATO_Desert_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'a3\Armor_F\Data\cage_sand_CO.paa'];";
                };
                class aux187_Bantha_Skin_Snow
                {
                    displayName = "Snow";
                    statement = "(vehicle player) setObjectTextureGlobal [0,'z\aux187\addons\vehicles\bantha\data\Bantha_01_base_co.paa']; (vehicle player) setObjectTextureGlobal[1,'z\aux187\addons\vehicles\bantha\data\Bantha_01_adds_co.paa']; (vehicle player) setObjectTextureGlobal[2,'z\aux187\addons\vehicles\bantha\data\Bantha_01_tows_co.paa']; (vehicle player) setObjectTextureGlobal [3,'z\aux187\addons\vehicles\bantha\data\camonet_snow_CO.paa']; (vehicle player) setObjectTextureGlobal[4,'z\aux187\addons\vehicles\bantha\data\cage_snow_CO.paa'];";
                };
            };
            class aux187_Bantha_Attachments
            {
                displayName = "Change Vehicle Attachments";
                exceptions[] = {"isNotInside","isNotSwimming","isNotSitting"};
                condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
                showDisabled = 0;
                priority = 2.5;
                icon = "";
                
                class aux187_Bantha_Attachment_CamoNets
                {
                    displayName = "Camoflague Nets";
                    statement = "
                        switch (true) do
                        {
                            case ((vehicle player) getVariable ['aux187_NetsVisible', false]):
                            {

                                (vehicle player) animateSource ['showCamonetHull', 0, true];

                                (vehicle player) setVariable ['aux187_NetsVisible', true];
                            };

                            case !((vehicle player) getVariable ['aux187_NetsVisible', false]):
                            {
                                (vehicle player) animateSource ['showCamonetHull', 1, true];

                                (vehicle player) setVariable ['aux187_NetsVisible', false];
                            };
                        };
                    ";
                };

                class aux187_Bantha_Attachment_Slats
                {
                    displayName = "Slats";
                    statement = "
                        switch (true) do
                        {
                            case ((vehicle player) getVariable ['aux187_SlatsVisible', false]):
                            {
                                (vehicle player) animateSource ['showSLATHull', 0, true];

                                (vehicle player) setVariable ['aux187_SlatsVisible', true];
                            };

                            case !((vehicle player) getVariable ['aux187_SlatsVisible', false]):
                            {
                                (vehicle player) animateSource ['showSLATHull', 1, true];

                                (vehicle player) setVariable ['aux187_SlatsVisible', false];
                            };
                        };
                    ";
                };
            };
        };

        class Turrets
		{
			class MainTurret
			{

			};
		};
    };

    class aux187_bantha_mk3_mgs : FCF_APC_MGS
    {
        displayName = "Bantha MGS (Mk3)";
        forceInGarage=1;
        author = "Tim";
        
        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa), 
			QPATHTOF(bantha\data\Bantha_MK3_Turret_CO.paa)
        };

        #include "mk3Config.hpp"

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_vehicles";
        crew="aux187_crewman";
        
        class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				weapons[]=
				{
					"aux187_bantha_massDriver",
                    "aux187_bantha_z6"
				};
				magazines[]=
				{
					"aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_30rnd_z35_cannon",
                    "aux187_mag_30rnd_z35_cannon",
                    "aux187_mag_15rnd_z35_cannon",
                    "aux187_mag_15rnd_z35_cannon",
                    "aux187_mag_5rnd_z35_cannon",
                    "aux187_mag_5rnd_z35_cannon",
                    "aux187_mag_5rnd_z35_cannon",
				};

                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsTemplateLeftCommander
                    {
                        class Components : Components
                        {
                            class SensorDisplay
                            {
                                componentType = "SensorsDisplayComponent";
                                range[] = {10,15};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsTemplateRightCommander
                    {
                        class Components : Components
                        {
                            class SensorDisplay
                            {
                                componentType = "SensorsDisplayComponent";
                                range[] = {10,15};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };

                maxHorizontalRotSpeed = 0.5;
                maxVerticalRotSpeed = 0.45;
			};
        };

        textureList[] = {"aux187_BanthaMk3_Texture_Default ", 1};

        class TextureSources
        {
            class aux187_BanthaMk3_Texture_Default 
			{
				author = "187th Legion";
				displayName = "Default";
				textures[]= 
				{
				    QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa),
			        QPATHTOF(bantha\data\Bantha_MK3_Turret_CO.paa)
				};
			};
        };
    };

    class FCF_APC_IFV;
    class aux187_bantha_mk3_ifv : FCF_APC_IFV
    {
        displayName = "Bantha IFV (Mk3)";
        forceInGarage=1;
        author = "Tim";
        
        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa), 
			QPATHTOF(bantha\data\Bantha_MK3_Turret_2_CO.paa)
        };

        #include "mk3Config.hpp"

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_vehicles";
        crew="aux187_crewman";

        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"aux187_bantha_cannon",
					"aux187_bantha_plx",
                    "aux187_bantha_z6"
				};
				magazines[]=
				{
					"aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
                    "aux187_mag_100rnd_z20_autocannon",
					"aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
                    "aux187_mag_300rnd_z6",
					"aux187_Bantha_Missile",
					"aux187_Bantha_Missile",
					"aux187_Bantha_Missile"
				};

                class Components
                {
                    class VehicleSystemsDisplayManagerComponentLeft : VehicleSystemsTemplateLeftCommander
                    {
                        class Components : Components
                        {
                            class SensorDisplay
                            {
                                componentType = "SensorsDisplayComponent";
                                range[] = {10,20};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                    class VehicleSystemsDisplayManagerComponentRight : VehicleSystemsTemplateRightCommander
                    {
                        class Components : Components
                        {
                            class SensorDisplay
                            {
                                componentType = "SensorsDisplayComponent";
                                range[] = {10,15};
                                resource = "RscCustomInfoSensors";
                            };
                        };
                    };
                };

			};
        };

        textureList[] = {"aux187_BanthaMk3_Texture_Default ", 1};

        class TextureSources
        {
            class aux187_BanthaMk3_Texture_Default 
			{
				author = "187th Legion";
				displayName = "Default";
				textures[]= 
				{
				    QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa),
			        QPATHTOF(bantha\data\Bantha_MK3_Turret_2_CO.paa)
				};
			};
        };
    };

    class FCF_APC_U;
    class aux187_bantha_mk3_cmd : FCF_APC_U
    {
        displayName = "Bantha CMD (Mk3)";
        forceInGarage=1;
        author = "Tim";
        
        hiddenSelectionsTextures[] = 
        { 
            QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa)
        };

        #include "mk3Config.hpp"

        scope = 2;
        side = 1;
        scopeCurator = 2;
        scopeArsenal = 2;
        faction = "aux187_Faction_187th";
        editorCategory = "aux187_edCat_187th";
        editorSubcategory = "aux187_edSubcat_vehicles";
        crew="aux187_crewman";

        textureList[] = {"aux187_BanthaMk3_Texture_Default ", 1};

        class TextureSources
        {
            class aux187_BanthaMk3_Texture_Default 
			{
				author = "187th Legion";
				displayName = "Default";
				textures[]= 
				{
				    QPATHTOF(bantha\data\Bantha_Mk3_Shell_CO.paa)
				};
			};
        };
    };
