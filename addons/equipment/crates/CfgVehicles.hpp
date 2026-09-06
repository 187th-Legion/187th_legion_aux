
	class JLTS_Ammobox_launchers_GAR;
	class JLTS_Ammobox_explosives_GAR;
	class JLTS_Ammobox_ammo_GAR;
	class 3as_GNK;
	class Box_NATO_Ammo_F;
	class DefaultEventhandlers;
	class aux187_Crate_Base: Box_NATO_Ammo_F
	{
		//class UserActions;
		scope = 1;
		scopecurator = 1;
		author = "Panda";
		displayname = "[187th] Resupply Box (Base)";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa","\MRC\JLTS\weapons\Crates\data\screen_1_GAR_weapons1_co.paa"};
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_weapons_GAR.jpg";
		icon = "iconCrateWpns";
		ace_dragging_canDrag = 1;
		ace_dragging_canCarry = 1;
		ace_dragging_dragPosition[] = {0,1.2,0};
		ace_dragging_dragDirection = 0;
		ace_dragging_carryDirection = 0;
		maximumLoad = 2000;
		explosionEffect = "BasicAmmoExplosion";
		editorCategory = "aux187_edCat_Props";
		editorSubcategory = "aux187_edSubcat_crates";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"ammo_hide",1},{"ammoord_hide",0},{"grenades_hide",1},{"support_hide",1}};
			hide[] = {};
			verticalOffset = 0.284;
			verticalOffsetWorld = 0;
			init = "''";
		};
		class DestructionEffects
		{
			class Smoke2
			{
				simulation = "particles";
				type = "AmmoSmokeParticles2";
				position = "";
				intensity = 0.25;
				interval = 5;
				lifeTime = 2;
			};
			class Bullets
			{
				simulation = "particles";
				type = "AmmoBulletCore";
				position = "";
				intensity = 3;
				interval = 3;
				lifeTime = 1.2;
			};
		};
	};


