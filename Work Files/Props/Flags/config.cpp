class CfgPatches
{
	class ZDN_Props_flags
	{
		requiredAddons[]=
		{
			"A3_Structures_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Flag_ZDN_MI_F",
			"Flag_ZDN_UOMF_F,",
			"Flag_ZDN_Corp_F",
			"Flag_ZDN_MILF_F",
			"Banner_ZDN_MI_F",
			"Banner_ZDN_UOMF_F",
			"Banner_ZDN_Corp_F",
			"Banner_ZDN_MILF_F"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Flag_Blue_F;
	
	class Flag_ZDN_MI_F: Flag_Blue_F
	{
		author="DragonGurdian5";
		_generalMacro="Flag_ZDN_MI_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Flag (399th MI)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'Props\Flags\Flag_ZDN_MI399_F.paa'";
		};
	};
	class Flag_ZDN_UOMF_F: Flag_Blue_F
	{
		author="DragonGurdian5";
		_generalMacro="Flag_ZDN_UOMF_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Flag (UOMF)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'Props\Flags\Flag_ZDN_UOMF_F.paa'";
		};
	};
	class Flag_ZDN_Corp_F: Flag_Blue_F
	{
		author="DragonGurdian5";
		_generalMacro="Flag_ZDN_Corp_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Flag (HMC)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'Props\Flags\Flag_ZDN_Corp_F.paa'";
		};
	};
	class Flag_ZDN_MILF_F: Flag_Blue_F
	{
		author="DragonGurdian5";
		_generalMacro="Flag_ZDN_MILF_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Flag (MILF)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		class EventHandlers
		{
			init="(_this select 0) setFlagTexture 'Props\Flags\Flag_ZDN_MILF_F.paa'";
		};
	};

	class Banner_01_base_F;
	class Banner_ZDN_MI_F: Banner_01_base_F
	{
		author="DragonGurdian5";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Banner_ZDN_MI_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Banner (399th MI)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		hiddenSelectionsTextures[]=
		{
			"Props\Flags\Flag_ZDN_MI399_F.paa"
		};
	};
	class Banner_ZDN_UOMF_F: Banner_01_base_F
	{
		author="DragonGurdian5";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Banner_ZDN_UOMF_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Banner (UOMF)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		hiddenSelectionsTextures[]=
		{
			"Props\Flags\Flag_ZDN_UOMF_F.paa"
		};
	};
	class Banner_ZDN_Corp_F: Banner_01_base_F
	{
		author="DragonGurdian5";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Banner_ZDN_Corp_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Banner (HMC)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		hiddenSelectionsTextures[]=
		{
			"Props\Flags\Flag_ZDN_Corp_F.paa"
		};
	};
	class Banner_ZDN_MILF_F: Banner_01_base_F
	{
		author="DragonGurdian5";
		class SimpleObject
		{
			eden=0;
			animate[]={};
			hide[]={};
			verticalOffset=0.46900001;
			verticalOffsetWorld=0;
			init="''";
		};
		_generalMacro="Banner_ZDN_MILF_F";
		scope=2;
		scopeCurator=2;
		accuracy = 1000;
		displayName="Banner (MILF)";
		editorCategory="ZDN_EditorCategory_Objects";
		editorSubcategory="ZDN_EditorSubcategory_Obj_flags";
		hiddenSelectionsTextures[]=
		{
			"Props\Flags\Flag_ZDN_MILF_F.paa"
		};
	};
};
