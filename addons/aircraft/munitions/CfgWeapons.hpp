    class CMFlareLauncher;
	class Mode_Burst;
    class aux187_cm_launcher : CMFlareLauncher
	{
        magazines[] = { "aux187_mag_300Rnd_CMFlare" };

        magazineReloadTime = 0.2;

        class Burst : Mode_Burst
        {
            burst = 10;
        };

        class AIBurst : Burst
        {
            burst = 10;
            burstRangeMax = -1;
        };
	};

    class 3as_LAAT_Missile_AGM;
	class Aux187_LAATC_AGM_Missile : 3as_LAAT_Missile_AGM
	{
		displayName = "Torrent Air-to-Ground Missile";
		magazines[]=
		{
			"Aux187_LAATC_2Rnd_AGM_Missile"
		};
	};
	
	class 3as_LAAT_Missile_AA;
	class Aux187_LAATC_AA_Missile : 3as_LAAT_Missile_AA
	{
		displayName = "Sidewinder Air-to-Air Missile";
		magazines[]=
		{
			"Aux187_LAATC_2Rnd_AA_Missile"
		};
	};

	class Aux187_LAAT_AGM_Missile : 3as_LAAT_Missile_AGM
	{
		displayName = "Torrent Air-to-Ground Missile";
		magazines[]=
		{
			"Aux187_LAAT_6Rnd_AGM_Missile"
		};
	};
	

	class Aux187_LAAT_AA_Missile : 3as_LAAT_Missile_AA
	{
		displayName = "Sidewinder Air-to-Air Missile";
		magazines[]=
		{
			"Aux187_LAAT_4Rnd_AA_Missile"
		};
	};
