    class TKE_VoidSuitKMC_U_B;
	class aux187_opfor_uniform_wistril : TKE_VoidSuitKMC_U_B
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th OPFOR] Wistril Uniforms";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_opfor_wistril";
			uniformModel="-";
			uniformType="Neopren";
			containerClass  = "Supply150";
	      	mass = 40;
		};
		
		class XtdGearInfo
		{
			model = "aux187_Wistril_Uniform_Model";
			uniformType = "Base"
		};
	};

	class TKE_FCrewHelmMDWhite;
	class aux187_opfor_helmet_wistril : TKE_FCrewHelmMDWhite
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th OPFOR] Wistril Helmet";
		
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_General_Gear\data\TKE_FCrewHelmMDWhite_co.paa","\TKE_Kuiper_Engagements\TKE_General_Gear\data\TKE_FCrewHelmRed_ca.paa"};
	};

	class TKE_KMCArmour1Light;
	class aux187_opfor_vest_wistril_light : TKE_KMCArmour1Light
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th OPFOR] Wistril Light Combat Vest";
		
		hiddenSelectionsTextures[] = {"\TKE_Kuiper_Engagements\TKE_KMC\data\TKE_KMCArmour_co.paa","\TKE_Kuiper_Engagements\TKE_KMC\data\TKE_KMCArmourP_co.paa","\TKE_Kuiper_Engagements\TKE_UCN\data\TKE_UCMCPouches_co.paa","","","","","","","",""};

		class XtdGearInfo
		{
			model = "aux187_Wistril_Vest_Model";
			uniformType = "Light"
		};
	};
