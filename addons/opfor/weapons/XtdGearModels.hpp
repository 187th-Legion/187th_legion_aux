		class aux187_opfor_PrimaryWeapon_Model
		{
			label = "[187th OPFOR] Primary Weapons";
			author = "Tim";
			options[] = { "weaponType" };
			
			class weaponType
			{
				label = "Weapons Options";
				values[] = { "E5", "E5S", "E5C", "E5Shield", "SBB3" };
                alwaysSelectable = 1;
                class E5
                {
                    label = "E-5 Carbine";
                };
                class SBB3
                {
                    label = "SB-B3 Carbine";
                };
                class E5S
                {
                    label = "E-5S Targeting Blaster";
                };
                class E5C
                {
                    label = "E-5C Blaster Repeater";
                };

                class E5Shield
                {
                    label = "E-5 Carbine (Shield)";
                };
			}; 
		};
