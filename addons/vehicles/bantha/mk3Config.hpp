    class HitPoints : HitPoints
    {
        class HitBody
        {
            name = "karoserie";
            visual = "zbytek";

            armor = 0.85;
            explosionShielding = 1.2;
            passThrough = 1;

            material = -1;
        };

        class HitEngine
        {
            armorComponent = "hit_engine";
            name = "engine";

            armor = 0.45;
            explosionShielding = 0.4;
            minimalHit = 0.1;
            passThrough = 0.1;
            radius = 0.3;

            material = -1;

            class DestructionEffects
            {
                ammoExplosionEffect = "";
                class TKE_Engine_Smoke
                {
                    intensity = 0.8;
                    interval = 1;
                    lifeTime = 60;
                    position = "engine_fire";
                    simulation = "particles";
                    type = "SmallWreckSmoke";
                };
            };
        };

        class HitFuel
        {
            armorComponent = "hit_fuel";
            name = "palivo";

            armor = 0.55;
            explosionShielding = 0.5;
            minimalHit = 0.1;
            passThrough = 0.3;
            radius = 0.2;

            material = -1;
        };

        class HitHull
        {
            armorComponent = "hit_hull";
            name = "hull";
            visual = "hull";

            armor = 1.2;
            explosionShielding = 0.2;
            minimalHit = 0.1;
            passThrough = 1;
            radius = 0.2;

            material = -1;
        };

        class HitLBWheel
        {
            armorComponent = "wheel_1_4_hide";
            name = "wheel_1_4_steering";
            visual = "wheel_1_4_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1;
        };

        class HitLF2Wheel
        {
            armorComponent = "wheel_1_2_hide";
            name = "wheel_1_2";
            visual = "wheel_1_2_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1; 
        };

        class HitLFWheel
        {
            armorComponent = "wheel_1_1_hide";
            name = "wheel_1_1";
            visual = "wheel_1_1_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1; 
        };

        class HitLMWheel
        {
            armorComponent = "wheel_1_3_hide";
            name = "wheel_1_3";
            visual = "wheel_1_3_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1; 
        };

        class HitRBWheel
        {
            armorComponent = "wheel_2_4_hide";
            name = "wheel_2_4_steering";
            visual = "wheel_2_4_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1;
        };

        class HitRF2Wheel
        {
            armorComponent = "wheel_2_2_hide";
            name = "wheel_2_2";
            visual = "wheel_2_2_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33;

            material = -1;
        };

        class HitRFWheel
        {
            armorComponent = "wheel_2_1_hide";
            name = "wheel_2_1";
            visual = "wheel_2_1_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33; 

            material = -1;
        };

        class HitRMWheel
        {
            armorComponent = "wheel_2_3_hide";
            name = "wheel_2_3";
            visual = "wheel_2_3_hide";

            armor = -250;
            explosionShielding = 4;
            minimalHit = -0.016;
            passThrough = 0;
            radius = 0.33; 

            material = -1;
        };
    };

    class PlayerSteeringCoefficients
    {
        maxTurnHundred = 0.95;
        turnDecreaseConst = 5;
        turnDecreaseLinear = 0;
        turnDecreaseTime = 0;
        turnIncreaseConst = 0.5;
        turnIncreaseLinear = 1;
        turnIncreaseTime = 0;
    };

    TFAR_hasIntercom = 1;

    tas_canBlift=2;
    tas_liftVars="[[[[0,-3.5,-6]],[[-2,-3.5,-6],[2,-3.5,-6]]], [0.4,-0.06], [0,0.3]]";
    
    thrustDelay=0.5;
    fuelCapacity=50;
    clutchStrength=85;
	//enginePower=2000;
	peakTorque=6000;
	idleRpm=600;
	redRpm=3300;

    armor=1500;
    armorStructural=6;
    armorLights=1;
    transportSoldier = 11;
    reportRemoteTargets = 1;
    ace_cargo_space=6;
    ace_cargo_hasCargo=1;
    LESH_canTow=1;
    LESH_AxisOffsetTower[]={0,-6,1};
    ace_repair_canRepair=1;

    class PlateInfos
    {
        color[] = {0,0,0,1};
        name = "spz";
        plateFont = "RobotoCondensed";
        plateFormat = "LORD-SUCKZ-##";
        plateLetters = "0123456789";
    };

    /*class Sounds
    {
        soundSetsExt[] = {"TKE_APC_Engine_RPM0_EXT_SoundSet","TKE_APC_Engine_RPM1_EXT_SoundSet","TKE_APC_Engine_RPM2_EXT_SoundSet","TKE_APC_Engine_RPM3_EXT_SoundSet","TKE_APC_Engine_RPM4_EXT_SoundSet","TKE_APC_Engine_RPM5_EXT_SoundSet","APC_Wheeled_01_Rattling_EXT_SoundSet","APC_Wheeled_01_Stress_EXT_SoundSet","APC_Wheeled_01_Rain_EXT_SoundSet","APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet","APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet","APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet","APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet","APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet","APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"};
        soundSetsInt[] = {"TKE_APC_Engine_RPM0_INT_SoundSet","TKE_APC_Engine_RPM1_INT_SoundSet","TKE_APC_Engine_RPM2_INT_SoundSet","TKE_APC_Engine_RPM3_INT_SoundSet","TKE_APC_Engine_RPM4_INT_SoundSet","TKE_APC_Engine_RPM5_INT_SoundSet","APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet","APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet","APC_Wheeled_01_Rattling_INT_SoundSet","APC_Wheeled_01_Stress_INT_SoundSet","APC_Wheeled_01_Rain_INT_SoundSet","APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet","APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet","APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet","APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet","APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet","APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"};
    };*/

    class Wheels
    {
        class LF
        {
            dampingRate = 0.1;
            dampingRateDamaged = 1;
            dampingRateDestroyed = 1000;
            frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
            latStiffX = 25;
            latStiffY = 180;
            longitudinalStiffnessPerUnitGravity = 5000;
            mass = 150;
            maxBrakeTorque = 25000;
            maxCompression = 0.1125;
            maxDroop = 0.15;
            maxHandBrakeTorque = 0;
            MOI = 180;
            side = "left";
            springDamperRate = 20600.6;
            springStrength = 130000;
            sprungMass = 1334;
            steering = 1;
            suspTravelDirection[] = {-0.125,-1,0};
            width = 0.35;

            boneName = "wheel_1_1_damper";
            boundary = "wheel_1_1_bound";
            center = "wheel_1_1_axis";
            suspForceAppPointOffset = "wheel_1_1_axis";
            tireForceAppPointOffset = "wheel_1_1_axis";
        };

        class LR : LF
        {
            boneName = "wheel_1_2_damper";
            boundary = "wheel_1_2_bound";
            center = "wheel_1_2_axis";
            suspForceAppPointOffset = "wheel_1_2_axis";
            tireForceAppPointOffset = "wheel_1_2_axis";
        };

        class LR3 : LF
        {
            maxHandBrakeTorque = 300000;
            steering = 0;

            boneName = "wheel_1_3_damper";
            boundary = "wheel_1_3_bound";
            center = "wheel_1_3_axis";
            suspForceAppPointOffset = "wheel_1_3_axis";
            tireForceAppPointOffset = "wheel_1_3_axis";
        };

        class RF : LF
        {
            side = "right";
            
            boneName = "wheel_2_1_damper";
            boundary = "wheel_2_1_bound";
            center = "wheel_2_1_axis";
            suspForceAppPointOffset = "wheel_2_1_axis";
            tireForceAppPointOffset = "wheel_2_1_axis";
        };

        class RR : LF
        {
            side = "right";
            boneName = "wheel_2_2_damper";
            boundary = "wheel_2_2_bound";
            center = "wheel_2_2_axis";
            suspForceAppPointOffset = "wheel_2_2_axis";
            tireForceAppPointOffset = "wheel_2_2_axis";
        };

        class RR3 : LF
        {
            side = "right";
            maxHandBrakeTorque = 300000;
            steering = 0;

            boneName = "wheel_2_3_damper";
            boundary = "wheel_2_3_bound";
            center = "wheel_2_3_axis";
            suspForceAppPointOffset = "wheel_2_3_axis";
            tireForceAppPointOffset = "wheel_2_3_axis";
        };
    };
