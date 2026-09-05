		class aux187_Backpack_Model
		{
			label = "[187th] Backpacks";
			author = "Tim";
			options[] = { "roleType", "strapType", "radioType", "camoType" };
			
			class roleType
			{
				label = "Backpack Type";
				values[] = { "Trooper", "Medic", "Engineer", "Ammo" };
				alwaysSelectable = 1;
			};

			class strapType
			{
				label = "Strap Settings";
				values[] = { "Base", "Strapped" };
				alwaysSelectable = 1;
			};

			class radioType
			{
				label = "Radio Settings";
				values[] = { "Base", "Radio" };
				alwaysSelectable = 1;
			};

			class camoType
			{
				label = "Camouflage Options";
				values[] = { "Base", "Sand", "Snow", "Wood" };
				alwaysSelectable = 1;
				class Sand
				{
					label = "Sand";
					image = QPATHTOF(uniforms\data\ui\Sand_UI.paa);
					description = "Sand Camouflage";
				};
				class Snow
				{
					label = "Snow";
					image = QPATHTOF(uniforms\data\ui\Snow_UI.paa);
					description = "Snow Camouflage";
				};
				class Wood
				{
					label = "Wood";
					image = QPATHTOF(uniforms\data\ui\Wood_UI.paa);
					description = "Wood Camouflage";
				};
			};
		};

		class aux187_MiscBags_Model
		{
			label = "[187th] Miscellaneous Packs";
			author = "Tim";
			options[] = { "Bags", "Radios" };
			
			class Bags
			{
				label = "Backpack Type";
				values[] = { "BeltBag", "ScoutBag", "PatrolPack" };
				alwaysSelectable = 1;

				class BeltBag
				{
					label = "Belt Bags";
				};

				class ScoutBag
				{
					label = "Scout Pack";
				};

				class PatrolPack
				{
					label = "Patrol Pack";
				};
			};

			class Radios
			{
				label = "Backpack Type";
				values[] = { "Mini1", "Mini2", "PatrolPackR", "RTO2" };
				alwaysSelectable = 1;

				class Mini1
				{
					label = "Mini LR Pack";
				};

				class Mini2
				{
					label = "RTO Attachment";
				};

				class PatrolPackR
				{
					label = "Patrol LR Pack";
				};

				class RTO2
				{
					label = "Heavy LR Pack";
				};
			};
		};

		/*class aux187_CommandoBags_Model
		{
			label = "[187th] Commando Packs";
			author = "Tim";
			options[] = { "customType", "radioType", "camoType" };
			
			class customType
			{
				label = "Backpack Variant";
				values[] = { "base", "Horizon", "Mindless", "Ringer" };
				alwaysSelectable = 1;
			};

			class radioType
			{
				label = "Radio Settings";
				values[] = { "Base", "Radio" };
				alwaysSelectable = 1;
			};

			class camoType
			{
				label = "Camouflage Options";
				values[] = { "Base", "Sand", "Snow", "Wood" };
				class Sand
				{
					label = "Sand";
					image = QPATHTOF(uniforms\data\ui\Sand_UI.paa);
					description = "Sand Camouflage";
				};
				class Snow
				{
					label = "Snow";
					image = QPATHTOF(uniforms\data\ui\Snow_UI.paa);
					description = "Snow Camouflage";
				};
				class Wood
				{
					label = "Wood";
					image = QPATHTOF(uniforms\data\ui\Wood_UI.paa);
					description = "Wood Camouflage";
				};
			};

		};*/
