class CfgPatches
{
	class fed_vehicles
	{
		units[]=
		{
			"ZDN_Y32_Infantry_Federation",
			"ZDN_Y32_Vehicle_Federation",
			"ZDN_UAV_Federation",
			"ZDN_MBT_Arty_Federation",
			"ZDN_MBT_Federation_Cannon",
			"ZDN_MBT_Federation",
			"ZDN_Badger_Federation",
			"ZDN_MATV_Federation",
			"ZDN_MATV_Federation_HMG",
			"ZDN_MATV_Federation_GMG",
			"ZDN_V44XB_Armed_Federation",
			"ZDN_V44XB_Vehicle_Federation",
			"ZDN_V44XB_Infantry_Federation",

		};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={};
		author="Zaigan";
		name="399th Vehicle Asset Pack";
	};
};
class CfgVehicles
{
	class O_T_VTOL_02_infantry_dynamicLoadout_F;
	class O_T_VTOL_02_vehicle_dynamicLoadout_F;
	class B_T_VTOL_01_infantry_F;
	class B_T_VTOL_01_vehicle_F;
	class B_T_VTOL_01_armed_F;
	class B_MRAP_01_gmg_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_F;
	class B_APC_Wheeled_01_cannon_F;
	class B_MBT_01_mlrs_F;
	class B_MBT_01_cannon_F;
	class B_MBT_01_arty_F;
	class B_UAV_02_dynamicLoadout_F;

	class ZDN_Y32_Infantry_Federation: O_T_VTOL_02_infantry_dynamicLoadout_F
	{
		_generalMacro="ZDN_Y32_Infantry_Federation";
		side=1;
		faction="federation";
		displayName="Y-32 'Condor' Transport (Infantry)";
		class TextureSources
		{
			class Black
			{
				displayName="Y-32 'Condor' Transport (Infantry)";
				author="Zaigan";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"Vehicles\data\VTOL_02_EXT01_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT02_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT03_L_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT03_R_fed_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class ZDN_Y32_Vehicle_Federation: O_T_VTOL_02_vehicle_dynamicLoadout_F
	{
		_generalMacro="ZDN_Y32_Vehicle_Federation";
		side=1;
		faction="federation";
		displayName="Y-32 'Condor' Transport (Vehicle)";
		class TextureSources
		{
			class Black
			{
				displayName="Y-32 'Condor' Transport (Vehicle)";
				author="Zaigan";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"Vehicles\data\VTOL_02_EXT01_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT02_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT03_L_fed_CO.paa",
					"Vehicles\data\VTOL_02_EXT03_R_fed_CO.paa"
				};
			};
		};
		textureList[]=
		{
			"Black",
			1
		};
	};

	class ZDN_V44XB_Infantry_Federation: B_T_VTOL_01_infantry_F
	{
		side=1;
		faction="Federation";
		displayName="V44 'Albatross' (Infantry)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\VTOL_01_EXT01_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT02_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT03_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT04_fed_CO.paa"
		};
	};
	class ZDN_V44XB_Vehicle_Federation: B_T_VTOL_01_vehicle_F
	{
		side=1;
		faction="Federation";
		displayName="V44 'Albatross' (Vehicle)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\VTOL_01_EXT01_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT02_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT03_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT04_fed_CO.paa"
		};
	};
	class ZDN_V44XB_Armed_Federation: B_T_VTOL_01_armed_F
	{
		side=1;
		faction="Federation";
		displayName="V44 'Albatross' (Gunship)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\VTOL_01_EXT01_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT02_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT03_fed_CO.paa",
			"Vehicles\data\VTOL_01_EXT04_fed_CO.paa"
		};
	};

	class ZDN_MATV_Federation_GMG: B_MRAP_01_gmg_F
	{
		_generalMacro="MATV_Federation_GMG";
		side=1;
		faction="Federation";
		displayName="'Jaguar' M-ATV (GMG)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MRAP_Fed_base.paa",
			"Vehicles\data\MRAP_Fed_adds.paa",
			"Vehicles\data\Turret_Fed.paa"
		};
	};
	class ZDN_MATV_Federation_HMG: B_MRAP_01_hmg_F
	{
		_generalMacro="MATV_Federation_HMG";
		side=1;
		faction="Federation";
		displayName="'Jaguar' M-ATV (HMG)";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MRAP_Fed_base.paa",
			"Vehicles\data\MRAP_Fed_adds.paa",
			"Vehicles\data\Turret_Fed.paa"
		};
	};
	class ZDN_MATV_Federation: B_MRAP_01_F
	{
		_generalMacro="MATV_Federation";
		side=1;
		faction="Federation";
		displayName="'Jaguar' M-ATV";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MRAP_Fed_base.paa",
			"Vehicles\data\MRAP_Fed_adds.paa"
		};
	};

	class ZDN_Badger_Federation: B_APC_Wheeled_01_cannon_F
	{
		_generalMacro="Badger_APC_Federation";
		side=1;
		faction="Federation";
		displayName="'Opossum' APC";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\APC_Wheeled_Fed_base_CO.paa",
			"Vehicles\data\APC_Wheeled_Fed_adds_CO.paa",
			"Vehicles\data\APC_Wheeled_Fed_tows_CO.paa"
		};
	};

	class ZDN_MLRS_Federation: B_MBT_01_mlrs_F
	{
		_generalMacro="MBT_Federation";
		side=1;
		faction="Federation";
		displayName="'Tarantula' MLRS";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MBT_Fed_body_CO.paa",
			"Vehicles\data\MBT_Fed_MLRS_co.paa"
		};
	};
	class ZDN_MBT_Federation_Cannon: B_MBT_01_cannon_F
	{
		_generalMacro="MBT_Federation_Cannon";
		side=1;
		faction="Federation";
		displayName="'Bigfoot' Main Battle Tank";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MBT_Fed_body_CO.paa",
			"Vehicles\data\MBT_Fed_tow_CO.paa"
		};
	};
	class ZDN_MBT_Arty_Federation: B_MBT_01_arty_F
	{
		_generalMacro="MBT_Arty_Federation";
		side=1;
		faction="Federation";
		displayName="'Aardvark' Artillery";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\MBT_Fed_body_CO.paa",
			"Vehicles\data\MBT_Fed_scorcher_CO.paa",
			"Vehicles\data\Turret_Fed.paa"
		};
	};

	class ZDN_UAV_Federation: B_UAV_02_dynamicLoadout_F
	{
		_generalMacro="UAV_Federation";
		side=1;
		faction="Federation";
		displayName="'Vulture' CAS UAV";
		hiddenSelectionsTextures[]=
		{
			"Vehicles\data\UAV_Fed_CO.paa"
		};
	};
};
