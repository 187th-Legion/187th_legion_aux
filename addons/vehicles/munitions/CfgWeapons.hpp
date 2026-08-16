    class player;
    class HE;
    
    class 3AS_Sabre_Missiles;
    class aux187_Bantha_PLX: 3AS_Sabre_Missiles
	{
		displayName="Bantha Rocket Launcher";
		magazines[]=
		{
			"Aux187_Bantha_Missile"  
		};
		reloadTime=8.0;
		magazineReloadTime=10.0;
	};

    class IDA_z6;
    class aux187_bantha_z6: IDA_z6
	{
		displayName="Z6 Coax";
		magazines[]=
		{
			"aux187_mag_300rnd_z6"  
		};
		cursor = "EmptyCursor";
		cursorAim = "mg";
        autoReload = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
            };
        };
	};

    class 3AS_Mass_driver_cannon;
    class aux187_bantha_massDriver : 3AS_Mass_driver_cannon
	{
		displayName="Z35 Cannon";
		scope=1;
        magazines[]=
        {
            "aux187_mag_5rnd_z35_cannon",
            "aux187_mag_30rnd_z35_cannon",
            "aux187_mag_15rnd_z35_cannon"
        };

        ace_overpressure_angle = 90;
        ace_overpressure_damage = 0.85;
        ace_overpressure_priority = 1;
        ace_overpressure_range = 50;

        cartridgePos = "nabojnicestart";
        cartridgeVel = "nabojniceend";

        ballisticsComputer = "2 + 16";
        irLaserEnd = "laser dir";
        irLaserPos = "laser pos";

        memoryPointCamera = "eye";
        reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon_105mm_Reload_01.ogg",2.51189,1,10};
        reloadSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\Cannon_105mm_Reload_01.ogg",2.51189,1,10};
	};

    class autocannon_40mm_CTWS;
    class aux187_bantha_cannon : autocannon_40mm_CTWS
	{
		displayName="Z20 Cannon";
		scope=1;
		muzzles[]=
		{
			"aux187_J_Plasma"
		};
		class aux187_J_Plasma : HE
		{
			displayName="Z20 Cannon";
			magazines[]=
			{
				"aux187_mag_100rnd_z20_autocannon"
			};
			class player : player
			{
				sounds[]=
				{
					"StandardSound"
				};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[]=
					{
						"3AS_lightwalkercanon_Shot_SoundSet",
						"Autocannon30mmBody_tail_SoundSet"
					};
				};
			};
			bullet1[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
				0.2818383,
				1,
				10
			};
			bullet2[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
				0.2818383,
				1,
				10
			};
			bullet3[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
				0.2818383,
				1,
				10
			};
			bullet4[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
				0.2818383,
				1,
				10
			};
			bullet5[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",
				0.2818383,
				1,
				10
			};
			bullet6[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",
				0.2818383,
				1,
				10
			};
			bullet7[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",
				0.2818383,
				1,
				10
			};
			bullet8[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",
				0.2818383,
				1,
				10
			};
			bullet9[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",
				0.2818383,
				1,
				10
			};
			bullet10[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",
				0.2818383,
				1,
				10
			};
			bullet11[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",
				0.2818383,
				1,
				10
			};
			bullet12[]=
			{
				"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",
				0.2818383,
				1,
				10
			};
			soundBullet[]=
			{
				"bullet1",
				0.079999998,
				"bullet2",
				0.083999999,
				"bullet3",
				0.083999999,
				"bullet4",
				0.083999999,
				"bullet5",
				0.093000002,
				"bullet6",
				0.093000002,
				"bullet7",
				0.074000001,
				"bullet8",
				0.074000001,
				"bullet9",
				0.083999999,
				"bullet10",
				0.085000001,
				"bullet11",
				0.082999997,
				"bullet12",
				0.082999997
			};
		};
	};
