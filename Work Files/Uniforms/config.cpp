class CfgPatches
{
	class ZDN_Uniforms
	{
		author="DragonGurdian5, Zackary29, and Krevan";
		name="399th Auxiliary [SST]";
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
		displayName="399th Mobile Infantry";
		side=1;
		priority=1;
	};
};

class CfgVehicles
{
	class JMSST_troops_MIbody_6th_F;
	class B_Kitbag_Base;
	class ReammoBox;
	class TFAR_Bag_Base;

	class ZDN_B_Kitbag_Med: B_Kitbag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\bags\kitbag_med_co.paa"
		};
		scope=2;
		displayName="[399th MI] Medic Kitbag";
	};
	class ZDN_B_Kitbag_Eng: B_Kitbag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\bags\kitbag_eng_co.paa"
		};
		scope=2;
		displayName="[399th MI] Engineer Kitbag";
		containerClass="Supply1200";
	};
	class ZDN_B_Kitbag_Inf: B_Kitbag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\bags\kitbag_inf_co.paa"
		};
		scope=2;
		displayName="[399th MI] Infantry Kitbag";
	};
	class ZDN_B_Kitbag_Cmd: B_Kitbag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\bags\kitbag_cmd_co.paa"
		};
		scope=2;
		displayName="[399th MI] Command Kitbag";
	};
	class ZDN_B_Kitbag_FedNet: B_Kitbag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\bags\kitbag_fednet_co.paa"
		};
		scope=2;
		displayName="[399th MI] FedNet Kitbag";
	};
	class ZDN_FleetBag: TFAR_Bag_Base
	{
		picture="\JMSST_troops\data\ico\ico_b_c_kitbag_black.paa";
		scope=2;
		displayName="[399th MI] Fleet Bag";
		model="";
		tf_encryptionCode="tf_west_radio_code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		containerClass="Supply1200";
	};

	class ZDN_399_Uniform_F: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
	};
	class ZDN_399_Uniform_Pvt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_pr_co"
		};
	};
	class ZDN_399_Uniform_PFC: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"Uniforms\data\ranks\pogon_pfc_co"
		};
	};
	class ZDN_399_Uniform_LCpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"Uniforms\data\ranks\pogon_lcpl_co"
		};
	};
	class ZDN_399_Uniform_Cpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
	};
	class ZDN_399_Uniform_Sgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
	class ZDN_399_Uniform_Ssgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergPlat_co"
		};
	};
	class ZDN_399_Uniform_MSgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergComp_co"
		};
	};
	class ZDN_399_Uniform_SgtMaj: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergMast_co"
		};
	};
	class ZDN_399_Uniform_Lt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
	};
	class ZDN_399_Uniform_Cap: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cap_co"
		};
	};
	class ZDN_399_Uniform_Maj: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_maj_co"
		};
	};


	class ZDN_399_Uniform_Fleet_F: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
	};
	class ZDN_399_Uniform_Fleet_Pvt: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_pr_co"
		};
	};
	class ZDN_399_Uniform_Fleet_PFC: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"Uniforms\data\ranks\pogon_pfc_co"
		};
	};
	class ZDN_399_Uniform_Fleet_LCpl: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"Uniforms\data\ranks\pogon_lcpl_co"
		};
	};
	class ZDN_399_Uniform_Fleet_Cpl: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
	};
	class ZDN_399_Uniform_Fleet_Sgt: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
	class ZDN_399_Uniform_Fleet_SSgt: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergPlat_co"
		};
	};
	class ZDN_399_Uniform_Fleet_MSgt: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergComp_co"
		};
	};
	class ZDN_399_Uniform_Fleet_SgtMaj: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergMast_co"
		};
	};
	class ZDN_399_Uniform_Fleet_Lt: JMSST_troops_MIbody_6th_F
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
	};


	class ZDN_399_Uniform_Medic_F: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
	};
	class ZDN_399_Uniform_Medic_Pvt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_pr_co"
		};
	};
	class ZDN_399_Uniform_Medic_PFC: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"Uniforms\data\ranks\pogon_pfc_co"
		};
	};
	class ZDN_399_Uniform_Medic_LCpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"Uniforms\data\ranks\pogon_lcpl_co"
		};
	};
	class ZDN_399_Uniform_Medic_Cpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
	};
	class ZDN_399_Uniform_Medic_Sgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
	class ZDN_399_Uniform_Medic_SSgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergPlat_co"
		};
	};
	class ZDN_399_Uniform_Medic_MSgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergComp_co"
		};
	};
	class ZDN_399_Uniform_Medic_SgtMaj: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergMast_co"
		};
	};
	class ZDN_399_Uniform_Medic_Lt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
	};


	class ZDN_399_Uniform_Engineer_F: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
	};
	class ZDN_399_Uniform_Engineer_Pvt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_pr_co"
		};
	};
	class ZDN_399_Uniform_Engineer_PFC: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"Uniforms\data\ranks\pogon_pfc_co"
		};
	};
	class ZDN_399_Uniform_Engineer_LCpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"Uniforms\data\ranks\pogon_lcpl_co"
		};
	};
	class ZDN_399_Uniform_Engineer_Cpl: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_cp_co"
		};
	};
	class ZDN_399_Uniform_Engineer_Sgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_serg_co"
		};
	};
	class ZDN_399_Uniform_Engineer_SSgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergPlat_co"
		};
	};
	class ZDN_399_Uniform_Engineer_MSgt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergComp_co"
		};
	};
	class ZDN_399_Uniform_Engineer_SergMaj: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_sergMast_co"
		};
	};
	class ZDN_399_Uniform_Engineer_Lt: JMSST_troops_MIbody_6th_F
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
	};
};

