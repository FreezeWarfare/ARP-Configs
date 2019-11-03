class cfgInteractions
{
	class OpenATM  {
		title = "Access ATM";
		action = "[] spawn life_fnc_atmMenu;";
		check = "call life_fnc_nearATM || typeof cursorObject in ['Land_Atm_02_F','Land_ATM_01_malden_F','Land_ATM_02_malden_F','Land_Mattaust_ATM']";
	};

	class CaptureCocaine  {
		title = "Capture Cocaine Cartel";
		action = "[] spawn life_fnc_captureHideout";
		check = "side player isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && cursorobject getVariable 'PSI_Hideouts' isEqualto 'Cocaine'";
	};

	class CaptureHeroin  {
		title = "Capture Heroin Cartel";
		action = "[] spawn life_fnc_captureHideout";
		check = "side player isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && cursorobject getVariable 'PSI_Hideouts' isEqualto 'Heroin'";
	};

	class CaptureMarijuana  {
		title = "Capture Marijuana Cartel";
		action = "[] spawn life_fnc_captureHideout";
		check = "side player isEqualTo civilian && !isNil {(group player) getVariable 'gang_owner'} && player distance cursorobject < 5 && cursorobject getVariable 'PSI_Hideouts' isEqualto 'Marijuana'";
	};

	class ModShop  {
		title = "Mod Shop";
		action = "[] spawn PSI_ModShop";
		check = "mod_shop getVariable 'PSI_ModShop' isEqualto true && player distance mod_shop <= 7";
	};

	class SeizeItems  {
		title = "Seize Items";
		action = "[] spawn life_fnc_seizeWeapon;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (count(nearestObjects [player,['weaponholder'],3])>0) && !(player getVariable ['tied',false]) && !(player getVariable ['playerSurrender',false])";
	};

	class OpenDoor  {
		title = "Lockpick Door";
		action = "[] spawn PSI_OpenDoor;";
		check = "playerSide isEqualTo civilian && life_inv_lockpick	> 0 && typeOf cursorObject isEqualTo ""Land_MainSection"" && player distance cursorObject < 35";
	};

	class OpenCellDoor  {
		title = "Lockpick Cell Door";
		action = "[] spawn PSI_OpenCell;";
		check = "playerSide isEqualTo civilian && life_inv_lockpick	> 0 && typeOf cursorObject isEqualTo ""Land_MainSection"" && player distance cursorObject < 35";
	};

	class SearchEvidenceCop  {
		title = "Search through Evidence";
		action = "[cursorObject] spawn PSI_SEARCHEVIDENCE;";
		check = "call(life_coplevel) > 0 && cursorObject getVariable ['isEvidence',false] && player distance cursorObject < 10 && ((side player) isEqualTo west)";
	};

	class SearchEvidenceCiv  {
		title = "Destroy Evidence";
		action = "[cursorObject] spawn PSI_SEARCHEVIDENCE;";
		check = "cursorObject getVariable ['isEvidence',false] && player distance cursorObject < 10 && ((side player) isEqualTo civilian)";
	};

	class OpenMajorSafe  {
		title = "Open Safe";
		action = "closeDialog 0;[cursorObject] spawn life_fnc_safeOpen;";
		check = "cursorObject getVariable ['bankOpen',false] && player distance cursorObject < 10 && ((side player) isEqualTo civilian)";
	};

	class FixMajorSafe  {
		title = "Fix Safe";
		action = "closeDialog 0;[cursorObject] spawn life_fnc_safeFix;";
		check = "cursorObject getVariable ['bankOpen',false] && player distance cursorObject < 10 && ((side player) isEqualTo west)";
	};



	class RobEvidenceLocker  {
		title = "Break Open Evidence Locker";
		action = "[cursorObject] spawn PSI_RobEvidence;";
		check = "playerSide isEqualTo civilian && life_inv_boltcutter > 0 && typeOf cursorObject isEqualTo ""C_IDAP_supplyCrate_F"" && player distance cursorObject < 3 && cursorObject getVariable [""Robbed"",false] isEqualto false";
	};

	class LockEvidence  {
		title = "Lock Evidence Locker";
		action = "['You have locked up the evidence locker.',true,'slow'] call life_fnc_notificationSystem; cursorObject setVariable ['Robbed',false,true];";
		check = "playerSide isEqualTo west && typeOf cursorObject isEqualTo ""C_IDAP_supplyCrate_F"" && player distance cursorObject < 3 && cursorObject getVariable [""Robbed"",false] isEqualto true";
	};

	class SearchGarbage  {
		title = "Search Through Garbage";
		action = "[] spawn PSI_SearchGarbage;";
		check = "playerSide isEqualTo civilian && player distance cursorObject < 3 && cursorObject getVariable ""PSI_Garbage"" isEqualto true";
	};

	class BreakDownDoor {
		title = "Break Down Door";
		action = "[cursorObject] call life_fnc_copBreakDoor; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class SearchHouse {
		title = "Search House";
		action = "[cursorObject] call life_fnc_raidHouse; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class LockupHouse {
		title = "Lockup House";
		action = "[cursorObject] call life_fnc_lockupHouse; closeDialog 0;";
		check = "cursorObject isKindOf 'House' && call(life_coplevel) > 0 && playerSide isEqualTo west && !isNil {cursorObject getVariable 'house_owner'} && player distance cursorObject <= 10";
	};

	class BuyHouse {
		title = "Buy House";
		action = "closeDialog 0; [cursorObject] spawn life_fnc_buyHouse;";
		check = "playerSide isEqualTo civilian && isNil {cursorObject getVariable 'house_owner'} && !(cursorObject in life_vehicles) && player distance cursorObject <= 12 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class BuyGarage {
		title = "Buy Garage";
		action = "closeDialog 0; [cursorObject] spawn life_fnc_buyHouse;";
		check = "playerSide isEqualTo civilian && isNil {cursorObject getVariable 'house_owner'} && !(cursorObject in life_vehicles) && player distance cursorObject <= 12 && (isClass (missionConfigFile >> 'Garages' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class SellHouse {
		title = "Sell House";
		action = "closeDialog 0; [cursorObject] spawn life_fnc_sellHouse;";
		check = "playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class SellGarage {
		title = "Sell Garage";
		action = "closeDialog 0; [cursorObject] spawn life_fnc_sellHouse;";
		check = "(isClass (missionConfigFile >> 'Garages' >> 'Jackson_County' >> (typeOf cursorObject))) && playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && player distance cursorObject <= 10 && cursorObject in life_vehicles";
	};

	class AccessGarage {
		title = "Access Garage";
		action = "[cursorObject,""Car""] spawn life_fnc_vehicleGarage; closeDialog 0;";
		check = "(isClass (missionConfigFile >> 'Garages' >> 'Jackson_County' >> (typeOf cursorObject))) && playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && player distance cursorObject <= 10";
	};

	class StoreGarage {
		title = "Store Vehicle";
		action = "[cursorObject, player] spawn life_fnc_storeVehicle; closeDialog 0;";
		check = "(isClass (missionConfigFile >> 'Garages' >> 'Jackson_County' >> (typeOf cursorObject))) && playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && player distance cursorObject <= 10";
	};

	class UnlockStorage {
		title = "Unlock Storage";
		action = "[cursorObject] spawn life_fnc_lockHouse; closeDialog 0;";
		check = "playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && cursorObject getVariable['locked',true] && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class LockStorage {
		title = "Lock Storage";
		action = "[cursorObject] spawn life_fnc_lockHouse; closeDialog 0;";
		check = "playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && !(cursorObject getVariable ['locked',true]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class LightsOn {
		title = "Turn Lights On";
		action = "[cursorObject] spawn life_fnc_lightHouseAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && isNull (cursorObject getVariable ['lightSource',ObjNull]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class LightsOff {
		title = "Turn Lights Off";
		action = "[cursorObject] spawn life_fnc_lightHouseAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && ((cursorObject getVariable 'house_owner') select 0) == (getPlayerUID player) && !isNull (cursorObject getVariable ['lightSource',ObjNull]) && player distance cursorObject <= 15 && (isClass (missionConfigFile >> 'Housing' >> 'Jackson_County' >> (typeOf cursorObject)))";
	};

	class Unrestrain {
		title = "Unrestrain Player";
		action = "[cursorObject] spawn life_fnc_unrestrain;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && cursorObject getVariable 'restrained' isEqualto true && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class CheckLicences {
		title = "Check Licenses";
		action = "[player] remoteExec [""life_fnc_licenseCheck"",cursorObject]";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class SearchPlayer {
		title = "Strip Search Player";
		action = "[cursorObject] spawn life_fnc_searchAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && cursorObject getVariable 'restrained' isEqualto true && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class EscortPlayer {
		title = "Escort Player";
		action = "[cursorObject] spawn life_fnc_escortAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['Escorting',false]) && player distance cursorObject <= 6 && isNull (objectParent player) && ((cursorObject getVariable['restrained',false]))";
	};

	class StopEscortPlayer {
		title = "Stop Player Escort";
		action = "[] call life_fnc_stopEscorting; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && player getVariable ['isEscorting',false] && isNull (objectParent player)";
	};

	class TicketPlayer {
		title = "Ticket Player";
		action = "closeDialog 0; [cursorObject] call life_fnc_ticketAction;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class ArrestPlayer {
		title = "Arrest Player";
		action = "closeDialog 0; createDialog ""PSI_JailTime"";";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && cursorObject getVariable 'restrained' isEqualto true && player distance cursorObject <= 6 && isNull (objectParent player) && player distance (getMarkerPos 'jail_marker') < 500";
	};

	class PutInCar {
		title = "Put Player In Car";
		action = "[cursorObject] call life_fnc_putInCar;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && alive cursorObject && isPlayer cursorObject && cursorObject getVariable 'restrained' isEqualto true && player distance cursorObject <= 5";
	};

	class RobPerson {
		title = "Rob Player";
		action = "call life_fnc_robAction;";
		check = "alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['robbed',false]) && player distance cursorObject <= 3.5 && (animationState cursorObject isEqualto 'Incapacitated' || cursorObject getVariable 'playerSurrender' isEqualTo true)";
	};

	class TiePerson {
		title = "Tie Player";
		action = "[] spawn life_fnc_tieingAction; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && !(cursorObject getVariable ['tied', false]) && player distance cursorObject <= 3.5 && playerSide isEqualto civilian && life_inv_zipties > 0 && (animationState cursorObject isEqualto 'Incapacitated' || cursorObject getVariable 'playerSurrender' isEqualTo true)";
	};

	class UntiePerson {
		title = "Untie Player";
		action = "[cursorObject] call life_fnc_untie; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5";
	};

	class EscortTiedPerson {
		title = "Escort Player";
		action = "[cursorObject] call life_fnc_escortAction; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && playerSide isEqualto civilian && cursorObject getVariable 'Escorting' isEqualto false";
	};

	class UnescortTiedPerson {
		title = "Stop Escorting Player";
		action = "[cursorObject] call life_fnc_stopEscorting; closeDialog 0;";
		check = "playerSide isEqualto civilian && player getVariable 'isEscorting' isEqualto true && isNull (objectParent player)";
	};

	class PutTiedInCar {
		title = "Put in Vehicle";
		action = "[cursorObject] call life_fnc_putInCar; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && playerSide isEqualto civilian";
	};

	class BlindfoldPerson {
		title = "Blindfold Person";
		action = "[] call life_fnc_tieingActionb; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && playerSide isEqualto civilian";
	};

	class UnBlindfoldPerson {
		title = "Remove Blindfold";
		action = "[] call life_fnc_untieb; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && cursorobject getVariable 'blindfolded' isEqualTo true";
	};

	class GagPerson {
		title = "Gag Person";
		action = "[] call life_fnc_gagAction; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && playerSide isEqualto civilian && cursorobject getVariable 'gagged' isEqualTo false";
	};

	class UnGagPerson {
		title = "Remove Gag";
		action = "[] call life_fnc_removeGagAction; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && cursorobject getVariable 'gagged' isEqualTo true";
	};

	class PatdownTied {
		title = "Patdown Player";
		action = "[] remoteExecCall [""life_fnc_removeWeaponAction"",cursorObject]; closeDialog 0;";
		check = "alive cursorObject && isPlayer cursorObject && cursorobject getVariable 'tied' isEqualTo true && player distance cursorObject <= 3.5 && playerSide isEqualto civilian";
	};

	class PushVehicle {
		title = "Push Vehicle";
		action = "[cursorObject] spawn life_fnc_pushVehicle; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && local cursorObject && isNull (objectParent player)";
	};

	class RepairVehicle {
		title = "Repair Vehicle";
		action = "[cursorObject] spawn life_fnc_repairTruck; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && isNull (objectParent player)";
	};

	class LockpickVehicle {
		title = "Lockpick Vehicle";
		action = "[] spawn life_fnc_lockpick; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && life_inv_lockpick > 0 && isNull (objectParent player) && alive cursorObject && locked cursorObject isEqualTo 2";
	};

	class GPSVehicle {
		title = "Track Vehicle";
		action = "[cursorObject] spawn life_fnc_gpsTracker; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 8 && life_inv_gpstracker > 0 && isNull (objectParent player) && alive cursorObject";
	};
	
	class FillVehicle {
		title = "Fill Vehicle";
		action = "[cursorObject] spawn life_fnc_gangConvoyFill; closeDialog 0;";
		check = "cursorObject isKindOf 'Car' && player distance cursorObject <= 8 && typeOf cursorObject isEqualto 'C_Truck_02_covered_F' && isNull (objectParent player) && alive cursorObject && cursorObject getVariable 'convoyFilled' isEqualto false && cursorObject getVariable 'notFilled' isEqualto true && cursorObject getVariable 'convoyFinished' isEqualto false && cursorObject getVariable 'convoyMid' isEqualto true";
	};

	class DeliverSupplies {
		title = "Deliver Suppplies";
		action = "[cursorObject] spawn life_fnc_gangConvoyFinish; closeDialog 0;";
		check = "cursorObject isKindOf 'Car' && player distance cursorObject <= 8 && typeOf cursorObject isEqualto 'C_Truck_02_covered_F' && isNull (objectParent player) && alive cursorObject && cursorObject getVariable 'convoyFilled' isEqualto true && cursorObject getVariable 'notFilled' isEqualto false && cursorObject getVariable 'convoyFinished' isEqualto true && cursorObject getVariable 'convoyEnd' isEqualto false";
	};

	class Registration {
		title = "Registration";
		action = "[cursorObject] spawn life_fnc_searchVehAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class SearchVehicle {
		title = "Search Vehicle";
		action = "[cursorObject] spawn life_fnc_vehInvSearch; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class PulloutPlayers {
		title = "Pullout Players";
		action = "[cursorObject] spawn life_fnc_pulloutAction; closeDialog 0;";
		check = "playerSide in [west,independent] && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && count crew cursorObject > 0";
	};

	class ImpoundVehicle {
		title = "Impound Vehicle";
		action = "[cursorObject] spawn life_fnc_impoundAction; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class PulloutPlayersCiv {
		title = "Pullout Players";
		action = "[cursorObject] spawn life_fnc_pulloutAction; closeDialog 0;";
		check = "playerSide isEqualTo civilian && cursorObject in life_vehicles && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && count crew cursorObject > 0";
	};

	class ImpoundVehicleMed {
		title = "Impound Vehicle";
		action = "[cursorObject] spawn life_fnc_impoundAction; closeDialog 0;";
		check = "call(life_mediclevel) > 0 && playerSide isEqualTo independent && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class JawsOfLife {
		title = "Jaws Vehicle";
		action = "closeDialog 0; [cursorObject] spawn life_fnc_jawsOfLife;";
		check = "call(life_mediclevel) > 0 && playerSide isEqualTo independent && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class CrushVehicle {
		title = "Crush Vehicle";
		action = "[] spawn life_fnc_CrushAction; closeDialog 0;";
		check = "call(life_coplevel) > 3 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && !(cursorObject isKindOf 'Cargo_base_F')";
	};

	class UnflipVehicle {
		title = "Unflip Vehicle";
		action = "[cursorObject] call life_fnc_unFlip; closeDialog 0;";
		check = "(cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class CheckLicenceInCar {
		title = "Check Licence of Driver";
		action = "[player] remoteExec [""life_fnc_licenseCheck"",cursorObject]; closeDialog 0;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player)";
	};

	class TicketDriverInCar {
		title = "Ticket The Driver";
		action = "closeDialog 0; [cursorObject] call life_fnc_ticketAction;";
		check = "call(life_coplevel) > 0 && playerSide isEqualTo west && (cursorObject isKindOf 'Car' || cursorObject isKindOf 'Air' || cursorObject isKindOf 'Ship') && player distance cursorObject <= 6 && isNull (objectParent player) && cursorobject getVariable 'isTicketed' isEqualto 0";
	};

	class RemoveContainer  {
		title = "Remove Container";
		action = "cursorObject spawn life_fnc_removeContainer;";
		check = "typeOf cursorObject isEqualto 'B_supplyCrate_F' && {player distance cursorObject < 3} || typeOf cursorObject isEqualTo 'Box_IND_Grenades_F' && {player distance cursorObject < 3}";
	};

	class SearchContainer  {
		title = "Search Container";
		action = "[life_container_activeObj] spawn life_fnc_containerInvSearch;";
		check =  "typeOf cursorObject isEqualto 'B_supplyCrate_F' && playerSide isEqualTo west && call (life_coplevel) > 0 || typeOf cursorObject isEqualto 'Box_IND_Grenades_F' && playerSide isEqualTo west && call (life_coplevel) > 0";
	};
};