    class UniformItem;
	class JLTS_CloneArmor;
	class JLTS_CloneArmorCM;
	class WM_P3Scout;
	class 3AS_U_Rep_Katarn_Armor;
	
	/*
	---------------------------------------------------------------
	                      UNIFORM BASE CLASSES
	---------------------------------------------------------------
	*/
	class aux187_Uniform_Base : baseClass
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Base Uniforms";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Base";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo
		{
			model = "aux187_Uniform_Model";
		};
	};
	
	/*
	---------------------------------------------------------------
	                        UNIFORM CLASSES
	---------------------------------------------------------------
	*/
	
	//P2 UNIFORM CLASSES
	class aux187_P2_Recruit_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Recruit)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Recruit";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Recruit";
			roleType = "Trooper";
		};
	};
	
	class aux187_P2_Base_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Base)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Base";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Base";
			roleType = "Trooper";
		};
	};
	
		class aux187_P2_BaseEOD_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Base, EOD)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_BaseEOD";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Base";
			roleType = "EOD";
		};
	};
	
	class aux187_P2_BaseMedic_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Base, Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_BaseMedic";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Base";
			roleType = "Medic";
		};
	};
	
	class aux187_P2_Veteran_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Veteran)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Veteran";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Veteran";
			roleType = "Trooper";
		};
	};
	
	class aux187_P2_VeteranEOD_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Veteran, EOD)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_VeteranEOD";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Veteran";
			roleType = "EOD";
		};
	};
	
	class aux187_P2_VeteranMedic_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Veteran, Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_VeteranMedic";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Veteran";
			roleType = "Medic";
		};
	};
	
	class aux187_P2_CP_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CP)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CP";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CP";
		};
	};
	
	class aux187_P2_CS_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CS";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CS";
		};
	};
	
	class aux187_P2_CGS_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CGS)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CGS";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CGS";
		};
	};
	
	class aux187_P2_CL_Uniform : JLTS_CloneArmorCM
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CL)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CL";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CL";
		};
	};
	
	class aux187_P2_CC_Uniform : JLTS_CloneArmorCM
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CC)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CC";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CC";
		};
	};
	
	class aux187_P2_CO_Uniform : JLTS_CloneArmorCM
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CO)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CO";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CO";
		};
	};
	
	class aux187_P2_CM_Uniform : JLTS_CloneArmorCM
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (CM)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_CM";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model_Leadership";
			rankType = "CM";
		};
	};
	
	class aux187_P2_Sand_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Sand)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Sand";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Sand";
			roleType = "Trooper";
		};
	};
	
	class aux187_P2_Snow_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Snow)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Snow";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Snow";
			roleType = "Trooper";
		};
	};
	
	class aux187_P2_Wood_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Clone Armour (Wood)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P2_Wood";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P2";
			camoType = "Wood";
			roleType = "Trooper";
		};
	};
	
	//AIRBORNE UNIFORM CLASSES
	
	class aux187_Airborne_Base_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Base)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_Base";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Base";
			roleType = "Trooper";
		};
	};
	
		class aux187_Airborne_BaseEOD_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Base, EOD)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_BaseEOD";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Base";
			roleType = "EOD";
		};
	};
	
	class aux187_Airborne_BaseMedic_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Base, Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_BaseMedic";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Base";
			roleType = "Medic";
		};
	};
	
	class aux187_Airborne_Veteran_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Veteran)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_Veteran";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Veteran";
			roleType = "Trooper";
		};
	};
	
	class aux187_Airborne_VeteranEOD_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Veteran, EOD)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_VeteranEOD";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Veteran";
			roleType = "EOD";
		};
	};
	
	class aux187_Airborne_VeteranMedic_Uniform : JLTS_CloneArmor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 2 Airborne Armour (Veteran, Medic)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_Airborne_VeteranMedic";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "Airborne";
			camoType = "Veteran";
			roleType = "Medic";
		};
	};
	
	//P3 UNIFORM CLASSES
	class aux187_P3_Base_Uniform : WM_P3Scout
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 3 Scout Armour (Base)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P3_Base";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P3";
			camoType = "Base";
			roleType = "Trooper";
		};
	};
	
	class aux187_P3_Veteran_Uniform : WM_P3Scout
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 3 Scout Armour (Veteran)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P3_Veteran";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P3";
			camoType = "Veteran";
			roleType = "Trooper";
		};
	};
	
	class aux187_P3_Sand_Uniform : WM_P3Scout
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 3 Scout Armour (Sand)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P3_Sand";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P3";
			camoType = "Sand";
			roleType = "Trooper";
		};
	};
	
	class aux187_P3_Snow_Uniform : WM_P3Scout
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 3 Scout Armour (Snow)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P3_Snow";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P3";
			camoType = "Snow";
			roleType = "Trooper";
		};
	};
	
	class aux187_P3_Wood_Uniform : WM_P3Scout
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Phase 3 Scout Armour (Wood)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_P3_Wood";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "P3";
			camoType = "Wood";
			roleType = "Trooper";
		};
	};
	//COMMANDO UNIFORM CLASSES
	class aux187_RC_Base_Uniform : 3AS_U_Rep_Katarn_Armor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Republic Commando Armour (Base)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_RC_Base";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "RC";
			camoType = "Base";
			roleType = "Trooper";
		};
	};
	
	class aux187_RC_Sand_Uniform : 3AS_U_Rep_Katarn_Armor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Republic Commando Armour (Sand)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_RC_Sand";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "RC";
			camoType = "Sand";
			roleType = "Trooper";
		};
	};
	
	class aux187_RC_Snow_Uniform : 3AS_U_Rep_Katarn_Armor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Republic Commando Armour (Snow)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_RC_Snow";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "RC";
			camoType = "Snow";
			roleType = "Trooper";
		};
	};
	
	class aux187_RC_Wood_Uniform : 3AS_U_Rep_Katarn_Armor
	{
		author = "Tim";
		scope = 2;
		displayName = "[187th] Republic Commando Armour (Wood)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		
		class ItemInfo : UniformItem
		{
			uniformClass="aux187_RC_Wood";
			uniformModel="-";
			uniformType="Neopren";
			containerClass="Supply200";
			mass=15;
		};
		
		class XtdGearInfo {
			model = "aux187_Uniform_Model";
			uniformType = "RC";
			camoType = "Wood";
			roleType = "Trooper";
		};
	};