// Ammo Boxes //

	class aux187_crate_Grenades: JLTS_Ammobox_ammo_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props";
		editorSubcategory = "aux187_edSubcat_crates";
		displayName = "[187th] Grenades";
		maximumLoad = 2000;
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_grenades_GAR.jpg";
		hiddenSelectionsTextures[]={"\mrc\jlts\weapons\crates\data\crate_3_gar_co.paa",QPATHTOF(crates\data\screen_grenade.paa)};
		icon = "iconCrateGrenades";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportItems
		{
			class xx_JMSLLTE_thermalimploder_HandGrenade
			{
				name = "JMSLLTE_thermalimploder_HandGrenade";
				count = 25;
			};
			class xx_3AS_SonicDet
			{
				name = "3AS_SonicDet";
				count = 10;
			};
			class xx_3AS_SmokeWhite
			{
				name = "3AS_SmokeWhite";
				count = 25;
			};
			class xx_aux187_SignalFlare_Blue
			{
				name = "aux187_SignalFlare_Blue";
				count = 5;
			};
			class xx_aux187_SignalFlare_Green
			{
				name = "aux187_SignalFlare_Green";
				count = 5;
			};
			class xx_aux187_SignalFlare_Red
			{
				name = "aux187_SignalFlare_Red";
				count = 5;
			};
			class xx_aux187_SignalFlare_Yellow
			{
				name = "aux187_SignalFlare_Yellow";
				count = 5;
			};
		};
		class TransportMagazines
		{
			class xx_aux187_Mag_1Rnd_AP_Grenade
			{
				magazine = "aux187_Mag_1Rnd_AP_Grenade";
				count = 15;
			};
            class xx_aux187_Mag_1Rnd_HE_Grenade
			{
				magazine = "aux187_Mag_1Rnd_HE_Grenade";
				count = 15;
			};
            class xx_aux187_Mag_3Rnd_AP_Grenade
			{
				magazine = "aux187_Mag_1Rnd_AP_Grenade";
				count = 15;
			};
            class xx_aux187_Mag_3Rnd_HE_Grenade
			{
				magazine = "aux187_Mag_1Rnd_HE_Grenade";
				count = 15;
			};
			class xx_UGL_FlareRed_F
			{
				magazine = "UGL_FlareRed_F";
				count = 5;
			};
			class xx_UGL_FlareGreen_F
			{
				magazine = "UGL_FlareGreen_F";
				count = 5;
			};
			class xx_ACE_40mm_Flare_white
			{
				magazine = "ACE_40mm_Flare_white";
				count = 10;
			};
			class xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 10;
			};
		};
		class TransportWeapons{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class grenades_source: ammo_source
			{
				initPhase = 0;
			};
		};
	};

	class aux187_crate_Rockets: JLTS_Ammobox_launchers_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Rockets";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_launchers_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa",QPATHTOF(crates\data\screen_at.paa)};
		icon = "iconCrateLong";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportWeapons
        {
            class xx_aux187_RPS6_Disposable
			{
				magazine = "aux187_RPS6_Disposable";
				count = 2;
			};
        };
		class TransportMagazines
		{
			class xx_JLTS_RPS6_HE_mag
			{
				magazine = "JLTS_RPS6_HE_mag";
				count = 2;
			};
			class xx_JLTS_RPS6_mag
			{
				magazine = "JLTS_RPS6_mag";
				count = 6;
			};
			class xx_JLTS_PLX1_AT_mag
			{
				magazine = "JLTS_PLX1_AT_mag";
				count = 2;
			};
			class xx_JLTS_PLX1_AP_mag
			{
				magazine = "JLTS_PLX1_AP_mag";
				count = 2;
			};
		};
		class TransportItems{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 0;
			};
			class explosives_source: weapons_source
			{
				initPhase = 1;
			};
		};
	};

	class aux187_crate_Medical: JLTS_Ammobox_ammo_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Medical";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_support_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_3_GAR_co.paa",QPATHTOF(crates\data\screen_medical.paa)};
		icon = "iconCrateSupp";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportItems
		{
			class xx_aux187_SignalFlare_Purple
			{
				name = "aux187_SignalFlare_Purple";
				count = 10;
			};
			class xx_kat_IV_16
			{
				name = "kat_IV_16";
				count = 20;
			};
			class xx_aux187_item_BactaBandage
			{
				name = "aux187_item_BactaBandage";
				count = 20;
			};
			class xx_aux187_item_normalBandage
			{
				name = "aux187_item_normalBandage";
				count = 100;
			};
            class xx_aux187_item_BactaSpray
			{
				name = "aux187_item_normalBandage";
				count = 2;
			};
			class xx_ACE_morphine
			{
				name = "ACE_morphine";
				count = 20;
			};
			class xx_ACE_epinephrine
			{
				name = "ACE_epinephrine";
				count = 20;
			};
			class xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 10;
			};
			class xx_ACE_splint
			{
				name = "ACE_splint";
				count = 10;
			};
			class xx_ACE_plasmaIV
			{
				name = "ACE_plasmaIV";
				count = 10;
			};
			class xx_ACE_plasmaIV_500
			{
				name = "ACE_plasmaIV_500";
				count = 15;
			};
			class xx_ACE_plasmaIV_250
			{
				name = "ACE_plasmaIV_250";
				count = 15;
			};
			class xx_ACE_bodyBag
			{
				name = "ACE_bodyBag";
				count = 30;
			};
			class xx_kat_IO_FAST
			{
				name = "kat_IO_FAST";
				count = 10;
			};
			class xx_kat_chestSeal
			{
				name = "kat_chestSeal";
				count = 20;
			};

		};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources{};
		class TransportBackpacks{};
	};
	
	class aux187_crate_Basic_Ammo: JLTS_Ammobox_ammo_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		maximumLoad = 4000;
		scopecurator = 2;
		mass = 10;
		displayName="[187th] Basic Ammo";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_ammo_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_3_GAR_co.paa",QPATHTOF(crates\data\screen_ammo)};
		icon = "iconCrateAmmo";
		model = "\MRC\JLTS\weapons\Crates\crate_3.p3d";
		class TransportWeapons {};
 
		class TransportMagazines { 
					
					class xx_aux187_mag_45Rnd_DC15C
					{ 
							magazine = "aux187_mag_45Rnd_DC15C";
							count = 20; 
					};  
					class xx_aux187_mag_40Rnd_DC15S 
					{ 
							magazine = "aux187_mag_40Rnd_DC15S";
							count = 20; 
					};
                    class xx_aux187_mag_80Rnd_DC15S 
					{ 
							magazine = "aux187_mag_80Rnd_DC15S";
							count = 30; 
					}; 
					class xx_aux187_mag_45Rnd_DC15A 
					{ 
							magazine = "aux187_mag_45Rnd_DC15A"; 
							count = 30; 
					}; 
					class xx_aux187_mag_1Rnd_CMag 
					{ 
							magazine = "aux187_mag_1Rnd_CMag"; 
							count = 15; 
					};  
					class xx_aux187_mag_300Rnd_Z6 
					{ 
							magazine = "aux187_mag_300Rnd_Z6"; 
							count = 6; 
					}; 
					class xx_3AS_10Rnd_EC30_Pellets 
					{ 
							magazine = "3AS_10Rnd_EC30_Pellets"; 
							count = 12; 
					}; 
					class xx_3AS_1Rnd_EC80_Flechette 
					{ 
							magazine = "3AS_1Rnd_EC80_Flechette"; 
							count = 8; 
					}; 
					class xx_aux187_mag_75Rnd_DC15L
					{
							magazine = "aux187_mag_75Rnd_DC15L";
							count = 12;
					};
					class xx_aux187_mag_5Rnd_DC15X
					{
							magazine = "aux187_mag_5Rnd_DC15X";
							count = 20;
					};
					class xx_aux187_mag_20Rnd_Valken38X
					{
							magazine = "aux187_mag_20Rnd_Valken38X";
							count = 30;
					};
					class xx_aux187_Mag_40Rnd_XLE7
					{
							magazine = "aux187_Mag_40Rnd_XLE7";
							count = 30;
					};
                    class xx_aux187_Mag_250Rnd_DLT16
					{
							magazine = "aux187_Mag_250Rnd_DLT16";
							count = 15;
					};

                    class xx_aux187_Mag_100Rnd_DC17M
					{
							magazine = "aux187_Mag_100Rnd_DC17M";
							count = 30;
					};

                    class xx_aux187_Mag_10Rnd_DC17M
					{
							magazine = "aux187_Mag_10Rnd_DC17M";
							count = 15;
					};
		}; 
		
		class TransportItems { 
		}; 
		
		class TransportBackpacks { 
		}; 
		class AnimationSources
		{
			class ammo_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class grenades_source: ammo_source
			{
				initPhase = 1;
			};
		};
	};
			
	class aux187_crate_Explosives: JLTS_Ammobox_launchers_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Explosives";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa",QPATHTOF(crates\data\screen_eod.paa)};
		icon = "iconCrateAmmo";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		class TransportWeapons{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportMagazines
		{
			class xx_APERSMineDispenser_Mag
			{
				magazine = "APERSMineDispenser_Mag";
				count = 4;
			};
			class xx_IDA_explosive_Detpack2_mag
			{
				magazine = "IDA_explosive_Detpack2_mag";
				count = 10;
			};
			class xx_3AS_ThrowableCharge
			{
				magazine = "3AS_ThrowableCharge";
				count = 3;
			};
			class xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 2;
			};
			class xx_HX_AT_Mine_Mag
			{
				magazine = "HX_AT_Mine_Mag";
				count = 2;
			};
		};
	};
	
	class aux187_crate_Repair_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Repair";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa",QPATHTOF(crates\data\screen_repair.paa)};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_repair_canRepair = 1;
		class TransportItems
		{
			class xx_JLTS_repairkit_weapon_mini
			{
				name = "JLTS_repairkit_weapon_mini";
				count = 5;
			};
		};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class aux187_crate_Rearm_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Rearm";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa",QPATHTOF(crates\data\screen_rearm.paa)};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_rearm_defaultSupply = 1000;
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class aux187_crate_Refuel_Box: JLTS_Ammobox_explosives_GAR
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Vehicle Refuel";
		editorPreview = "\MRC\JLTS\weapons\Crates\data\ui\editorPreviews\JLTS_Ammobox_explosives_GAR.jpg";
		hiddenSelectionsTextures[] = {"\MRC\JLTS\weapons\Crates\data\crate_1_GAR_co.paa",QPATHTOF(crates\data\screen_refuel.paa)};
		icon = "iconCrateOrd";
		model = "\MRC\JLTS\weapons\Crates\crate_1.p3d";
		ace_refuel_fuelCargo = 5000;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		class TransportItems{};
		class TransportWeapons{};
		class TransportMagazines{};
		class TransportBackpacks{};
		class AnimationSources
		{
			class weapons_source
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class launchers_source: weapons_source
			{
				initPhase = 1;
			};
			class explosives_source: weapons_source
			{
				initPhase = 0;
			};
		};
	};
	
	class Medical_aux187_Gonk: 3as_GNK
	{
		faction = "aux187_Faction_187th";
		editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
		editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
		scope = 2;
		scopecurator = 2;
		displayName="[187th] Medical Gonk";
		class EventHandlers: DefaultEventhandlers
		{
			init="[_this select 0] execVM '\z\aux187\addons\core\functions\medical\medical.sqf';";
		};
	};
			
			/*class Auxaux187_Gonk_Arsenal: 3as_GNK
			{
				faction = "aux187_Faction_187th";
				editorCategory = "aux187_edCat_Props"; //aux187_edCat_Props, aux187_CIS_Assets, aux187_Test_Assets
				editorSubcategory = "aux187_edSubcat_crates"; //aux187_Infantry, aux187_Armor, aux187_Boat, aux187_Helicopter, aux187_Special, aux187_Plane, aux187_Turret, aux187_Transport, aux187_Sith, aux187_Car, aux187_Artillery, aux187_AntiAir, aux187_edSubcat_crates
				scope = 2;
				scopecurator = 2;
				displayName="[187th] Arsenal Gonk";
				class EventHandlers: DefaultEventhandlers
				{
					init = "[this, true] call ace_arsenal_fnc_initBox;";
				};
			};*/
			
		//Large Crates//
