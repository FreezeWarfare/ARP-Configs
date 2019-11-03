/*
*    Format:
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*/
class CfgSpawnPoints {
	class Jackson_County {
        class Civilian {
			class Lakeside {
                displayName = "Lakeside";
                spawnMarker = "civ_spawn_lakeside";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class Morrison {
                displayName = "Morrison";
                spawnMarker = "civ_spawn_mor";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class LosDiablos {
                displayName = "Los Diablos";
                spawnMarker = "civ_spawn_los";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
            class TC1 {
                displayName = "TC1 Gang Base";
                spawnMarker = "gang_tc1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 3";
            };
            class Sanjeeve {
                displayName = "Sanjeeve Base";
                spawnMarker = "gang_sanjeev";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 8";
            };
            class Titans {
                displayName = "Titans Base";
                spawnMarker = "gang_titans";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 15";
            };
            class MVR {
                displayName = "MVR Base";
                spawnMarker = "gang_mvr";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 11";
            };
            class RPD {
                displayName = "RPD Base";
                spawnMarker = "gang_rpd";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 9";
            };
            class Rosso {
                displayName = "Rosso Family Base";
                spawnMarker = "gang_rosso";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 19";
                height = 20;
            };
            class Bloods {
                displayName = "Bloods Base";
                spawnMarker = "gang_bloods";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 20";
            };

            class UC {
                displayName = "Umbrella Corporation Base";
                spawnMarker = "gang_uc";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 21";
            };
						class Cos {
                displayName = "Cosa Nostra Gang Base";
                spawnMarker = "gang_cos";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "call(life_gangLevel) isEqualTo 22";
            };
        };

        class Cop {
            class LakesideHQ {
                displayName = "Lakeside HQ";
                spawnMarker = "cop_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class MorrisonHQ {
                displayName = "Aviemore HQ";
                spawnMarker = "cop_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class SanCristabolHQ {
                displayName = "San Cristabol HQ";
                spawnMarker = "cop_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };

            class LosDiablosHQ {
                displayName = "Los Diablos HQ";
                spawnMarker = "cop_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\watertower_ca.paa";
                conditions = "";
            };
        };

        class Medic {
            class LakesideHospital {
                displayName = "Lakeside Hospital";
                spawnMarker = "medic_spawn_1";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class AviemoreHospital {
                displayName = "Aviemore Hospital";
                spawnMarker = "medic_spawn_2";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class MorrisonHospital {
                displayName = "Morrison Hospital";
                spawnMarker = "medic_spawn_3";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
            class LosDiablosHospital {
                displayName = "Los Diablos Hospital";
                spawnMarker = "medic_spawn_4";
                icon = "\a3\ui_f\data\map\MapControl\hospital_ca.paa";
                conditions = "";
            };
        };
    };
};