class CfgWeapons
{
	class ItemInfo;
	class JMSST_troops_MIbody_6th_F_CombatUniform;
	class UniformItem;
	class VestItem;
	class HelmetItem;
	
	// #####################################################
	// ###################### Uniform ######################
	// #####################################################

	class ZDN_399_Uniform_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (Recruit)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Private: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Pvt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_PrivateFirstClass: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-2)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_PFC";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_LanceCorporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-3)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_LCpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Corporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-4)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Cpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Sergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-5)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Sgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_StaffSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-6)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Ssgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_MasterSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-7)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_MSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_SergeantMajor: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (E-8)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_SgtMaj";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Lieutenant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (O-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_lt_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Lt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Captain: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (O-2)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_cap_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Maj";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Major: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Infantry Uniform (O-3)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_maj_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_F";
			containerClass="Supply100";
			mass=40;
		};
	};

	class ZDN_399_Uniform_Fleet_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (Recruit)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Private: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-1)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_Pvt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_PrivateFirstClass: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-2)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_PFC";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_LanceCorporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-3)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_LCpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Corporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-4)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_Cpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Sergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-5)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_Sgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_StaffSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-6)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_SSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_MasterSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-7)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_MSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_SergeantMajor: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (E-8)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_SgtMaj";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Fleet_Lieutenant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Fleet Uniform (O-1)";
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
			"JMSST_troops\data\body\MIbody_fleet_co.paa",
			"Uniforms\data\badges\ZDN_399thMiBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Fleet_Lt";
			containerClass="Supply100";
			mass=40;
		};
	};

	class ZDN_399_Uniform_Medic_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (Recruit)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_Private: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_Pvt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_PrivateFirstClass: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-2)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_PFC";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_LanceCorporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-3)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_LCpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_Corporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-4)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_Cpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_Sergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-5)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_Sgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_StaffSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-6)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_SSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_MasterSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-7)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_MSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_SergeantMajor: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (E-8)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_SgtMaj";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Medic_Lieutenant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Medic Uniform (O-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thMedBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Medic_Lt";
			containerClass="Supply100";
			mass=40;
		};
	};

	class ZDN_399_Uniform_Engineer_Base: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (Recruit)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_F";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_Private: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_Pvt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_PrivateFirstClass: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-2)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_PFC";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_LanceCorporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-3)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_LCpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_Corporal: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-4)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_Cpl";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_Sergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-5)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_Sgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_StaffSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-6)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_SSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_MasterSergeant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-7)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_MSgt";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_SergeantMajor: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (E-8)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_SergMaj";
			containerClass="Supply100";
			mass=40;
		};
	};
	class ZDN_399_Uniform_Engineer_Lieutenant: JMSST_troops_MIbody_6th_F_CombatUniform
	{
		author="JMax";
		scope=2;
		displayName="[399th MI] Engineer Uniform (O-1)";
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
			"Uniforms\data\Uniform\ZDN_399_Uniform_Base_co",
			"Uniforms\data\badges\ZDN_399thEngBadge.paa",
			"JMSST_troops\data\ranks\pogon_black_co"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			modelSides[] = {6};
			uniformClass="ZDN_399_Uniform_Engineer_Lt";
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
	class JMSST_troops_Agrade_troopBand_MI;
	class JMSST_troops_Agrade_gl_MI;
	
	class ZDN_399_Vest_Base: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest.paa"
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
	class ZDN_399_Vest_Command: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Command Vest (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest_Command.paa"
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
	class ZDN_399_Vest_EngFull: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Full) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_1.paa"
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
	class ZDN_399_Vest_EngStripe: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Stripe) (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_2.paa"
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
	class ZDN_399_Vest_Medic: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Medic Vest (Basic)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_Vest_Medical_1.paa"
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
		};
	};
	class ZDN_399_Vest_Fleet: JMSST_troops_Agrade_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Fleet Vest";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"JMSST_troops\vests\data\agrade_fleet_co.paa"
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
		};
	};

	class ZDN_399_Vest_Troop_Base: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (Basic) (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest.paa"
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
    class ZDN_399_Vest_Troop_Command: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Command Vest (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest_Command.paa"
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
	class ZDN_399_Vest_Troop_EngFull: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Full) (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_1.paa"
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
	class ZDN_399_Vest_Troop_EngStripe: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Stripe) (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_2.paa"
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
	class ZDN_399_Vest_Troop_Medic: JMSST_troops_Agrade_troop_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Medic Vest (Troop)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_Vest_Medical_1.paa"
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

	class ZDN_399_Vest_Troop_Two_Base: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (Basic) (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest.paa"
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
    class ZDN_399_Vest_Troop_Two_Command: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Command Vest (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest_Command.paa"
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
	class ZDN_399_Vest_Troop_Two_EngFull: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Full) (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_1.paa"
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
	class ZDN_399_Vest_Troop_Two_EngStripe: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Engineer Vest (Stripe) (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Eng_Vest_2.paa"
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
	class ZDN_399_Vest_Troop_Two_Medic: JMSST_troops_Agrade_troop2_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troop2_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Medic Vest (Troop 2)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop2.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_Vest_Medical_1.paa"
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
	
	class ZDN_399_Vest_Troop_Bandolier_Base: JMSST_troops_Agrade_troopBand_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troopBand_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (Basic) (Troop-B)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop_band.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest.paa"
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
    class ZDN_399_Vest_Troop_Bandolier_Command: JMSST_troops_Agrade_troopBand_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_troopBand_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Command Vest (Troop-B)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_troop_band.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest_Command.paa"
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

	class ZDN_399_Vest_Troop_Grenadier_Base: JMSST_troops_Agrade_gl_MI
	{
		author="JMax";
		_generalMacro="JMSST_troops_Agrade_gl_MI";
		scope=2;
		side=3;
		armor=2;
		displayName="[399th MI] Infantry Vest (Basic) (Grenadier)";
		picture="\JMSST_troops\data\ico\ico_v_Agrade_ca.paa";
		model="\JMSST_troops\vests\Agrade_gl.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\vest\ZDN_399_Vest.paa"
		};
		class ItemInfo: VestItem
		{
			uniformmodel="\JMSST_troops\vests\Agrade_gl.p3d";
			containerClass="Supply400";
			mass=2;
			maximumLoad=450;
			modelsides[]={6};
			hiddenSelections[]=
			{
				"Camo1"
			};
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

	// ########################################################
	// ######################## HELMET ########################
	// ########################################################	
	
	class JMSST_troops_M3_helmet;
	class JMSST_troops_M3air_helmet;
	class JMSST_troops_cap;

  	class ZDN_399_Helmet_Base: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Infantry Helmet";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Camo_M3_base_co.paa"
		};
	};
  	class ZDN_399_Helmet_Custom_One: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Infantry Helmet (Custom)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Custom_Helmet_Version_1.paa"
		};
	};
  	class ZDN_399_Helmet_Custom_Two: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Infantry Helmet (Custom)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Custom_Helmet_Version_2.paa"
		};
	};
  	class ZDN_399_Helmet_Custom_Three: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Infantry Helmet (Bug Park)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Custom_Helmet_Version_3.paa"
		};
	};
  	class ZDN_399_Helmet_Medic_Base: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Medical_Helmet.paa"
		};
	};
  	class ZDN_399_Helmet_Medic_Custom_One: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet (Custom)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Medical_Helmet_Custom.paa"
		};
	};
  	class ZDN_399_Helmet_Medic_Custom_Two: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Medical_Helmet_Custom_2.paa"
		};
	};
  	class ZDN_399_Helmet_Medic_Custom_Three: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Medic Helmet (Custom)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Medical_Helmet_Custom_3.paa"
		};
	};
  	class ZDN_399_Helmet_Engineer: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Engineer Helmet";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_3999_Engineer.paa"
		};
	};
  	class ZDN_399_Helmet_Engineer_Custom: JMSST_troops_M3_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Engineer Helmet (Alt)";
		picture="\JMSST_troops\data\ico\ico_h_M3.paa";
		model="\JMSST_troops\vests\M3helmet.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_3999_Eng_Custom_1.paa"
		};
	};

	class ZDN_399_Helmet_Fleet_Base: JMSST_troops_M3air_helmet
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Fleet Helmet (Airtight)";
		picture="\JMSST_troops\data\ico\ico_h_M3al.paa";
		model="JMSST_troops\helmets\M3helmet_air.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\JMSST_troops\helmets\data\M3_fleet_co.paa",
			"Uniforms\data\helmets\2bw_helm_black_co.paa"
		};
	};

  	class ZDN_399_Cap: JMSST_troops_cap
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Patrol Cap (Basic)";
		picture="\JMSST_troops\data\ico\ico_h_cap701.paa";
		model="JMSST_troops\helmets\MIcap.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_399_Cap_1.paa"
		};
	};
  	class ZDN_399_Medic_Cap: JMSST_troops_cap
	{
		author="JMax";
		weaponPoolAvailable = 1;
		scope=2;
		displayName="[399th MI] Patrol Cap (Medic) Cap (Basic)";
		picture="\JMSST_troops\data\ico\ico_h_cap701.paa";
		model="JMSST_troops\helmets\MIcap.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"Uniforms\data\helmets\ZDN_Medical_Cap.paa"
		};
	};
};
