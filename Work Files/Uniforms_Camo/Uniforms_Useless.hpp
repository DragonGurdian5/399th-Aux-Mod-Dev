class CfgPatches
{
	class ZDN_Uniforms_Useless
	{
		author  = "DragonGurdian5, Zackary29";
		name    = "399th Camo Patterns - ACU";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		weapons[]=
		{
			"ZDN_399_Vest_Base_Useless",
			"ZDN_399_Vest_Command_Useless",
			"ZDN_399_Vest_EngFull_Useless",
			"ZDN_399_Vest_EngStripe_Useless",
			"ZDN_399_Vest_Medic_Useless",
			"ZDN_399_Vest_Troop_Base_Useless",
			"ZDN_399_Vest_Troop_Command_Useless",
			"ZDN_399_Vest_Troop_EngFull_Useless",
			"ZDN_399_Vest_Troop_EngStripe_Useless",
			"ZDN_399_Vest_Troop_Medic_Useless",
			"ZDN_399_Vest_Troop_Two_Base_Useless",
			"ZDN_399_Vest_Troop_Two_Command_Useless",
			"ZDN_399_Vest_Troop_Two_EngFull_Useless",
			"ZDN_399_Vest_Troop_Two_EngStripe_Useless",
			"ZDN_399_Vest_Troop_Two_Medic_Useless",
			"ZDN_399_Vest_Troop_Bandolier_Base_Useless",
			"ZDN_399_Vest_Troop_Bandolier_Command_Useless"
		};
	};
};

class CfgWeapons
{
    class ItemInfo;
    class VestItem;
    class HelmetItem;

    class JMSST_troops_Agrade_MI;
	class JMSST_troops_Agrade_troop_MI;
	class JMSST_troops_Agrade_troop2_MI;
	class JMSST_troops_Agrade_troopBand_MI;

