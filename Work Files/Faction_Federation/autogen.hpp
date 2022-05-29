class CfgFactionClasses {
    class Federation {
        displayName = "399th Mobile Infantry";
        side = 1;
        flag = "";
        icon = "";
        priority = 1;
    };
};

class CfgGroups {
    class WEST {
        class Federation {
            name = "399th Mobile Infantry";

            class Infantry {
                name = "Infantry";

                class zdn_b_ucfmi_infantry_sentry_team {
                    name = "Sentry Team";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                };

                class zdn_b_ucfmi_infantry_fireteam {
                    name = "Fireteam";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Autorifleman_01";
                    };
                };

                class zdn_b_ucfmi_infantry_squad {
                    name = "Squad";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Squad_Lead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Medic_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_RTO_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_AT_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Autorifleman_01";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Marksman_01";
                    };
                };

                class zdn_b_ucfmi_infantry_sniper_team {
                    name = "Sniper Team";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_RTO_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Marksman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Marksman_01";
                    };
                };

                class zdn_b_ucfmi_infantry_command_team {
                    name = "Command Team";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Squad_Lead_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_RTO_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Medic_01";
                    };
                };

            };

            class Motorized {
                name = "Motorized";

                class zdn_b_ucfmi_motorized_patrol {
                    name = "Patrol";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_GK_100k_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Squad_Lead_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_RTO_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Medic_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_AT_01";
                    };
                };

                class zdn_b_ucfmi_motorized_qrf {
                    name = "QRF";
                    side = 1;
                    faction = "federation";
                    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_GK_2M_Transport_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "SERGEANT";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Squad_Lead_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Medic_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_RTO_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Marksman_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "CORPORAL";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Team_Lead_01";
                    };
                    class Unit9 {
                        position[] = {25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Autorifleman_01";
                    };
                    class Unit10 {
                        position[] = {-25,-25,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_AT_01";
                    };
                    class Unit11 {
                        position[] = {30,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Engineer_01";
                    };
                    class Unit12 {
                        position[] = {-30,-30,0};
                        rank = "PRIVATE";
                        side = 1;
                        vehicle = "ZDN_B_UCFMI_Rifleman_01";
                    };
                };

            };

        };

    };
};


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class B_Soldier_F;
    class B_Soldier_F_OCimport_01 : B_Soldier_F { scope = 0; class EventHandlers; };
    class B_Soldier_F_OCimport_02 : B_Soldier_F_OCimport_01 { class EventHandlers; };

    class B_soldier_M_F;
    class B_soldier_M_F_OCimport_01 : B_soldier_M_F { scope = 0; class EventHandlers; };
    class B_soldier_M_F_OCimport_02 : B_soldier_M_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_TL_F;
    class B_Soldier_TL_F_OCimport_01 : B_Soldier_TL_F { scope = 0; class EventHandlers; };
    class B_Soldier_TL_F_OCimport_02 : B_Soldier_TL_F_OCimport_01 { class EventHandlers; };

    class B_medic_F;
    class B_medic_F_OCimport_01 : B_medic_F { scope = 0; class EventHandlers; };
    class B_medic_F_OCimport_02 : B_medic_F_OCimport_01 { class EventHandlers; };

    class B_Soldier_SL_F;
    class B_Soldier_SL_F_OCimport_01 : B_Soldier_SL_F { scope = 0; class EventHandlers; };
    class B_Soldier_SL_F_OCimport_02 : B_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class B_soldier_UAV_06_F;
    class B_soldier_UAV_06_F_OCimport_01 : B_soldier_UAV_06_F { scope = 0; class EventHandlers; };
    class B_soldier_UAV_06_F_OCimport_02 : B_soldier_UAV_06_F_OCimport_01 { class EventHandlers; };

    class B_soldier_AR_F;
    class B_soldier_AR_F_OCimport_01 : B_soldier_AR_F { scope = 0; class EventHandlers; };
    class B_soldier_AR_F_OCimport_02 : B_soldier_AR_F_OCimport_01 { class EventHandlers; };

    class B_soldier_LAT_F;
    class B_soldier_LAT_F_OCimport_01 : B_soldier_LAT_F { scope = 0; class EventHandlers; };
    class B_soldier_LAT_F_OCimport_02 : B_soldier_LAT_F_OCimport_01 { class EventHandlers; };

    class B_engineer_F;
    class B_engineer_F_OCimport_01 : B_engineer_F { scope = 0; class EventHandlers; };
    class B_engineer_F_OCimport_02 : B_engineer_F_OCimport_01 { class EventHandlers; };

    class JMSST_vg_UCFlsv_01_unarmed_F;
    class JMSST_vg_UCFlsv_01_unarmed_F_OCimport_01 : JMSST_vg_UCFlsv_01_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class JMSST_vg_UCFlsv_01_unarmed_F_OCimport_02 : JMSST_vg_UCFlsv_01_unarmed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_01;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
        };
    };

    class JMSST_vg_UCFtruck_Truck_03_transport_F;
    class JMSST_vg_UCFtruck_Truck_03_transport_F_OCimport_01 : JMSST_vg_UCFtruck_Truck_03_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class JMSST_vg_UCFtruck_Truck_03_transport_F_OCimport_02 : JMSST_vg_UCFtruck_Truck_03_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };


    class ZDN_B_UCFMI_Rifleman_01 : B_Soldier_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10}}},{"ZDN_399_Vest_Troop_Base",{{"FirstAidKit",2},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{},"ZDN_399_Helmet_Base","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Marksman_01 : B_soldier_M_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1dmrRifle"};
        respawnWeapons[] = {"JMSST_mk1dmrRifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1dmrRifle","","","JMSST_w_scope_mk1",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{"ZDN_399_Vest_Troop_Base",{{"FirstAidKit",2},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1}}},{},"ZDN_399_Helmet_Base","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Team_Lead_01 : B_Soldier_TL_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Team Lead";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Two_Command","ZDN_399_Helmet_Custom_One","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Two_Command","ZDN_399_Helmet_Custom_One","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{"JMSST_10Rnd_MK1Pellets_Mag_F",10},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"ZDN_399_Vest_Troop_Two_Command",{{"FirstAidKit",2},{"SmokeShell",3,1},{"SmokeShellRed",3,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",2,75},{"SmokeShellBlue",2,1},{"SmokeShellPurple",1,1}}},{},"ZDN_399_Helmet_Custom_One","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Medic_01 : B_medic_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Medic","ZDN_399_Helmet_Medic_Custom_Two","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Medic","ZDN_399_Helmet_Medic_Custom_Two","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};

        backpack = "ZDN_B_Kitbag_Med";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{"JMSST_10Rnd_MK1Pellets_Mag_F",10},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"ZDN_399_Vest_Troop_Medic",{{"FirstAidKit",2},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{"ZDN_B_Kitbag_Med",{{"Medikit",1},{"FirstAidKit",25}}},"ZDN_399_Helmet_Medic_Custom_Two","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Squad_Lead_01 : B_Soldier_SL_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squad Lead";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Two_Command","ZDN_399_Cap","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Two_Command","ZDN_399_Cap","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"ZDN_399_Vest_Troop_Two_Command",{{"FirstAidKit",2},{"SmokeShell",3,1},{"SmokeShellRed",3,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",2,75},{"SmokeShellBlue",2,1},{"SmokeShellPurple",1,1}}},{},"ZDN_399_Cap","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_RTO_01 : B_soldier_UAV_06_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "RTO";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle"};
        respawnWeapons[] = {"JMSST_mk1Rifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};

        backpack = "B_RadioBag_01_black_F";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{"JMSST_10Rnd_MK1Pellets_Mag_F",10},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"ZDN_399_Vest_Troop_Base",{{"FirstAidKit",2},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{"B_RadioBag_01_black_F",{{"JMSST_75Rnd_762x51_MoritaMag",4,75}}},"ZDN_399_Helmet_Base","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Autorifleman_01 : B_soldier_AR_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Autorifleman";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Bandolier_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Bandolier_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"LMG_Mk200_F"};
        respawnWeapons[] = {"LMG_Mk200_F"};

        magazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};
        respawnMagazines[] = {"200Rnd_65x39_cased_Box","200Rnd_65x39_cased_Box"};

        backpack = "ZDN_B_Kitbag_Inf";

        ALiVE_orbatCreator_loadout[] = {{"LMG_Mk200_F","","acc_pointer_IR","optic_ACO_grn",{"200Rnd_65x39_cased_Box",200},{},""},{},{},{"ZDN_399_Uniform_Base",{{"200Rnd_65x39_cased_Box",1,200}}},{"ZDN_399_Vest_Troop_Bandolier_Base",{{"FirstAidKit",2},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1},{"200Rnd_65x39_cased_Box_Tracer_Red",1,200}}},{"ZDN_B_Kitbag_Inf",{{"200Rnd_65x39_cased_Box_Tracer_Red",5,200}}},"ZDN_399_Helmet_Base","G_Tactical_Black",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Rifleman_AT_01 : B_soldier_LAT_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_Two_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_Two_Base","ZDN_399_Helmet_Base","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1Rifle","launch_MRAWS_green_rail_F"};
        respawnWeapons[] = {"JMSST_mk1Rifle","launch_MRAWS_green_rail_F"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","MRAWS_HEAT_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F","MRAWS_HEAT_F","JMSST_75Rnd_762x51_MoritaMag","JMSST_10Rnd_MK1Pellets_Mag_F"};

        backpack = "ZDN_B_Kitbag_Inf";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1Rifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{"JMSST_10Rnd_MK1Pellets_Mag_F",10},""},{"launch_MRAWS_green_rail_F","","","",{"MRAWS_HEAT_F",1},{},""},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",2,75}}},{"ZDN_399_Vest_Troop_Two_Base",{{"FirstAidKit",2},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1},{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{"ZDN_B_Kitbag_Inf",{{"MRAWS_HEAT_F",3,1},{"MRAWS_HE_F",2,1},{"JMSST_10Rnd_MK1Pellets_Mag_F",1,10}}},"ZDN_399_Helmet_Base","G_Combat",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_Engineer_01 : B_engineer_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Engineer";
        side = 1;
        faction = "federation";

        identityTypes[] = {"Head_NATO","LanguageENG_F","G_NATO_default"};

        uniformClass = "ZDN_399_Uniform_Base";

        linkedItems[] = {"ZDN_399_Vest_Troop_EngFull","ZDN_399_Helmet_Engineer","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"ZDN_399_Vest_Troop_EngFull","ZDN_399_Helmet_Engineer","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"JMSST_mk1CRifle"};
        respawnWeapons[] = {"JMSST_mk1CRifle"};

        magazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};
        respawnMagazines[] = {"JMSST_75Rnd_762x51_MoritaMag","JMSST_75Rnd_762x51_MoritaMag"};

        backpack = "JMSST_B_Kitbag_black";

        ALiVE_orbatCreator_loadout[] = {{"JMSST_mk1CRifle","","","",{"JMSST_75Rnd_762x51_MoritaMag",75},{},""},{},{},{"ZDN_399_Uniform_Base",{{"JMSST_75Rnd_762x51_MoritaMag",3,75}}},{"ZDN_399_Vest_Troop_EngFull",{{"FirstAidKit",2},{"SmokeShell",1,1},{"SmokeShellRed",1,1},{"JMSST_MX90_M_Grenade",2,1}}},{"JMSST_B_Kitbag_black",{{"ToolKit",1},{"MineDetector",1},{"DemoCharge_Remote_Mag",2,1},{"APERSTripMine_Wire_Mag",1,1},{"APERSMineDispenser_Mag",2,1}}},"ZDN_399_Helmet_Engineer","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_GK_100k_01 : JMSST_vg_UCFlsv_01_unarmed_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "GK-100k";
        side = 1;
        faction = "federation";
        crew = "JMSST_MI_troop_rifle";

        class Turrets : Turrets {
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_B_UCFMI_GK_2M_Transport_01 : JMSST_vg_UCFtruck_Truck_03_transport_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "GK-2M Transport";
        side = 1;
        faction = "federation";
        crew = "JMSST_MI_troop_rifle";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};