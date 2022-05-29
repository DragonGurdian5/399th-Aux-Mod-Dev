class cfgAmmo
{
	class BulletBase;
	class BulletCore;
	class Paintball_Blank : BulletCore
	{
		cartridge = "FxCartridge_762";
		hit = 0;
		indirectHit = 0;
		aiAmmoUsageFlags = 64;
		typicalSpeed = 8200;
		caliber = 1.6;
		
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class Rubber_Bullet : BulletCore
	{
		cartridge = "FxCartridge_762";
		hit = 1;
		indirectHit = 0;
		aiAmmoUsageFlags = 64;
		typicalSpeed = 8200;
		caliber = 1.6;
		
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class ZDN_762x51mm_AP_Ammo: BulletCore
	{
		cartridge = "FxCartridge_762";
		hit = 16.6;
		indirectHit = 0;
		aiAmmoUsageFlags = 64 + 128;
		typicalSpeed = 800;
		caliber = 1.6;
		
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
	class ZDN_9mm_Caseless_Ammo: BulletCore
	{
		cartridge = "FxCartridge_65_caseless";
		hit = 5;
		indirectHit = 0;
		aiAmmoUsageFlags = 64;
		typicalSpeed = 380;
		caliber = 1.2;
		
		class CamShakeFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 0;
			duration = 0;
			frequency = 0;
			distance = 0;
		};
	};
};