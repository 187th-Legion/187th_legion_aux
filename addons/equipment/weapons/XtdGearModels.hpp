		class aux187_PrimaryWeapon_Model
		{
			label = "[187th] Primary Weapons";
			author = "Tim";
			options[] = { "Rifleman", "Autorifleman", "Grenadier", "Marksman", "Engineer", "Restricted" };
			
			class Rifleman
			{
				label = "Rifleman";
				values[] = { "DC15S", "DC15C", "DC15A" };
                alwaysSelectable = 1;
                class DC15S
                {
                    label = "DC-15S";
                };
                class DC15A
                {
                    label = "DC-15A";
                };
                class DC15C
                {
                    label = "DC-15C";
                };
			};
            class Autorifleman
			{
				label = "Autorifleman";
				values[] = { "DC15L", "Z6" };
                alwaysSelectable = 1;
                class DC15L
                {
                    label = "DC-15L";
                };
                class Z6
                {
                    label = "Z6";
                };
			};
            class Grenadier
			{
				label = "Grenadier";
				values[] = { "DC15S", "DC15C", "DC15A" };
                alwaysSelectable = 1;
                class DC15S
                {
                    label = "DC-15S";
                };
                class DC15C
                {
                    label = "DC-15C";
                };
                class DC15A
                {
                    label = "DC-15A";
                };
			};
            class Marksman
			{
				label = "Marksman";
				values[] = { "Valken", "Firepuncher" };
                alwaysSelectable = 1;
                class Valken
                {
                    label = "Valken38X";
                };
                class Firepuncher
                {
                    label = "773-Firepuncher";
                };
			};
            class Engineer
			{
				label = "Engineer";
				values[] = { "DP23" };
                alwaysSelectable = 1;
                class DP23
                {
                    label = "DP-23";
                };
			};
            class Restricted
			{
				label = "Restricted";
				values[] = { "Shield", "DC15X", "E7", "DLT16", "DC17M" };
                alwaysSelectable = 1;
                class Shield
				{
					label = "DC-15S (Shield)";
					description = "Permission Required";
				};

                class DC15X
				{
					label = "DC-15X";
					description = "Permission Required";
				};

                class E7
				{
					label = "E-7";
					description = "CVT+";
				};

                class DLT16
				{
					label = "DLT-16";
					description = "CVT+";
				};

                class DC17M
				{
					label = "DC-17M";
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
                alwaysSelectable = 1;
                class DC15P
                {
                    label = "DC-15P";
					description = "CVT+";
                };
                class DC17
                {
                    label = "DC-17";
                };
			};

            class Melees
			{
				label = "Melees";
				values[] = { "Knife", "Baton" };
                alwaysSelectable = 1;
			};
            
		};
