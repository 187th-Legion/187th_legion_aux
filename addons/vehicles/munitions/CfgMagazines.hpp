	class 3AS_250Rnd_ATTE_30mm_MP_Shells;
	class Aux187_ATTE_250Rnd_MP_Shells : 3AS_250Rnd_ATTE_30mm_MP_Shells
	{
		displayName = "[187th] 250Rnd AT-TE MP Shells";
		ammo = "Aux187_ATTE_30mm_MP";
		count = 250;
	};

	class 3as_saber_80Rnd_autocannon_30mm_mag;
	class 3AS_JLTS_MK43_AT;

	class aux187_mag_100rnd_z20_autocannon : 3as_saber_80Rnd_autocannon_30mm_mag
	{
		ammo="aux187_ammo_bantha_z20_green";
		count = 100;
	};
	
	class aux187_bantha_missile : 3AS_JLTS_MK43_AT
	{
		count = 1;
	};

	class 3AS_30Rnd_Mass_Driver_Shells;
	class aux187_mag_30rnd_z35_cannon : 3AS_30Rnd_Mass_Driver_Shells
	{
		displayName = "30Rnd AP Mass Driver Round";
		ammo = "aux187_ammo_bantha_z35_blue";
		count = 30;
	};

	class aux187_mag_5rnd_z35_cannon : 3AS_30Rnd_Mass_Driver_Shells
	{
		displayName = "5Rnd EMP Mass Driver Round";
		ammo = "aux187_ammo_bantha_z35_emp";
		count = 5;
	};

	class aux187_mag_15rnd_z35_cannon : 3AS_30Rnd_Mass_Driver_Shells
	{
		displayName = "15Rnd HE Mass Driver Round";
		ammo = "aux187_ammo_bantha_z35_heat";
		count = 15;
	};
