#include "cfgAmmo.hpp"

class CfgPatches
{
	class MoritaMag_training // replace this with the mag classname, append _training
	{
		units[]				= {};
		weapons[]=  // classname from below in cfgWeapons
		{
			"JMSST_mk1Rifle",
			"JMSST_mk1CRifle"
			"JMSST_mk1dmrRifle"
		}; 
		magazines[]=  // new classnames down below from cfgMagazines
		{
			"ZDN_75rnd_762x51_MoritaMag_Training",
			"ZDN_75rnd_762x51_MoritaMag_Rubber",
			"ZDN_75rnd_762x51_MoritaMag_Live",
			"ZDN_30rnd_762x51_MoritaMag_Live_AP"
		};
		requiredVersion		= 0.1;
		requiredAddons[]	= {"A3_Weapons_F"};
		name				= "399th MI Morita Magazines"; // name of this addon
		author				= "DragonGurdian5";
	};
};

class CfgMagazines
{
	class JMSST_75Rnd_762x51_MoritaMag; // you can get this by running "copyToClipboard currentMagazine player"
	class JMSST_100Rnd_762x51_MoritaMag;

	class ZDN_75rnd_762x51_MoritaMag_Training: JMSST_75Rnd_762x51_MoritaMag
	{
		scope				= 2;
		author				= "DragonGurdian5";
		displayname			= "75rnd 7.62x51mm (Blanks)";
		ammo = "Paintball_Blank";
		count = "75"; // change to the amount of bullets you want mag to have
	};
	class ZDN_75rnd_762x51_MoritaMag_Rubber: JMSST_75Rnd_762x51_MoritaMag
	{
		scope				= 2;
		author				= "DragonGurdian5";
		displayname			= "75rnd 7.62x51mm (Rubber)";
		ammo = "Rubber_Bullet";
		count = "75"; // change to the amount of bullets you want mag to have
	};
	class ZDN_75rnd_762x51_MoritaMag_Live: JMSST_75Rnd_762x51_MoritaMag
	{
		scope				= 2;
		author				= "DragonGurdian5";
		displayname			= "75rnd 7.62x51mm (Live)";
		ammo = "JMSST_762x51_Ammo";
		count = "75"; // change to the amount of bullets you want mag to have
	};
	class ZDN_30rnd_762x51_MoritaMag_Live_AP: JMSST_75Rnd_762x51_MoritaMag
	{
		scope				= 2;
		author				= "DragonGurdian5";
		displayname			= "30rnd 7.62x51mm (Live) (AP)";
		ammo = "ZDN_762x51mm_AP_Ammo";
		count = "30"; // change to the amount of bullets you want mag to have
	};
};

class cfgWeapons
{
	class JMSST_Rifle_Base_F_Base; // you can find this by equipping the gun you want to add the magazine to into your hands, then running this: "configname (inheritsFrom (configfile >> "cfgweapons" >> (currentWeapon player)));" and pasting the debug result here
	class JMSST_mk1Rifle: JMSST_Rifle_Base_F_Base // the gun classname that you want to add the magazine to, followed by the class you got above after the colon. You can run: "_weapon = copyToClipboard currentWeapon player" whilst holding it in your hands to get this
	{
		scope = 2;
		magazines[] = {
			"ZDN_75rnd_762x51_MoritaMag_Training",
			"ZDN_75rnd_762x51_MoritaMag_Rubber",
			"ZDN_75rnd_762x51_MoritaMag_Live",
		};
	};
	class JMSST_mk1CRifle: JMSST_Rifle_Base_F_Base
	{
		scope = 2;
		magazines[] = {
			"ZDN_75rnd_762x51_MoritaMag_Training",
			"ZDN_75rnd_762x51_MoritaMag_Rubber",
			"ZDN_75rnd_762x51_MoritaMag_Live",
		};
	};
	class JMSST_mk1dmrRifle: JMSST_Rifle_Base_F_Base
	{
		scope = 2;
		magazines[] = {
			"ZDN_75rnd_762x51_MoritaMag_Training",
			"ZDN_75rnd_762x51_MoritaMag_Rubber",
			"ZDN_75rnd_762x51_MoritaMag_Live",
			"ZDN_30rnd_762x51_MoritaMag_Live_AP"
		};
	};
};

class CfgFunctions
{
    class example_mag
    {
        class functions
        {
            class rubberBullets
            {
				postInit = 1;
                file = "TrainingMag\Addons\functions\fn_rubberBullets.sqf";
            };
        };
    };
};