    class ZDN_399_Vest_Base_Useless: JMSST_troops_Agrade_MI
    {
        author="Jmax (Originally), Zaigan (Retexture)";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
        displayName="[399th MI] Infantry Vest (ACU) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Useless.paa"
		};
        class ItemInfo: VestItem
		{
			uniformModel="\JMSST_troops\vests\Agrade.p3d";
			containerClass="Supply200";
			mass=2;
			maximumLoad=250;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.30000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=25;
					passThrough=0.30000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
    class ZDN_399_Vest_Command_Useless: ZDN_399_Vest_Base_Useless
    {
        displayName="[399th MI] Command Vest (ACU) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Command_Useless.paa"
		};
    };
    class ZDN_399_Vest_EngFull_Useless: ZDN_399_Vest_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Full) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_1.paa"
		};
	};
    class ZDN_399_Vest_EngStripe_Useless: ZDN_399_Vest_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Stripe) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_2.paa"
		};
	};
    class ZDN_399_Vest_Medic_Useless: ZDN_399_Vest_Base_Useless
    {
        displayName="[399th MI] Medic Vest (ACU) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Medical_Useless.paa"
		};
	};

    class ZDN_399_Vest_Troop_Base_Useless: JMSST_troops_Agrade_troop_MI
    {
        author="Jmax (Originally), Zaigan (Retexture)";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
        displayName="[399th MI] Infantry Vest (ACU) (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Useless.paa"
		};
        class ItemInfo: VestItem
		{
			uniformmodel="\JMSST_troops\vests\Agrade_troop.p3d";
			containerClass="Supply250";
			mass=2;
			maximumLoad=350;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.30000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=25;
					passThrough=0.30000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
    class ZDN_399_Vest_Troop_Command_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Command Vest (ACU) (Troop)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Command_Useless.paa"
		};
    };
    class ZDN_399_Vest_Troop_EngFull_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Full) (Troop)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_1.paa"
		};
    };
    class ZDN_399_Vest_Troop_EngStripe_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Stripe) (Troop)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_2.paa"
		};
    };
    class ZDN_399_Vest_Troop_Medic_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Medic Vest (ACU) (Troop)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Medical_Useless.paa"
		};
    };

    class ZDN_399_Vest_Troop_Two_Base_Useless: JMSST_troops_Agrade_troop2_MI
    {
        author="Jmax (Originally), Zaigan (Retexture)";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
        displayName="[399th MI] Infantry Vest (ACU) (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Useless.paa"
		};
        class ItemInfo: VestItem
		{
			uniformmodel="\JMSST_troops\vests\Agrade_troop2.p3d";
			containerClass="Supply300";
			mass=2;
			maximumLoad=400;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.30000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=25;
					passThrough=0.30000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
    class ZDN_399_Vest_Troop_Two_Command_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Command Vest (ACU) (Troop 2)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Command_Useless.paa"
		};
    };
    class ZDN_399_Vest_Troop_Two_EngFull_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Full) (Troop 2)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_1.paa"
		};
    };
    class ZDN_399_Vest_Troop_Two_EngStripe_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Engineer Vest (ACU) (Stripe) (Troop 2)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Eng_Vest_Useless_2.paa"
		};
    };
    class ZDN_399_Vest_Troop_Two_Medic_Useless: ZDN_399_Vest_Troop_Base_Useless
    {
        displayName="[399th MI] Medic Vest (ACU) (Troop 2)";
		hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Medical_Useless.paa"
		};
    };

    class ZDN_399_Vest_Troop_Bandolier_Base_Useless: JMSST_troops_Agrade_troopBand_MI
	{
		author="Jmax (Originally), Zaigan (Retexture)";
		_generalMacro="JMSST_troops_Agrade_troopBand_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (ACU) (Troop-B)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop_band.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Useless.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\JMSST_troops\vests\Agrade_troop_band.p3d";
			containerClass="Supply400";
			mass=2;
			maximumLoad=450;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
			class HitpointsProtectionInfo
			{
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=40;
					passThrough=0.30000001;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=40;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=25;
					passThrough=0.30000001;
				};
				class Neck
				{
					hitpointName="HitNeck";
					armor=10;
					passThrough=0.2;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
    class ZDN_399_Vest_Troop_Bandolier_Command_Useless: ZDN_399_Vest_Troop_Bandolier_Base_Useless
    {
        displayName = "[399th MI] Command Vest (ACU) (Troop-B)";
        hiddenSelections[]=
		{
			"Camo1"
		};
        hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\vest\ZDN_399_Vest_Command_Useless.paa"
		};
    };

	// ########################################################
	// ######################## HELMET ########################
	// ########################################################	

	class JMSST_troops_M3_helmet;

	class ZDN_399_Helmet_Base_Useless: JMSST_troops_M3_helmet
	{
		author="Jmax (Originally), Zaigan (Retexture)";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Infantry Helmet (ACU)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\jmsst_troops\helmets\m3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\helmets\ZDN_399_Camo_M3_base_Useless_co.paa"
		};
		ace_hearing_protection = 1.00; // Protection against Deafening
		ace_hearing_lowerVolume = 0.60; // Lowers Volume with Helmet On
	};
	class ZDN_399_Helmet_Medic_One_Useless: JMSST_troops_M3_helmet
	{
		author="Jmax (Originally), Zaigan (Retexture)";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet (ACU)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\jmsst_troops\helmets\m3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\helmets\ZDN_399_Medical_Helmet_Useless.paa"
		};
		ace_hearing_protection = 1.00; // Protection against Deafening
		ace_hearing_lowerVolume = 0.60; // Lowers Volume with Helmet On
	};
	class ZDN_399_Helmet_Medic_Two_Useless: JMSST_troops_M3_helmet
	{
		author="Jmax (Originally), Zaigan (Retexture)";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet (ACU)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\jmsst_troops\helmets\m3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\helmets\ZDN_399_Medical_Helmet_2_Useless.paa"
		};
		ace_hearing_protection = 1.00; // Protection against Deafening
		ace_hearing_lowerVolume = 0.60; // Lowers Volume with Helmet On
	};
	class ZDN_399_Helmet_Engineer_Useless: JMSST_troops_M3_helmet
	{
		author="Jmax (Originally), Zaigan (Retexture)";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Engineer Helmet (ACU)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\jmsst_troops\helmets\m3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Camo\data\helmets\ZDN_399_Engineer_Useless.paa"
		};
		ace_hearing_protection = 1.00; // Protection against Deafening
		ace_hearing_lowerVolume = 0.60; // Lowers Volume with Helmet On
	};
};