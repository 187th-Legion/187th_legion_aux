		class aux187_Uniform_Model
		{
			label = "[187th] Base Uniforms";
			author = "Tim";
			options[] = { "uniformType", "camoType", "roleType" };
			
			class uniformType
			{
				label = "Uniform Options";
				values[] = { "P2", "P3", "RC", "Airborne" };
			};
			class camoType
			{
				label = "Camouflage Options";
				values[] = { "Recruit", "Base", "Veteran", "Sand", "Snow", "Wood" };
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
			
			class roleType
			{
				label = "Role Type";
				values[] = { "Trooper", "EOD", "Medic" };
			};
		};
		
		class aux187_Uniform_Model_Leadership
		{
			label = "[187th] Leadership Uniforms";
			author = "Tim";
			options[] = { "rankType" };
			
			class rankType
			{
				label = "Uniform Options";
				values[] = { "CP", "CS", "CGS", "CL", "CC", "CO", "CM" };
			};
		};
