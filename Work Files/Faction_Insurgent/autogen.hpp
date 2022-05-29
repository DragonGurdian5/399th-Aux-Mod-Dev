class CfgFactionClasses {
    class ZDN_O_IS {
        displayName = "Insurrectionists";
        side = 2;
        flag = "\a3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        icon = "\a3\Data_F_Exp\Flags\flag_SYND_CO.paa";
        priority = 0;
    };
};

class CfgGroups {
    class Indep {

        class ZDN_O_IS {
            name = "Insurrectionists";

            class Infantry {
                name = "Infantry";

                class zdn_i_is_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Officer_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Shotgun_01";
                    };
                    class Unit5 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Medic_01";
                    };
                    class Unit6 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit7 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Pistol_01";
                    };
                };

                class zdn_i_is_infantry_fire_team {
                    name = "Fire Team";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Officer_01";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Shotgun_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit3 {
                        position[] = {-5,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                };

                class zdn_i_is_infantry_marksmen_team {
                    name = "Marksmen Team";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Medic_01";
                    };
                };

                class zdn_i_is_infantry_patrol {
                    name = "Patrol";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Pistol_01";
                    };
                };

                class zdn_i_is_infantry_ied_team {
                    name = "IED Team";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Explosive_Specialist_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Explosive_Specialist_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Shotgun_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

                class zdn_i_is_motorized_truck_patrol {
                    name = "Truck Patrol";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Truck_01";
                    };
                    class Unit1 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Officer_01";
                    };
                    class Unit4 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Medic_01";
                    };
                    class Unit6 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Shotgun_01";
                    };
                };

                class zdn_i_is_motorized_qrf {
                    name = "QRF";
                    side = 2;
                    faction = "ZDN_O_IS";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_IS_Van_Transport_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Officer_01";
                    };
                    class Unit2 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Medic_01";
                    };
                    class Unit6 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Marksman_01";
                    };
                    class Unit7 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Pistol_01";
                    };
                    class Unit8 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_IS_Insurgent_Explosive_Specialist_01";
                    };
                };

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class I_soldier_F;
    class I_soldier_F_OCimport_01 : I_soldier_F { scope = 0; class EventHandlers; };
    class I_soldier_F_OCimport_02 : I_soldier_F_OCimport_01 { class EventHandlers; };

    class I_medic_F;
    class I_medic_F_OCimport_01 : I_medic_F { scope = 0; class EventHandlers; };
    class I_medic_F_OCimport_02 : I_medic_F_OCimport_01 { class EventHandlers; };

    class I_officer_F;
    class I_officer_F_OCimport_01 : I_officer_F { scope = 0; class EventHandlers; };
    class I_officer_F_OCimport_02 : I_officer_F_OCimport_01 { class EventHandlers; };

    class I_L_Looter_Pistol_F;
    class I_L_Looter_Pistol_F_OCimport_01 : I_L_Looter_Pistol_F { scope = 0; class EventHandlers; };
    class I_L_Looter_Pistol_F_OCimport_02 : I_L_Looter_Pistol_F_OCimport_01 { class EventHandlers; };

    class I_Soldier_M_F;
    class I_Soldier_M_F_OCimport_01 : I_Soldier_M_F { scope = 0; class EventHandlers; };
    class I_Soldier_M_F_OCimport_02 : I_Soldier_M_F_OCimport_01 { class EventHandlers; };

    class I_C_Soldier_Bandit_8_F;
    class I_C_Soldier_Bandit_8_F_OCimport_01 : I_C_Soldier_Bandit_8_F { scope = 0; class EventHandlers; };
    class I_C_Soldier_Bandit_8_F_OCimport_02 : I_C_Soldier_Bandit_8_F_OCimport_01 { class EventHandlers; };

    class I_C_Van_01_transport_F;
    class I_C_Van_01_transport_F_OCimport_01 : I_C_Van_01_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Van_01_transport_F_OCimport_02 : I_C_Van_01_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_L1;
            class CargoTurret_L2;
            class CargoTurret_L3;
            class CargoTurret_L4;
            class CargoTurret_L5;
            class CargoTurret_R1;
            class CargoTurret_R2;
            class CargoTurret_R3;
            class CargoTurret_R4;
            class CargoTurret_R5;
        };
    };

    class I_C_Van_02_transport_F;
    class I_C_Van_02_transport_F_OCimport_01 : I_C_Van_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class I_C_Van_02_transport_F_OCimport_02 : I_C_Van_02_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class I_G_Offroad_01_armed_F;
    class I_G_Offroad_01_armed_F_OCimport_01 : I_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Offroad_01_armed_F_OCimport_02 : I_G_Offroad_01_armed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
        };
    };

    class I_G_Offroad_01_F;
    class I_G_Offroad_01_F_OCimport_01 : I_G_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Offroad_01_F_OCimport_02 : I_G_Offroad_01_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };

    class I_G_Offroad_01_AT_F;
    class I_G_Offroad_01_AT_F_OCimport_01 : I_G_Offroad_01_AT_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Offroad_01_AT_F_OCimport_02 : I_G_Offroad_01_AT_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class AT_Turret;
        };
    };

    class I_G_Van_01_fuel_F;
    class I_G_Van_01_fuel_F_OCimport_01 : I_G_Van_01_fuel_F { scope = 0; class EventHandlers; };
    class I_G_Van_01_fuel_F_OCimport_02 : I_G_Van_01_fuel_F_OCimport_01 { scope = 0; class EventHandlers; };


    class ZDN_I_IS_Insurgent_Rifleman_01 : I_soldier_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Rifleman)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_IG_Guerilla3_1";

        linkedItems[] = {"V_HarnessO_brn","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_HarnessO_brn","H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"U_IG_Guerilla3_1",{{"FirstAidKit",1},{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"V_HarnessO_brn",{{"JMSST_75Rnd_762x51_MoritaMag",8,75}}},{},"H_Bandanna_gry","G_Shades_Red",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Shotgun_01 : ZDN_I_IS_Insurgent_Rifleman_01 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Shotgun)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_BG_Guerilla3_1";

        linkedItems[] = {"H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Bandanna_gry","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"sgun_HunterShotgun_01_F"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_F"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};

        ALiVE_orbatCreator_loadout[] = {{"sgun_HunterShotgun_01_F","","","",{"2Rnd_12Gauge_Pellets",2},{},""},{},{},{"U_BG_Guerilla3_1",{{"FirstAidKit",1},{"2Rnd_12Gauge_Pellets",5,2},{"2Rnd_12Gauge_Slug",2,2}}},{},{},"H_Bandanna_gry","G_Shades_Blue",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Medic_01 : I_medic_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Medic)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_BG_Guerilla3_1";

        linkedItems[] = {"H_Bandanna_surfer","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Bandanna_surfer","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1CRifle"};
        respawnWeapons[] = {"JMSST_mk1CRifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        backpack = "B_CivilianBackpack_01_Sport_Red_F";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1CRifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"U_BG_Guerilla3_1",{{"FirstAidKit",1},{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{},{"B_CivilianBackpack_01_Sport_Red_F",{{"Medikit",1},{"FirstAidKit",20}}},"H_Bandanna_surfer","G_Respirator_blue_F",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Officer_01 : I_officer_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Officer)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_NATO_casual"};

        uniformClass = "U_BG_Guerilla2_3";

        linkedItems[] = {"V_Pocketed_coyote_F","H_Cap_brn_SPECOPS","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Pocketed_coyote_F","H_Cap_brn_SPECOPS","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1CRifle"};
        respawnWeapons[] = {"JMSST_mk1CRifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        backpack = "B_CivilianBackpack_01_Everyday_Vrana_F";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1CRifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"U_BG_Guerilla2_3",{{"JMSST_75Rnd_762x51_MoritaMag",1,75}}},{"V_Pocketed_coyote_F",{{"Chemlight_blue",3,1},{"SmokeShell",3,1},{"MiniGrenade",3,1},{"I_E_IR_Grenade",2,1}}},{"B_CivilianBackpack_01_Everyday_Vrana_F",{{"JMSST_75Rnd_762x51_MoritaMag",7,75}}},"H_Cap_brn_SPECOPS","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Ringleader_01 : I_officer_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Ringleader)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_NATO_casual"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"V_Pocketed_olive_F","H_Hat_Safari_olive_F","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Pocketed_olive_F","H_Hat_Safari_olive_F","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"srifle_DMR_06_hunter_F"};
        respawnWeapons[] = {"srifle_DMR_06_hunter_F"};

        magazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};
        respawnMagazines[] = {"10Rnd_Mk14_762x51_Mag","10Rnd_Mk14_762x51_Mag"};

        backpack = "B_Messenger_Olive_F";

        ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_06_hunter_F","","","optic_ACO_grn",{"10Rnd_Mk14_762x51_Mag",10},{},"bipod_02_F_blk"},{},{},{"U_BG_Guerrilla_6_1",{{"20Rnd_762x51_Mag",2,20}}},{"V_Pocketed_olive_F",{{"FirstAidKit",3},{"SmokeShell",4,1},{"MiniGrenade",4,1}}},{"B_Messenger_Olive_F",{{"20Rnd_762x51_Mag",11,20}}},"H_Hat_Safari_olive_F","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Pistol_01 : I_L_Looter_Pistol_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Pistol)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Enoch","LanguagePOL_F","G_GUERIL_default"};

        uniformClass = "U_I_C_Soldier_Bandit_3_F";

        linkedItems[] = {"H_Cap_tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"H_Cap_tan","ItemMap","ItemRadio","ItemCompass","ItemWatch"};

        weapons[] = {"hgun_Pistol_heavy_01_F"};
        respawnWeapons[] = {"hgun_Pistol_heavy_01_F"};

        magazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};
        respawnMagazines[] = {"11Rnd_45ACP_Mag","11Rnd_45ACP_Mag"};

        backpack = "B_Messenger_Gray_F";

        ALiVE_orbatCreator_loadout[] = {{},{},{"hgun_Pistol_heavy_01_F","","","optic_MRD",{"11Rnd_45ACP_Mag",11},{},""},{"U_I_C_Soldier_Bandit_3_F",{{"FirstAidKit",1},{"11Rnd_45ACP_Mag",3,11}}},{},{"B_Messenger_Gray_F",{{"FirstAidKit",2},{"11Rnd_45ACP_Mag",15,11},{"MiniGrenade",2,1}}},"H_Cap_tan","G_Bandanna_khk",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Marksman_01 : I_Soldier_M_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Marksman)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_HAF_default"};

        uniformClass = "U_I_L_Uniform_01_tshirt_black_F";

        linkedItems[] = {"V_Pocketed_black_F","H_Bandanna_camo","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_Pocketed_black_F","H_Bandanna_camo","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1dmrRifle"};
        respawnWeapons[] = {"JMSST_mk1dmrRifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        backpack = "B_LegStrapBag_black_F";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1dmrRifle","","","JMSST_w_scope_mk1",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"U_I_L_Uniform_01_tshirt_black_F",{{"FirstAidKit",2},{"MineDetector",1}}},{"V_Pocketed_black_F",{{"SmokeShell",2,1},{"SmokeShellRed",1,1},{"MiniGrenade",3,1},{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"B_LegStrapBag_black_F",{{"JMSST_75Rnd_762x51_MoritaMag",4,75}}},"H_Bandanna_camo","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Insurgent_Explosive_Specialist_01 : I_C_Soldier_Bandit_8_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Insurgent (Explosive Specialist)";
        side = 2;
        faction = "ZDN_O_IS";

        identityTypes[] = {"Head_Tanoan","LanguageFRE_F"};

        uniformClass = "U_I_C_Soldier_Bandit_4_F";

        linkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Bandanna_cbr","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"V_CarrierRigKBT_01_EAF_F","H_Bandanna_cbr","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"sgun_HunterShotgun_01_sawedoff_F"};
        respawnWeapons[] = {"sgun_HunterShotgun_01_sawedoff_F"};

        magazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};
        respawnMagazines[] = {"2Rnd_12Gauge_Pellets","2Rnd_12Gauge_Pellets"};

        backpack = "B_CivilianBackpack_01_Sport_Green_F";

        ALiVE_orbatCreator_loadout[] = {{"sgun_HunterShotgun_01_sawedoff_F","","","",{"2Rnd_12Gauge_Pellets",2},{},""},{},{},{"U_I_C_Soldier_Bandit_4_F",{{"2Rnd_12Gauge_Pellets",3,2},{"2Rnd_12Gauge_Slug",1,2}}},{"V_CarrierRigKBT_01_EAF_F",{{"TrainingMine_Mag",2,1},{"2Rnd_12Gauge_Pellets",4,2},{"2Rnd_12Gauge_Slug",1,2}}},{"B_CivilianBackpack_01_Sport_Green_F",{{"IEDLandBig_Remote_Mag",1,1},{"IEDLandSmall_Remote_Mag",2,1},{"IEDUrbanSmall_Remote_Mag",2,1}}},"H_Bandanna_cbr","G_EyeProtectors_Earpiece_F",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_IS_Truck_01 : I_C_Van_01_transport_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_C_Soldier_Bandit_7_F";

        class Turrets : Turrets {
            class CargoTurret_L1 : CargoTurret_L1 { gunnerType = ""; };
            class CargoTurret_L2 : CargoTurret_L2 { gunnerType = ""; };
            class CargoTurret_L3 : CargoTurret_L3 { gunnerType = ""; };
            class CargoTurret_L4 : CargoTurret_L4 { gunnerType = ""; };
            class CargoTurret_L5 : CargoTurret_L5 { gunnerType = ""; };
            class CargoTurret_R1 : CargoTurret_R1 { gunnerType = ""; };
            class CargoTurret_R2 : CargoTurret_R2 { gunnerType = ""; };
            class CargoTurret_R3 : CargoTurret_R3 { gunnerType = ""; };
            class CargoTurret_R4 : CargoTurret_R4 { gunnerType = ""; };
            class CargoTurret_R5 : CargoTurret_R5 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa'];_unit setObjectTextureGlobal [1,'\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa'];_unit setObjectTextureGlobal [2,'\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Olive";

    };

    class ZDN_I_IS_Van_Transport_01 : I_C_Van_02_transport_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van (Transport)";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_C_Soldier_Bandit_7_F";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Orange\Van_02\Data\van_body_Green_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\soft_f_orange\van_02\data\van_wheel_transport_co.paa'];_unit setObjectTextureGlobal [2,'\a3\soft_f_orange\van_02\data\van_glass_transport_CA.paa'];_unit setObjectTextureGlobal [3,'\a3\Soft_F_Orange\Van_02\Data\van_body_Green_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class ZDN_I_IS_Offroad_HMG_01 : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (HMG)";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_G_Soldier_F";

        class Turrets : Turrets {
            class M2_Turret : M2_Turret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class ZDN_I_IS_Offroad_01 : I_G_Offroad_01_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_G_Soldier_F";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class ZDN_I_IS_Offroad_AT_01 : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_G_Soldier_F";

        class Turrets : Turrets {
            class AT_Turret : AT_Turret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];_unit setObjectTextureGlobal [1,'\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Green";

    };

    class ZDN_I_IS_Fuel_Truck_01 : I_G_Van_01_fuel_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fuel Truck";
        side = 2;
        faction = "ZDN_O_IS";
        crew = "I_G_Soldier_F";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;_unit setObjectTextureGlobal [0,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa'];_unit setObjectTextureGlobal [1,'\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa'];};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_texture = "Guerilla_01";

    };

};