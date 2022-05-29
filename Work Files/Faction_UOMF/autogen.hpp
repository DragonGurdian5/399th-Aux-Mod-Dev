class CfgFactionClasses {
    class ZDN_I_UF {
        displayName = "UMOF";
        side = 2;
        flag = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        icon = "\A3\ui_f\data\map\markers\flags\CSAT_ca.paa";
        priority = 0;
    };
};

class CfgGroups {
    class Indep {

        class ZDN_I_UF {
            name = "UMOF";

            class Infantry {
                name = "Infantry";

                class zdn_i_uf_infantry_squad {
                    name = "Squad";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Squadleader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_RTO_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Medic_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Grenadier_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Explosive_Specialist_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Marksman_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                };

                class zdn_i_uf_infantry_sentry {
                    name = "Sentry";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Squadleader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Medic_01";
                    };
                };

                class zdn_i_uf_infantry_sniper_team {
                    name = "Sniper Team";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Sniper_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Marksman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_RTO_01";
                    };
                };

                class zdn_i_uf_infantry_fireteam {
                    name = "Fireteam";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Squadleader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Grenadier_01";
                    };
                };

                class zdn_i_uf_infantry_fireteam_at {
                    name = "Fireteam (AT)";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Squadleader_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_AT_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_AT_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

            };

            class Motorized {
                name = "Motorized Infantry";

                class zdn_i_uf_motorized_patrol {
                    name = "Patrol";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Offfroad_HMG_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                };

                class zdn_i_uf_motorized_patrol_at {
                    name = "Patrol (AT)";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Offroad_AT_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                };

                class zdn_i_uf_motorized_qrf {
                    name = "QRF";
                    side = 2;
                    faction = "ZDN_I_UF";
                    icon = "\A3\ui_f\data\map\markers\nato\n_motor_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "ZDN_I_UF_Van_Transport_01";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Squadleader_01";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_01";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Rifleman_AT_01";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Marksman_01";
                    };
                    class Unit7 {
                        position[] = {20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Medic_01";
                    };
                    class Unit8 {
                        position[] = {-20,-20,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "ZDN_I_UF_Grenadier_01";
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

    class I_G_Soldier_F;
    class I_G_Soldier_F_OCimport_01 : I_G_Soldier_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_F_OCimport_02 : I_G_Soldier_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_SL_F;
    class I_G_Soldier_SL_F_OCimport_01 : I_G_Soldier_SL_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_SL_F_OCimport_02 : I_G_Soldier_SL_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_GL_F;
    class I_G_Soldier_GL_F_OCimport_01 : I_G_Soldier_GL_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_GL_F_OCimport_02 : I_G_Soldier_GL_F_OCimport_01 { class EventHandlers; };

    class I_G_medic_F;
    class I_G_medic_F_OCimport_01 : I_G_medic_F { scope = 0; class EventHandlers; };
    class I_G_medic_F_OCimport_02 : I_G_medic_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_exp_F;
    class I_G_Soldier_exp_F_OCimport_01 : I_G_Soldier_exp_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_exp_F_OCimport_02 : I_G_Soldier_exp_F_OCimport_01 { class EventHandlers; };

    class I_G_Soldier_M_F;
    class I_G_Soldier_M_F_OCimport_01 : I_G_Soldier_M_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_M_F_OCimport_02 : I_G_Soldier_M_F_OCimport_01 { class EventHandlers; };

    class I_G_Offroad_01_armed_F;
    class I_G_Offroad_01_armed_F_OCimport_01 : I_G_Offroad_01_armed_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Offroad_01_armed_F_OCimport_02 : I_G_Offroad_01_armed_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class M2_Turret;
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

    class I_G_Van_02_transport_F;
    class I_G_Van_02_transport_F_OCimport_01 : I_G_Van_02_transport_F { scope = 0; class EventHandlers; class Turrets; };
    class I_G_Van_02_transport_F_OCimport_02 : I_G_Van_02_transport_F_OCimport_01 { 
        class EventHandlers; 
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class I_G_Soldier_LAT_F;
    class I_G_Soldier_LAT_F_OCimport_01 : I_G_Soldier_LAT_F { scope = 0; class EventHandlers; };
    class I_G_Soldier_LAT_F_OCimport_02 : I_G_Soldier_LAT_F_OCimport_01 { class EventHandlers; };


    class ZDN_I_UF_Rifleman_01 : I_G_Soldier_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"30Rnd_65x39_caseless_green_mag_Tracer",3,30}}},{},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Squadleader_01 : I_G_Soldier_SL_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Squadleader";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_IG_leader";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_Cap_blk_Raven","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_Cap_blk_Raven","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_IG_leader",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"30Rnd_65x39_caseless_green_mag_Tracer",3,30}}},{},"H_Cap_blk_Raven","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Grenadier_01 : I_G_Soldier_GL_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_GL_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_GL_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","1Rnd_HE_Grenade_shell","9Rnd_45ACP_Mag"};

