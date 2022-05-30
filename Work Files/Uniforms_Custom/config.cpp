class CfgPatches
{
	class ZDN_Uniforms_Custom
	{
		author="DragonGurdian5, Zackary29";
		name="399 Auxiliary [SST]";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Weapons_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"ZDN_399_Uniform_F"
		};
		weapons[]=
		{
			"ZDN_399_Uniform_Base"
		};
	};
};

class cfgFactionClasses
{
	class Federation
	{
		icon="";
		displayName="399th Mobile Infantry (Custom)";
		side=1;
		priority=1;
	};
};

class CfgVehicles
{
	class JMSST_troops_MIbody_6th_F;

	class ZDN_399_Uniform_Zaigan_F: JMSST_troops_MIbody_6th_F
	{
		author="JMax";
		scope=2;
		modelSides[]={6};
		model="\JMSST_troops\MIbody.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Zaigan_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
	};
	class ZDN_399_Uniform_Dragon_F: JMSST_troops_MIbody_6th_F
	{
		author="JMax";
		scope=2;
		modelSides[]={6};
		model="\JMSST_troops\MIbody.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Dragon_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
    class ZDN_399_Uniform_Benji_F: JMSST_troops_MIbody_6th_F
	{
		author="JMax";
		scope=2;
		modelSides[]={6};
		model="\JMSST_troops\MIbody.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Benji_co.paa",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
    class ZDN_399_Uniform_Wurmstein_F: JMSST_troops_MIbody_6th_F
	{
		author="JMax";
		scope=2;
		modelSides[]={6};
		model="\JMSST_troops\MIbody.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Wurmstein_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
	};
    class ZDN_399_Uniform_Drakshaw_F: JMSST_troops_MIbody_6th_F
	{
		author="JMax";
		scope=2;
		modelSides[]={6};
		model="\JMSST_troops\MIbody.p3d";
		nakedUniform="U_BasicBody";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Drakshaw_co.paa",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_CP_co"
		};
	};
    class ZDN_399_Uniform_Tac_F: JMSST_troops_MIbody_6th_F
    {
        author="JMax";
        scope=2;
        modelSides[]={6};
        model="\JMSST_troops\MIbody.p3d";
        nakedUniform="U_BasicBody";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Tac_co.paa",
            "Uniforms\data\badges\ZDN_399thMiBadge.paa",
            "JMSST_troops\data\ranks\pogon_cp_co"
        };
    };
    class ZDN_399_Uniform_Dolphin_F: JMSST_troops_MIbody_6th_F
    {
        author="JMax";
        scope=2;
        modelSides[]={6};
        model="\JMSST_troops\MIbody.p3d";
        nakedUniform="U_BasicBody";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Dolphin_co",
            "Uniforms\data\badges\ZDN_399thMedBadge.paa",
            "JMSST_troops\data\ranks\pogon_cp_co.paa"
        };
    };
};

class CfgWeapons
{
	class ItemInfo;
	class JMSST_troops_MIbody_6th_F_CombatUniform;
	class UniformItem;

	class ZDN_399_Uniform_Zaigan_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI][C] Infantry Uniform (Zaigan)";
		picture="\JMSST_troops\data\ico\ico_u_jacket_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Zaigan_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Zaigan_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Dragon_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI][C] Fleet Uniform (Schäfer)";
		picture="\JMSST_troops\data\ico\ico_u_jacketFleet_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Dragon_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Dragon_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_Benji_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI][C] Engineer Uniform (Jass)";
		picture="\JMSST_troops\data\ico\ico_u_jacket_eng_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Benji_co.paa",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Benji_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Wurmstein_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI][C] Fleet Uniform (Wurmstein)";
		picture="\JMSST_troops\data\ico\ico_u_jacketFleet_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Wurmstein_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Wurmstein_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_Drakshaw_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI][C] Medic Uniform (Drakshaw)";
		picture="\JMSST_troops\data\ico\ico_u_jacket_med_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Drakshaw_co.paa",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Drakshaw_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Tac_Base: JMSST_troops_MIbody_6th_F_CombatUniform
    {
        author="JMax";
        scope=2;
        displayName="[399th MI][C] Infantry Uniform (Tac)";
        picture="\JMSST_troops\data\ico\ico_u_jacket_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Tac_co",
            "Uniforms\data\badges\ZDN_399thMiBadge.paa",
            "JMSST_troops\data\ranks\pogon_cp_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            modelSides[] = {6};
            uniformClass="ZDN_399_Uniform_Tac_F";
            containerClass="Supply100";
            mass=40;
        };
    };
    class ZDN_399_Uniform_Medic_Dolphin_Base: JMSST_troops_MIbody_6th_F_CombatUniform
    {
        author="JMax";
        scope=2;
        displayName="[399th MI][C] Medic Uniform (Dolphin)";
		picture="\JMSST_troops\data\ico\ico_u_jacket_med_ca.paa";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[]=
        {
            "Camo1",
            "Camo2",
            "Camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "Uniforms_Custom\data\uniform\ZDN_399_Uniform_Base_Dolphin_co",
            "Uniforms\data\badges\ZDN_399thMedBadge.paa",
            "JMSST_troops\data\ranks\pogon_cp_co.paa"
        };
        class ItemInfo: UniformItem
        {
            uniformModel="-";
            modelSides[] = {6};
            uniformClass="ZDN_399_Uniform_Dolphin_F";
            containerClass="Supply100";
            mass=40;
        };
    };

	// ######################################################
	// ######################## Vest ########################
	// ######################################################

	class JMSST_troops_Agrade_MI;
	class JMSST_troops_Agrade_troop_MI;
	class JMSST_troops_Agrade_troop2_MI;
	class VestItem;
	
 	class ZDN_399_Vest_Troop_Command_Zaigan: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI][C] Infantry Vest (Zaigan)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\vest\ZDN_399_CC_Zaigan.paa"
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
	 class ZDN_399_Vest_Command_Dragon: JMSST_troops_Agrade_MI
 	{
 		author="JMax";
 		_generalMacro="JMSST_troops_Agrade_MI";
 		scope=2;
 		side=3;
 		armor=2;
 		displayName="[399th MI][C] Infantry Vest (Schafer)";
 		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
 		model="\JMSST_troops\vests\Agrade.p3d";
 		hiddenSelections[]=
 		{
 			"Camo1"
 		};
 		hiddenSelectionsTextures[]=
 		{
 			"Uniforms_Custom\data\vest\ZDN_399_CC_Dragon.paa"
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
	class ZDN_399_Vest_Troop_Two_Command_Benji: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI][C] Infantry Vest (Benji)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms_Custom\data\vest\ZDN_399_CC_Benji.paa"
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
};