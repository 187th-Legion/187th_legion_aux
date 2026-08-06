		class aux187_PrimaryWeapon_Model
		{
			label = "[187th] Primary Weapons";
			author = "Tim";
			options[] = { "Rifleman", "Autorfileman", "Grenadier", "Marksman", "Engineer", "Restricted" };
			
			class Rifleman
			{
				label = "Rifleman";
				values[] = { "DC15S", "DC15C", "DC15A" };
			};
            class Autorfileman
			{
				label = "Autorifleman";
				values[] = { "DC15L", "Z6" };
			};
            class Grenadier
			{
				label = "Grenadier";
				values[] = { "DC15S", "DC15C", "DC15A" };
			};
            class Marksman
			{
				label = "Marksman";
				values[] = { "Valken", "Firepuncher" };
			};
            class Engineer
			{
				label = "Engineer";
				values[] = { "DP23" };
			};
            class Restricted
			{
				label = "Restricted";
				values[] = { "Shield", "E7", "DLT16", "DC17M", "DC15X" };
                class Shield
				{
					label = "DC-15S Blaster Carbine";
					description = "Permission Required";
				};

                class DC15X
				{
					label = "DC-15X Heavy Sniper Rifle";
					description = "Permission Required";
				};

                class E7
				{
					label = "E-7 Experimental Rifle";
					description = "CVT+";
				};

                class DLT16
				{
					label = "DLT-16 Experimental Heavy Blaster";
					description = "CVT+";
				};

                class DC17M
				{
					label = "DC-17M Interchangeable Weapon System";
					description = "RC Billet";
				};
			};
            
		};

        class aux187_SecondaryWeapon_Model
		{
			label = "[187th] Secondary Weapons";
			author = "Tim";
			options[] = { "Pistols", "Melees" };
			
			class Pistols
			{
				label = "Pistols";
				values[] = { "DC17", "DC15P" };
			};

            class Melees
			{
				label = "Melees";
				values[] = { "DC17", "DC15P" };
			};
            
		};