        backpack = "B_AssaultPack_dgtl";

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_GL_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{"1Rnd_HE_Grenade_shell",1},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"1Rnd_HE_Grenade_shell",3,1}}},{"B_AssaultPack_dgtl",{{"1Rnd_HE_Grenade_shell",9,1},{"UGL_FlareWhite_F",2,1},{"UGL_FlareCIR_F",2,1},{"UGL_FlareYellow_F",2,1},{"UGL_FlareRed_F",2,1},{"UGL_FlareGreen_F",2,1},{"1Rnd_Smoke_Grenade_shell",5,1},{"1Rnd_SmokeRed_Grenade_shell",4,1},{"30Rnd_65x39_caseless_green_mag_Tracer",4,30}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Medic_01 : I_G_medic_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Medic";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        backpack = "B_AssaultPack_dgtl";

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"30Rnd_65x39_caseless_green_mag_Tracer",3,30}}},{"B_AssaultPack_dgtl",{{"Medikit",1},{"FirstAidKit",10}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_RTO_01 : ZDN_I_UF_Rifleman_01 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "RTO";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        backpack = "TFAR_rt1523g_big_bwmod";

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"30Rnd_65x39_caseless_green_mag_Tracer",3,30}}},{"TFAR_rt1523g_big_bwmod",{{"30Rnd_65x39_caseless_green_mag_Tracer",5,30}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Explosive_Specialist_01 : I_G_Soldier_exp_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Explosive Specialist";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        backpack = "B_Carryall_oli";

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","acc_pointer_IR","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1}}},{"B_Carryall_oli",{{"MineDetector",1},{"IEDLandBig_Remote_Mag",1,1},{"IEDLandSmall_Remote_Mag",2,1},{"ClaymoreDirectionalMine_Remote_Mag",1,1},{"DemoCharge_Remote_Mag",3,1},{"APERSMineDispenser_Mag",1,1}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Marksman_01 : I_G_Soldier_M_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Marksman";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"srifle_DMR_03_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"srifle_DMR_03_F","hgun_ACPC2_F"};

        magazines[] = {"20Rnd_762x51_Mag","9Rnd_45ACP_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","9Rnd_45ACP_Mag","20Rnd_762x51_Mag","9Rnd_45ACP_Mag"};

        ALiVE_orbatCreator_loadout[] = {{"srifle_DMR_03_F","","acc_pointer_IR","optic_Arco_blk_F",{"20Rnd_762x51_Mag",20},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"20Rnd_762x51_Mag",2,20}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"20Rnd_762x51_Mag",1,20}}},{},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Sniper_01 : ZDN_I_UF_Rifleman_01 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Sniper";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"srifle_LRR_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"srifle_LRR_F","hgun_ACPC2_F"};

        magazines[] = {"7Rnd_408_Mag","9Rnd_45ACP_Mag","7Rnd_408_Mag","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"7Rnd_408_Mag","9Rnd_45ACP_Mag","7Rnd_408_Mag","9Rnd_45ACP_Mag"};

        backpack = "TFAR_rt1523g_big_bwmod";

        ALiVE_orbatCreator_loadout[] = {{"srifle_LRR_F","","","optic_DMS",{"7Rnd_408_Mag",7},{},""},{},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"7Rnd_408_Mag",2,7}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1},{"7Rnd_408_Mag",1,7}}},{"TFAR_rt1523g_big_bwmod",{{"7Rnd_408_Mag",11,7}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class ZDN_I_UF_Offfroad_HMG_01 : I_G_Offroad_01_armed_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offfroad (HMG)";
        side = 2;
        faction = "ZDN_I_UF";
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

    class ZDN_I_UF_Offroad_AT_01 : I_G_Offroad_01_AT_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad (AT)";
        side = 2;
        faction = "ZDN_I_UF";
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

    class ZDN_I_UF_Van_Transport_01 : I_G_Van_02_transport_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Van Transport";
        side = 2;
        faction = "ZDN_I_UF";
        crew = "I_G_Soldier_F";

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

    class ZDN_I_UF_Rifleman_AT_01 : I_G_Soldier_LAT_F_OCimport_02 {
        author = "2LT. Zaigan";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman (AT)";
        side = 2;
        faction = "ZDN_I_UF";

        identityTypes[] = {"Head_Greek","LanguageGRE_F","G_GUERIL_default"};

        uniformClass = "U_BG_Guerrilla_6_1";

        linkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};
        respawnlinkedItems[] = {"JMSST_troops_Agrade_MI","H_HelmetB_grass","ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch"};

        weapons[] = {"arifle_Katiba_F","launch_RPG32_F","hgun_ACPC2_F"};
        respawnWeapons[] = {"arifle_Katiba_F","launch_RPG32_F","hgun_ACPC2_F"};

        magazines[] = {"30Rnd_65x39_caseless_green","RPG32_F","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};
        respawnMagazines[] = {"30Rnd_65x39_caseless_green","RPG32_F","9Rnd_45ACP_Mag","30Rnd_65x39_caseless_green","9Rnd_45ACP_Mag"};

        backpack = "B_Carryall_cbr";

        ALiVE_orbatCreator_loadout[] = {{"arifle_Katiba_F","","","optic_ACO_grn",{"30Rnd_65x39_caseless_green",30},{},""},{"launch_RPG32_F","","","",{"RPG32_F",1},{},""},{"hgun_ACPC2_F","","","",{"9Rnd_45ACP_Mag",9},{},""},{"U_BG_Guerrilla_6_1",{{"30Rnd_65x39_caseless_green",3,30}}},{"JMSST_troops_Agrade_MI",{{"9Rnd_45ACP_Mag",3,9},{"MiniGrenade",2,1}}},{"B_Carryall_cbr",{{"RPG32_F",4,1},{"RPG32_HE_F",2,1}}},"H_HelmetB_grass","",{},{"ItemMap","ItemGPS","TFAR_anprc152","ItemCompass","ItemWatch",""}};


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};