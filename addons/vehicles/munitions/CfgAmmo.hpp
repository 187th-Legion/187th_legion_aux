//TANK/APC AMMO
    class 3AS_ATTE_30mm_MP;
    class Aux187_ATTE_30mm_MP : 3AS_ATTE_30mm_MP
    {
        bulletFly[] = {"bulletFly1",0.2,"bulletFly2",0.2,"bulletFly3",0.2,"bulletFly4",0.2,"bulletFly5",0.2};
        bulletFly1[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_1.wss",2.23872,1,100};
        bulletFly10[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby10",2.23872,1,75};
        bulletFly11[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby11",2.23872,1,75};
        bulletFly12[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby12",2.23872,1,75};
        bulletFly2[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_2.wss",2.23872,1,100};
        bulletFly3[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_3.wss",2.23872,1,100};
        bulletFly4[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_4.wss",2.23872,1,100};
        bulletFly5[] = {"\Indecisive_Armoury_Sounds\plasma_flyby_5.wss",2.23872,1,100};
        bulletFly6[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby06",2.23872,1,75};
        bulletFly7[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby07",2.23872,1,75};
        bulletFly8[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby08",2.23872,1,75};
        bulletFly9[] = {"A3\sounds_f\arsenal\sfx\bullet_flyby\bullet_flyby09",2.23872,1,75};

        brightness = 1000;
        coefGravity = 0.02;
        cmImmunity = 1;

        model = "\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Blue.p3d";
        effectfly = "IDA_BlasterBoltGlow_Blue_Fly";

    };

    class aux187_ammo_bantha_z20_green : 3AS_ATTE_30mm_MP
	{
		author = "187th Legion";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly = "IDA_BlasterBoltGlow_Green_Fly";
		tracerScale=2;
        brightness = 1000;
	};

    class B_35mm_AA_Tracer_Red;
    class aux187_ammo_bantha_z20_aa_green : B_35mm_AA_Tracer_Red
	{
		author = "187th Legion";
		model="\Indecisive_Armoury_Ammos\Data\Tracers\IDA_Blasterbolt_Green.p3d";
		effectfly = "IDA_BlasterBoltGlow_Green_Fly";
		tracerScale=2;
        brightness = 1000;

        caliber = 2.8;
        hit = 60;
	};

    class ace_missile_manpad_stinger;
    class aux187_ammo_bantha_aa : ace_missile_manpad_stinger
	{
		author = "187th Legion";

        effectsMissile = "IDA_MissileGlow_Blue_fly";
        indirectHit = 100;
        indirectHitRange = 4;
	};

    class 3AS_Mass_Driver_Shell;
    class aux187_ammo_bantha_z35_blue : 3AS_Mass_Driver_Shell
	{
		author = "187th Legion";
		
        hit = 400;
        caliber = 40;

		indirectHit = 15;
        indirectHitRange = 5;
        penetrationDirDistribution = 0.2;

        class CamShakeHit
        {
            distance = 5;
            duration = 1.0;
            frequency = 20;
            power = 180;
        };
	};

    class aux187_ammo_bantha_z35_emp : aux187_ammo_bantha_z35_blue
	{
		author = "187th Legion";

        hit = 150;
        caliber = 15;
		
		indirectHit = 55;
        indirectHitRange = 5;
        penetrationDirDistribution = 0.2;

        ExplosionEffects = "JLTS_fx_exp_EMP";
        ace_explosives_Explosive = "JLTS_explosive_emp_100_ammo";
        ace_explosives_magazine = "JLTS_explosive_emp_100_mag";
	};

    class aux187_ammo_bantha_z35_heat : aux187_ammo_bantha_z35_blue
	{
		author = "187th Legion";

        hit = 350;
        caliber = 20;
        explosive = 1;
		
		indirectHit = 85;
        indirectHitRange = 6;
        penetrationDirDistribution = 0.2;

        class CamShakeExplode
        {
            distance = 150;
            duration = 2.0;
            frequency = 20;
            power = 25;
        };

        class CamShakeFire
        {
            distance = 100;
            duration = 2.5;
            frequency = 20;
            power = 25;
        };
	};

//AU44 MORTAR AMMO

    class Sh_155mm_AMOS;
    class aux187_ammo_au44_base : Sh_155mm_AMOS
	{
		author = "Tim";

        CraterEffects = "ArtyShellCrater";
        CraterWaterEffects = "ImpactEffectsWaterHE";
        effectFlare = "FlareShell";
        effectsFire = "CannonFire";
        effectsMissile = "ExplosionEffects";
        effectsSmoke = "SmokeShellWhite";
        ExplosionEffects = "MortarExplosion";

        simulation = "shotShell";
        submunitionAmmo = "";

        model = "\A3\Weapons_F\Ammo\shell.p3d";
        SoundSetExplosion[] = {"Shell155mm_Exp_SoundSet","Shell155mm_Tail_SoundSet","Explosion_Debris_SoundSet"};
        soundSetSonicCrack[] = {"bulletSonicCrack_SoundSet","bulletSonicCrackTail_SoundSet"};

        warheadName = "HE";
        whistleDist = 80;

        ace_rearm_caliber = 122;

        class CamShakeExplode
        {
            distance = 450;
            duration = 3.5;
            frequency = 25;
            power = 40;
        };
	};

    class aux187_ammo_au44_he : aux187_ammo_au44_base
	{
		hit = 275;
        indirectHit = 125;
        indirectHitRange = 18;

        caliber = 10;
        cost = 300;
	};

    class aux187_ammo_au44_smoke : aux187_ammo_au44_base
	{
		hit = 1;
        indirectHit = 0.25;
        indirectHitRange = 5;

        caliber = 1;
        cost = 1000;

        simulation = "shotDeploy";
        submunitionAmmo = "aux187_ammo_smoke_shell_arty";
	};

    class aux187_ammo_au44_flare : aux187_ammo_au44_base
	{
		hit = 1;
        indirectHit = 0.25;
        indirectHitRange = 5;

        caliber = 1;
        cost = 1000;

        aimAboveDefault = 4;
        aimAboveTarget[] = {30,60,120,180,240,300,360};

        brightness = 75000;

        simulation = "shotIlluminating";
        timeToLive = 300;
	};

    class aux187_ammo_au44_thermo : aux187_ammo_au44_base
	{
		hit = 185;
        indirectHit = 500;
        indirectHitRange = 25;

        caliber = 15;
        cost = 300;
	};

    class aux187_ammo_au44_laser : aux187_ammo_au44_base
	{
		hit = 450;
        indirectHit = 5;
        indirectHitRange = 8;

        caliber = 15;
        cost = 500;

        explosionAngle = 60;
        explosionForceCoef = 1;

        irLock = 0;
        laserLock = 1;
        lockSeekRadius = 125;
        lockType = 0;
        maneuvrability = 1;
        
        simulation = "shotSubmunitions";
        submunitionAmmo = "OPTRE_M_Mo_122mm_SABOT_LG";
	};

    class aux187_ammo_au44_apfgds : aux187_ammo_au44_base
	{
		hit = 560;
        indirectHit = 0;
        indirectHitRange = 8;

        caliber = 34.8387;
        cost = 500;

        explosionAngle = 60;
        explosionForceCoef = 1;

        irLock = 1;
        laserLock = 0;
        lockSeekRadius = 85;
        lockType = 0;
        maneuvrability = 1;
        
	};

    class SmokeShellArty;
    class aux187_ammo_smoke_shell_arty : SmokeShellArty
    {
        timeToLive = 175;
    };
