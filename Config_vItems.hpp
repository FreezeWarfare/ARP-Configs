/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = {"bandage", "protest", "timber", "pdrill", "pickaxe", "toolkit", "fuelFull", "peach", "cloth", "goldcoin", "storagesmall", "storagebig", "waterBottle", "apple", "pepsi", "cocaCola", "monsterEnergy", "doritos", "kfc", "redgull", "tbacon", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = {"cprKit", "bandage", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "(missionNamespace getVariable ['mav_ttm_var_rebel',0]) isEqualTo 1";
        items[] = {"cyanideCapsule", "boltcutter", "gpstracker", "zipties", "pliers", "blindfold", "codeCracker", "bandage", "cprKit", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "blastingcharge" };
    };

    class gang {
        name = "STR_Shops_Gang";
        side = "civ";
        conditions = "";
        items[] = {"bandage", "protest", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "blastingcharge" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "bandage", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "LSD", "ecstasy" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class jeweler {
        name = "STR_Shops_Jeweler";
        side = "civ";
        conditions = "";
        items[] = { "rubyC" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldenbarz3" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = {"panicbutton", "keyCard", "gpstracker", "cprKit", "bandage", "donuts", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit" };
    };

    class uranium {
        name = "STR_Shops_uranium";
        side = "civ";
        conditions = "";
        items[] = {"uranium"};
    };

    class archeologist {
        name = "STR_Shops_archeologist";
        side = "civ";
        conditions = "(player getVariable ['mav_ttm_var_relicReward3',false]) isEqualTo true";
        items[] = {"excavator"};
    };

    class planeWreck {
        name = "STR_Shops_planeWreck";
        side = "civ";
        conditions = "(player getVariable ['mav_ttm_var_relicReward3',false]) isEqualTo true";
        items[] = {"oilSupplies"};
    };

    class unknown {
        name = "STR_Shops_unknown";
        side = "civ";
        conditions = "";
        items[] = {"unknown"};
    };

    class gunpowder {
        name = "STR_Shops_gunpowder";
        side = "civ";
        conditions = "";
        items[] = {"gunpowder"};
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {	
    class relic1 {
        variable = "relic1";
        displayName = "STR_Item_relic1";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_relic1.paa";
    };
    class relic2 {
        variable = "relic2";
        displayName = "STR_Item_relic2";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_relic2.paa";
    };
    class relic3 {
        variable = "relic3";
        displayName = "STR_Item_relic3";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_relic3.paa";
    };
    class relic4 {
        variable = "relic4";
        displayName = "STR_Item_relic4";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_relic4.paa";
    };

    class relicTransport {
        variable = "relicTransport";
        displayName = "STR_Item_relicTransport";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_relicTransport.paa";
    };	
    class relicFed {
        variable = "relicFed";
        displayName = "STR_Item_relicFed";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_relicFed.paa";
    };		
    class Satellite {
        variable = "Satellite";
        displayName = "STR_Item_satellite";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_satellite.paa";
    };

    class enginedisable {
        variable = "enginedisable";
        displayName = "STR_Item_enginedisable";
        weight = 10;
        buyPrice = 25000;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "";
    };

    class keyCard {
        variable = "keyCard";
        displayName = "STR_Item_keyCard";
        weight = 3;
        buyPrice = 250;
        sellPrice = 125;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_debit.paa";
    };
	
    class unknown {
        variable = "unknown";
        displayName = "STR_Item_unknown";
        weight = 12;
        buyPrice = -1;
        sellPrice = 3000;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_unknown.paa";
    };	

    class effigy {
        variable = "effigy";
        displayName = "STR_Item_effigy";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_effigy.paa";
    };

    class oilSupplies {
        variable = "oilSupplies";
        displayName = "STR_Item_oilSupplies";
        weight = 20;
        buyPrice = -1;
        sellPrice = 9500;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_oilSupplies.paa";
    };

    class MDMA {
        variable = "MDMA";
        displayName = "STR_Item_MDMA";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_MDMA.paa";
    };

    class ecstasy {
        variable = "ecstasy";
        displayName = "STR_Item_ecstasy";
        weight = 3;
        buyPrice = 2000;
        sellPrice = 1200;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_ecstasy.paa";
    };

    class excavator {
        variable = "excavator";
        displayName = "STR_Item_excavator";
        weight = 10;
        buyPrice = 1400;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_excavator.paa";
    };

    class cyanideCapsule {
        variable = "cyanideCapsule";
        displayName = "STR_Item_CyanideCapsule";
        weight = 1;
        buyPrice = 2000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_cyanideCapsule.paa";
    };

    class pdrill {
        variable = "pdrill";
        displayName = "STR_Item_drill";
        weight = 10;
        buyPrice = 900;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_pdrill.paa";
    };

    class uraniumU {
        variable = "uraniumU";
        displayName = "STR_Item_uraniumU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_uraniumU.paa";
    };
    
    class mushrooms {
        variable = "mushrooms";
        displayName = "STR_Item_Mushrooms";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_mushrooms.paa";
    };

    class LSD {
        variable = "LSD";
        displayName = "STR_Item_LSD";
        weight = 4;
        buyPrice = -1;
        sellPrice = 960;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_LSD.paa";
    };

    class rubyU {
        variable = "rubyU";
        displayName = "STR_Item_rubyU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_rubyU.paa";
    };

    class rubyC {
        variable = "rubyC";
        displayName = "STR_Item_rubyC";
        weight = 1;
        buyPrice = -1;
        sellPrice = 380;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_rubyC.paa";
    };	

    class lumber {
        variable = "lumber";
        displayName = "STR_Item_Lumber";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_lumber.paa";
    }; 

    class gpstracker {
        variable = "gpstracker";
        displayName = "STR_Item_gpstracker";
        weight = 2;
        buyPrice = 10000;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_gps.paa";
    };

    class tent1 {
        variable = "tent1";
        displayName = "STR_Item_tent1";
        weight = 4;
        buyPrice = 500;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_tent.paa";
    };

    class protest {
        variable = "protest";
        displayName = "STR_Item_protest";
        weight = 4;
        buyPrice = 600;
        sellPrice = 20;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_protest.paa";
    };

    class uranium {
        variable = "uranium";
        displayName = "STR_Item_uranium";
        weight = 3;
        buyPrice = -1;
        sellPrice = 1100;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_uraniumP.paa";
    };

    class timber {
        variable = "timber";
        displayName = "STR_Item_Timber";
        weight = 4;
        buyPrice = -1;
        sellPrice = 680;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_timber.paa";
    };

    class pliers {
        variable = "pliers";
        displayName = "STR_Item_pliers";
        weight = 4;
        buyPrice = 840;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\craft\pliers.paa";
	};

    class rubberU {
		variable = "rubberU";
		displayName = "STR_Item_rubberu";
		weight = 3;
		buyPrice = 225;
		sellPrice = 50;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\rubberU.paa";
	};

	class rubber {
		variable = "rubber";
		displayName = "STR_Item_rubber";
		weight = 3;
		buyPrice = 325;
		sellPrice = 310;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\rubber.paa";
	};

	class goldcoin {
		variable = "goldcoin";
		displayName = "STR_Item_goldcoin";
		weight = 2;
		buyPrice = -1;
		sellPrice = 180;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\goldcoin.paa";
	};

	class nitroamine {
		variable = "nitroamine";
		displayName = "STR_Item_nitroamine";
		weight = 4;
		buyPrice = 1105;
		sellPrice = 250;
		illegal = true;
		edible = -1;
		icon = "ARP\images\icons\craft\nitroamine.paa";
	};

	class C4 {
		variable = "C4";
		displayName = "STR_Item_C4";
		weight = 6;
		buyPrice = 1205;
		sellPrice = 750;
		illegal = true;
		edible = -1;
		icon = "ARP\images\icons\craft\C4.paa";
	};

	class steel {
		variable = "steel";
		displayName = "STR_Item_steel";
		weight = 3;
		buyPrice = 405;
		sellPrice = 350;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\steel.paa";
	};

	class steelplate {
		variable = "steelplate";
		displayName = "STR_Item_steelplate";
		weight = 6;
		buyPrice = 925;
		sellPrice = 850;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\steelplate.paa";
	};

	class wool {
		variable = "wool";
		displayName = "STR_Item_wool";
		weight = 3;
		buyPrice = 225;
		sellPrice = 80;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\wool.paa";
	};

	class cloth {
		variable = "cloth";
		displayName = "STR_Item_cloth";
		weight = 2;
		buyPrice = 625;
		sellPrice = 170;
		illegal = false;
		edible = -1;
		icon = "ARP\images\icons\craft\cloth.paa";
	};

	class sulfur {
		variable = "sulfur";
		displayName = "STR_Item_sulfur";
		weight = 2;
		buyPrice = 425;
		sellPrice = 380;
		illegal = true;
		edible = -1;
		icon = "ARP\images\icons\craft\sulfur.paa";
	};

	class gunpowder {
		variable = "gunpowder";
		displayName = "STR_Item_gunpowder";
		weight = 2;
		buyPrice = 25;
		sellPrice = 20;
		illegal = true;
		edible = -1;
		icon = "ARP\images\icons\craft\gunpowder.paa";
	};		
    class doritos {
        variable = "doritos";
        displayName = "STR_Doritos";
        weight = 1;
        buyPrice = 10;
        sellPrice = 4;
        illegal = false;
        edible = 30;
        icon = "ARP\images\icons\ico_doritos.paa";
    };

    class pepsi {
        variable = "pepsi";
        displayName = "STR_Pepsi";
        weight = 1;
        buyPrice = 5;
        sellPrice = 3;
        illegal = false;
        edible = 50;
        icon = "ARP\images\icons\ico_pepsi.paa";
    };

    class cocacola {
        variable = "cocacola";
        displayName = "STR_CocaCola";
        weight = 1;
        buyPrice = 6;
        sellPrice = -1;
        illegal = false;
        edible = 50;
        icon = "ARP\images\icons\ico_cocacola.paa";
    };

    class monsterEnergy {
        variable = "monsterEnergy";
        displayName = "STR_MonsterEnergy";
        weight = 1;
        buyPrice = 10;
        sellPrice = -1;
        illegal = false;
        edible = 60;
        icon = "ARP\images\icons\ico_monsterEnergy.paa";
    };

    class kfc {
        variable = "kfc";
        displayName = "STR_KFC";
        weight = 1;
        buyPrice = 7;
        sellPrice = -1;
        illegal = false;
        edible = 70;
        icon = "ARP\images\icons\ico_kfc.paa";
    };	

    class codeCracker {
        variable = "codeCracker";
        displayName = "STR_Item_codeCracker";
        weight = 2;
        buyPrice = 28000;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\codeCracker.paa";
    };

    class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 0;
        buyPrice = 420;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ziptie.paa";
    };
	
	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 0;
        buyPrice = 500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\blindfold.paa";
    };

    class cprKit {
        variable = "cprKit";
        displayName = "STR_Item_CPRMediKit";
        weight = 5;
        buyPrice = 50000;
        sellPrice = 2500;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_defib.paa";
    };  

    class panicbutton {
        variable = "panicbutton";
        displayName = "STR_Item_panicbutton";
        weight = 5;
        buyPrice = 100;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_panicbutton.paa";
    };

    class bandage {
        variable = "bandage";
        displayName = "STR_Item_Bandage";
        weight = 2;
        buyPrice = 150;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_bandages.paa";
    };

    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 250;
        sellPrice = 35;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_pickaxe.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 35;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 200;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 500;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 300;
        sellPrice = 45;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_lockpick.paa";
    };

    class goldenbarz3 {
        variable = "goldenbarz3";
        displayName = "STR_Item_GoldBar";
        weight = 3;
        buyPrice = -1;
        sellPrice = 20500;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_goldbar.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 107500;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 12750;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 250;
        sellPrice = 200;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_defuseKit.paa";
    };

     class storagesmall {
        variable = "storageSmall";
		displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 15250;
        sellPrice = 550;
        vARPrice = 1;
        maxPrice = 15500;
        minPrice = 15500;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 46500;
        sellPrice = 1370;
        vARPrice = 1;
        maxPrice = 13700;
        minPrice = 13705;
        factor = 0;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_storageBig.paa";
    };

    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 810;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 760;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 770;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 355;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 1;
        buyPrice = -1;
        sellPrice = 290;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 4;
        buyPrice = -1;
        sellPrice = 75;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 3;
        buyPrice = -1;
        sellPrice = 720;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 5;
        buyPrice = -1;
        sellPrice = 745;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_cement.paa";
    };	
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 4;
        buyPrice = 1550;
        sellPrice = 1220;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 1280;
        sellPrice = 1035;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 1330;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_cocaineProcessed.paa";
    };	
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 12;
        sellPrice = 5;
        illegal = false;
        edible = 65;
        icon = "ARP\images\icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = 65;
        icon = "ARP\images\icons\ico_waterBottle.paa";
    };	
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 1;
        buyPrice = 6;
        sellPrice = 5;
        illegal = false;
        edible = 10;
        icon = "ARP\images\icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 15;
        sellPrice = 5;
        illegal = false;
        edible = 10;
        icon = "ARP\images\icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 7;
        sellPrice = 2;
        illegal = false;
        edible = 40;
        icon = "ARP\images\icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 12;
        sellPrice = 6;
        illegal = false;
        edible = 30;
        icon = "ARP\images\icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 15;
        sellPrice = 10;
        illegal = false;
        edible = 20;
        icon = "ARP\images\icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 1;
        buyPrice = 7;
        sellPrice = 5;
        illegal = false;
        edible = 30;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 1;
        buyPrice = 15;
        sellPrice = 10;
        illegal = false;
        edible = 25;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 17;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 2;
        buyPrice = 25;
        sellPrice = 20;
        illegal = false;
        edible = 30;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 70;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 3;
        buyPrice = 120;
        sellPrice = 100;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 4;
        buyPrice = -1;
        sellPrice = 25;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 2;
        buyPrice = 60;
        sellPrice = 40;
        illegal = false;
        edible = 80;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 3;
        buyPrice = 75;
        sellPrice = 50;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 6;
        buyPrice = -1;
        sellPrice = 300;
        illegal = true;
        edible = -1;
        icon = "ARP\images\icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 100;
        sellPrice = 75;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 11;
        sellPrice = 8;
        illegal = false;
        edible = 65;
        icon = "ARP\images\icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 6;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 2;
        buyPrice = 9;
        sellPrice = 8;
        illegal = false;
        edible = 45;
        icon = "ARP\images\icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 9;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 15;
        sellPrice = 11;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 11;
        illegal = false;
        edible = -1;
        icon = "ARP\images\icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 15;
        sellPrice = 12;
        illegal = false;
        edible = 100;
        icon = "ARP\images\icons\ico_muttonLeg.paa";
    };
};