    class FlareBase;
    class aux187_GrenadeAmmo_HandFlare_Base : FlareBase
    {
        hit = 0;
        indirectHit = 0;
        indirectHitRange = 0.2;
        dangerRadiusHit = -1;
        suppressionRadiusHit = -1;
        typicalspeed = 22;
        mass = 4;
        cost = 100;
        simulation = "shotSmokeX";
        explosive = 0;
        deflecting = 30;
        explosionTime = 0.05;
        timeToLive = 600;
        triggerTime = 0.01;
        triggerSpeedCoef = 1;
        visibleFire = 0.5;
        audibleFire = 0.05;
        visibleFireTime = 1;
        fuseDistance = 0;
        soundHit[] = {"", 0, 1};
        SmokeShellSoundHit1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_1.ogg", 1.2589254, 1, 100};
        SmokeShellSoundHit2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_2.ogg", 1.2589254, 1, 100};
        SmokeShellSoundHit3[] = {"A3\Sounds_F\weapons\smokeshell\smoke_3.ogg", 1.2589254, 1, 100};
        SmokeShellSoundLoop1[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop1.ogg", 0.12589253, 1, 70};
        SmokeShellSoundLoop2[] = {"A3\Sounds_F\weapons\smokeshell\smoke_loop2.ogg", 0.12589253, 1, 70};
        grenadeFireSound[] = {"SmokeShellSoundHit1", 0.25, "SmokeShellSoundHit2", 0.25, "SmokeShellSoundHit3", 0.5};
        grenadeBurningSound[] = {"SmokeShellSoundLoop1", 0.5, "SmokeShellSoundLoop2", 0.5};
        aiAmmoUsageFlags = "4 + 2";
        whistleDist = 0;
    };
    class aux187_GrenadeAmmo_HandFlare_Red : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_red";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "aux187_HandFlare_Effect_Red";
    };
    class aux187_GrenadeAmmo_HandFlare_Green : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_green";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "aux187_HandFlare_Effect_Green";
    };
    class aux187_GrenadeAmmo_HandFlare_Yellow : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_yellow";
        smokeColor[] = {0.8438, 0.8438, 0.1353, 1};
        effectsSmoke = "aux187_HandFlare_Effect_Yellow";
    };
    class aux187_GrenadeAmmo_HandFlare_Blue : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_white";
        smokeColor[] = {0.1353, 0.1353, 0.8438, 1};
        effectsSmoke = "aux187_HandFlare_Effect_Blue";
    };
    class aux187_GrenadeAmmo_HandFlare_Purple : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_white";
        smokeColor[] = {0.8438, 0.1353, 0.8438, 1};
        effectsSmoke = "aux187_HandFlare_Effect_Purple";
    };
    class aux187_GrenadeAmmo_SignalFlare_Base : aux187_GrenadeAmmo_HandFlare_Base
    {
        timeToLive = 360;
    };
    class aux187_GrenadeAmmo_SignalFlare_Red : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_red";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "aux187_SignalFlare_Effect_Red";
    };
    class aux187_GrenadeAmmo_SignalFlare_Green : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_green";
        smokeColor[] = {0.8438, 0.1383, 0.1353, 1};
        effectsSmoke = "aux187_SignalFlare_Effect_Green";
    };
    class aux187_GrenadeAmmo_SignalFlare_Yellow : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_yellow";
        smokeColor[] = {0.8438, 0.8438, 0.1353, 1};
        effectsSmoke = "aux187_SignalFlare_Effect_Yellow";
    };
    class aux187_GrenadeAmmo_SignalFlare_Blue : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_white";
        smokeColor[] = {0.1353, 0.1353, 0.8438, 1};
        effectsSmoke = "aux187_SignalFlare_Effect_Blue";
    };
    class aux187_GrenadeAmmo_SignalFlare_Purple : aux187_GrenadeAmmo_HandFlare_Base
    {
        model = "\A3\weapons_f\ammo\flare_white";
        smokeColor[] = {0.8438, 0.1353, 0.8438, 1};
        effectsSmoke = "aux187_SignalFlare_Effect_Purple";
    };

