    class BulletCore;
    class aux187_ptr7_base_ammo : BulletCore
    {
        aiAmmoUsageFlags = "64 + 128 + 256 + 512 + 1024";
        aiAmmoUsageFlagsStrict = 0;

        airFriction = -0.005;
        audibleFire = 10.0;
        caliber = 20.0;
        coefGravity = 1.0;
        deflecting = 8;
        deflectionSlowDown=0.8;
        deflectionDirDistribution=0.5;
        hit = 75;
        maxSpeed = 2500;
        typicalspeed = 2475;
        suppressionRadiusBulletClose = 15;
        suppressionRadiusHit = 10;
        timeToLive = 20;

        indirectHit = 8;
        indirectHitRange = 0;

        tracerColor[] = {1, 0.75, 0.75, 0.5}; //RGB-A
        visibleFire = 18;
        visibleFireTime = 12;


        cost = 10000;
        dangerRadiusBulletClose = 1;
        dangerRadiusHit = 2;

        craterEffects = "ImpactEffectsBig";
        explosive = 0;

        simulation = "shotBullet";
        airLock = 0;
        allowAgainstInfantry = 0;
        supersonicCrackNear[] = {"\ca\Weapons\Data\Sound\supersonic_crack_close.wss", 1, 1};
        supersonicCrackFar[] = {"\ca\Weapons\Data\Sound\supersonic_crack_50meters.wss", 1, 1};

        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "aux187_ptr7_base_cartridge";
    };

    class aux187_ptr7_SLAP_ammo : aux187_ptr7_base_ammo
    {
        hit = 250;
        indirectHit = 5;
        indirectHitRange = 0.05;

        caliber = 8.0;
        typicalSpeed = 1550;
        airFriction = -0.0008;

        deflecting = 5;
        ricochetAngle = 10;
        ricochetAngleVar = 5;
        ricochetVelocity = 300;

        explosive = 0;

        tracerScale = 1.2;
        tracerStartTime = 0.05;
        tracerEndTime = 1.2;

        cartridge = "aux187_ptr7_slap_cartridge";
    };

    class aux187_ptr7_AMHEI_ammo : aux187_ptr7_base_ammo
    {
        cartridge = "aux187_ptr7_amhei_cartridge";

        hit = 100;
        indirectHit = 45;
        indirectHitRange = 2.5;

        caliber = 1.0;
        typicalSpeed = 1050;
        airFriction = -0.0004;

        explosive = 0.2;

        explosiveHit = 0.2;
        explosionEffects = "ExploAmmoExplosion";
        CraterEffects = "ExploAmmoCrater";
        explosionSoundEffect = "DefaultExplosion";

        tracerScale = 1.5;
    };

    class aux187_ptr7_PTHP_ammo : aux187_ptr7_base_ammo
    {
        cartridge = "aux187_ptr7_pthp_cartridge";

        hit = 160;
        indirectHit = 15;
        indirectHitRange = 0.3;

        caliber = 0.6;
        typicalSpeed = 1550;
        airFriction = -0.0006;

        deflecting = 25;
        ricochetAngle = 25;
        ricochetAngleVar = 10;

        explosive = 0;
    };


//GUIDED AMMO USE manualControl = 0;
//GUIDED AMMO RANGE maxControlRange = 4000;
//GUIDED AMMO LIFE timeToLive = 40;
//GUIDED AMMO TRACKING trackLead = 1;
//GUIDED AMMO TRACKING trackOversteer = 2;
