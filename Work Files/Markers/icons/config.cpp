class CfgPatches
{
    class SST_Markers
    {
        author="DragonGurdian5, Zackary29, and Krevan";
		name="399 Auxiliary [SST]";
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Functions_F",
			"A3_UiFonts_F"
		};
        units[] = {};
        weapons[] = {};
        requiredVersion=0.1;
    };
};

class CfgMarkerClasses
{
    class SST_Map_Markers
	{
		displayName="SST Factions";
    }
};

class CfgMarkers
{
    class flag_NATO;
	class flag;
    class UCF: flag_NATO
    {
        name="[UCF] Federal Eagle";
        icon="Markers\icons\markers\FL.paa";
        texture="Markers\icons\markers\FL.paa";
        size=40;
        shadow = 0;
        scope = 2;
        scopeCurator = 2;
		showEditorMarkerColor=0;
        markerClass = "SST_Map_Markers";
    };
    class UCF_Med: flag_NATO
    {
        name="[UCF] Medical Corps";
        icon="Markers\icons\markers\Medical_MI.paa";
        texture="Markers\icons\markers\Medical_MI.paa";
        size=40;
        shadow = 0;
        scope = 2;
        scopeCurator = 2;
		showEditorMarkerColor=0;
        markerClass = "SST_Map_Markers";
    };
        class UCF_Intel: flag_NATO
	{
		name="[UCF] Intel";
		icon="Markers\icons\markers\Intel.paa";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
        class UCF_82: flag_NATO
	{
		name="[UCF] 82nd Mobile Infantry";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
    class UCF_142: flag_NATO
	{
		name="[UCF] 142nd Mobile Infantry";
		icon="Markers\icons\markers\142.paa";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
        class UCF_183: flag_NATO
	{
		name="[UCF] 183rd Mobile Infantry";
		icon="Markers\icons\markers\183rd.paa";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
        class UCF_399: flag_NATO
	{
		name="[UCF] 399th Zaigan's Zealots";
		icon="Markers\icons\markers\399.paa";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
        class UCF_479: flag
	{
		name="[UCF] 479th Mobile Infantry";
		icon="Markers\icons\markers\479.paa";
		size=32;
		scope=2;
		scopeCurator = 2;
		shadow=0;
		markerClass="SST_Map_Markers";
	};
};