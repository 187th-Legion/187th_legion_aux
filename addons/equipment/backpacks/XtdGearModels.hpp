		class aux187_Backpack_Model
		{
			label = "[187th] Backpacks";
			author = "Tim";
			options[] = { "roleType", "strapType", "radioType" };
			
			class roleType
			{
				label = "Backpack Type";
				values[] = { "Trooper", "Medic", "Autorifleman", "Anti-Tank", "Engineer", "Marksman", "Support" };
			};

			class strapType
			{
				label = "Strap Settings";
				values[] = { "Base", "Strapped" };
			};

			class radioType
			{
				label = "Radio Settings";
				values[] = { "Base", "Radio" };
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
		};
