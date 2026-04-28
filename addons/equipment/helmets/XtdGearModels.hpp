		class aux187_Helmet_Model
		{
			label = "[187th] Base Helmets";
			author = "Tim";
			options[] = { "helmetType", "camoType" };
			
			class helmetType
			{
				label = "Helmet Options";
				values[] = { "P2", "RC", "Pilot", "Airborne", "BARC", "ARC", "ARF" };
			};
			class camoType
			{
				label = "Camouflage Options";
				values[] = { "Recruit", "Base", "Veteran", "Sand", "Snow", "Wood" };
				class Sand
				{
					label = "Sand";
					image = QPATHTOF(helmets\data\ui\Sand_UI.paa);
					description = "Sand Camouflage";
				};
				class Snow
				{
					label = "Snow";
					image = QPATHTOF(helmets\data\ui\Snow_UI.paa);
					description = "Snow Camouflage";
				};
				class Wood
				{
					label = "Wood";
					image = QPATHTOF(helmets\data\ui\Wood_UI.paa);
					description = "Wood Camouflage";
				};
			};
		};
