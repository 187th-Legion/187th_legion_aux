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
