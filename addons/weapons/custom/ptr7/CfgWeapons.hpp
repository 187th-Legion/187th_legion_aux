
    class Rifle_Long_Base_F;
    class ItemCore;
    class InventoryUnderItem_Base_F;
    class InventoryOpticsItem_Base_F;
    class InventoryMuzzleItem_Base_F;

    class BaseSoundModeType;
    class Mode_SemiAuto;

    class SlotInfo;

	class aux187_ptr7: Rifle_Long_Base_F
	{
		displayName = "[187th] PTR-7 Anti Material Rifle";
        author = "Tim";
        picture = "\Samples_f\Test_weapon_01\Data\UI\gear_test_weapon_01_X_CA.paa";
        descriptionShort = "Sniper Rifle<br />Caliber: 20mm";

        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        model = QPATHTOF(custom\ptr7\PTR7_Rifle.p3d);
        hiddenSelections[] = { "camo", "camo1" };
        hiddenSelectionsTextures[] = { QPATHTOF(custom\ptr7\data\Barrel_co.paa), QPATHTOF(custom\ptr7\data\Stock_co.paa) };
        hiddenSelectionsMaterials[] = { QPATHTOF(custom\ptr7\data\Barrel.rvmat), QPATHTOF(custom\ptr7\data\Stock.rvmat) };

        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\M320\data\Anim\m320.rtm"};

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		magazines[] = { "aux187_ptr7_AMHEI_magazine", "aux187_ptr7_SLAP_magazine", "aux187_ptr7_PTHP_magazine" };
		reloadAction = "GestureReloadLRR";
        recoilProne = "assaultRifleBase";
        recoil = "recoil_m320";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 0;

        selectionFireAnim = "zasleh";


		maxRecoilSway=0.0125;
        swayDecaySpeed=1.25;
		inertia = 0.5;
        simulation = "Weapon";

		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used

        ace_overheating_mrbs = 0;
        ace_overheating_slowdownFactor = 0;
        ace_overheating_jamChance = 0;
        ace_overheating_dispersion = 0;
        ace_overheating_allowSwapBarrel = 1;
        ace_cookoff_enable = 0;

        ACE_barrelLength = 1350.0;
        ACE_barrelTwist = 330.2;

        aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots

        mass = 20;

        class Single : Mode_SemiAuto
        {
            displayName = "Semi";

            dispersion = 0.00018;
            flash = "gunfire";
            flashSize = 0.1;

            ffCount = 1;
            ffFrequency = 11;
            ffMagnitude = 0.5;

            aiDispersionCoefX = 2.4;
            aiDispersionCoefY = 2.7;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 1500;
            artilleryCharge = 1;
            artilleryDispersion = 1;
            autoFire = 0;

            maxRange = 3350;
            maxRangeProbab = 0.05;
            midRange = 1250;
            midRangeProbab = 0.7;
            minRange = 2;
            minRangeProbab = 0.1;
            multiplier = 1;

            sound[] = {"",10,1};
            soundBegin[] = {"sound",1};
            soundBeginWater[] = {"sound",1};
            soundClosure[] = {"sound",1};

            class GunParticles
            {
                class FirstEffect
                {
                    directionName = "Konec hlavne";
                    effectName = "SniperCloud";
                    positionName = "Usti hlavne";
                };
            };
            
            burst = 1;

            recoil = "recoil_single_gm6";
            recoilProne = "recoil_single_prone_gm6";
            reloadTime = 1.2;

            sounds[] = {"StandardSound", "SilencedSound"};

            class StandardSound : BaseSoundModeType
            {
                soundsetshot[] = {"M320_Shot_SoundSet","M320_Tail_SoundSet","M320_InteriorTail_SoundSet"};
            };
            class SilencedSound : BaseSoundModeType
            {
                SoundSetShot[] = {"DMR06_silencerShot_SoundSet","DMR06_silencerTail_SoundSet","DMR06_silencerInteriorTail_SoundSet"};
            };
        };

        class far_optic1 : Single {};
        class far_optic2 : Single {};
        class medium_optic2 : Single {};

        class WeaponSlotsInfo
        {
            class UnderBarrelSlot : SlotInfo
            {
                linkProxy = "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
                compatibleItems[] = { "aux187_ptr7_bipod" };
            };
            
            class CowsSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                compatibleItems[] = { "aux187_ptr7_scope" };
            };

            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = { "aux187_ptr7_suppressor" };
            };
        };
	};
    
	class aux187_ptr7_bipod : ItemCore
	{
		displayName = "[187th] PTR-7 Bipod";
        author = "Tim";

        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        model = QPATHTOF(custom\ptr7\PTR7_Bipod.p3d);
        hiddenSelections[] = { "camo" };
        
        hiddenSelectionsTextures[] = { QPATHTOF(custom\ptr7\data\Bipod_co.paa) };
        hiddenSelectionsMaterials[] = { QPATHTOF(custom\ptr7\data\Bipod.rvmat) };
        

        inertia = 0.2;

        class ItemInfo : InventoryUnderItem_Base_F
        {
            deployedPivot		= "bipod";
			hasBipod			= 1;
			mass				= 10;
			//soundBipodDown[]	= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db-3, 1, 20 };
			//soundBipodUp[]		= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db-3, 1, 20 };
        };
	};

    class aux187_ptr7_scope : ItemCore
	{
		displayName = "[187th] PTR-7 Scope";
        author = "Tim";

        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        model = QPATHTOF(custom\ptr7\PTR7_scope.p3d);
        hiddenSelections[] = { "camo" };
        
        hiddenSelectionsTextures[] = { QPATHTOF(custom\ptr7\data\scope_co.paa) };
        hiddenSelectionsMaterials[] = { QPATHTOF(custom\ptr7\data\scope.rvmat) };
        
        inertia = 0.2;


        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 7;
            modelOptics = "\A3\Weapons_f\acc\reticle_MyOptics_F";
            class OpticsModes
			{
				class MyOptics
				{
					cameraDir = "";
                    discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000,2100,2200,2300,2400,2500,2600,2700,2800,2900,3000};
                    discreteDistanceInitIndex = 1;
                    discretefov[] = {0.25,0.0625,0.03125,0.0208333,0.01,0.005};
                    discreteInitIndex = 1;
                    distanceZoomMax = 3000;
                    distanceZoomMin = 300;
                    memoryPointCamera = "opticView";
                    modelOptics = "\3as\3AS_Weapons\Greenfor\data\sights\3AS_2D_Optic.p3d";
                    opticsDisablePeripherialVision = 1;
                    opticsDisplayName = "WFOV";
                    opticsFlare = 1;
                    opticsID = 1;
                    opticsPPEffects[] = {"OpticsCHAbera3"};
                    opticsZoomInit = 0.25;
                    opticsZoomMax = 0.25;
                    opticsZoomMin = 0.005;
                    thermalMode[] = {0,5};
                    useModelOptics = 1;
                    visionMode[] = {"Normal","NVG","TI"};
                    weaponInfoType = "RscWeaponRangeZeroingFOV";
				};
				class IronOnTopOfMyOptics : MyOptics
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.375;
					opticsZoomMax = 1.1;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					discretefov[] = {};
				};
            };
        };
	};

    class aux187_ptr7_suppressor : ItemCore
	{
		displayName = "[187th] PTR-7 Suppressor";
        author = "Tim";

        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        model = QPATHTOF(custom\ptr7\PTR7_suppressor.p3d);
        hiddenSelections[] = { "camo" };
        
        hiddenSelectionsTextures[] = { QPATHTOF(custom\ptr7\data\Suppressor_co.paa) };
        hiddenSelectionsMaterials[] = { QPATHTOF(custom\ptr7\data\Suppressor.rvmat) };
        

        class ItemInfo : InventoryMuzzleItem_Base_F
        {
            soundTypeIndex = 1;

            muzzleEnd = "zaslehPoint";
			alternativeFire = "Zasleh2";
        };
	};


    
