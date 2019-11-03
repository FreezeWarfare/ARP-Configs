class ARP_Core_Settings {
  phoneNumberPrefix = "+01";
  phoneNumberLength = 10;	
  phoneNumberStart = 7;
  ServerTag = "ARPSynP";	
  allMenus[] = {"ARP_EmergencyMessage","ARP_MessagesEmergency", "ARP_MessagesView", "ARP_MessagesMain", "ARP_ContactView","ARP_ContactEdit","ARP_ContactAdd","ARP_Setup","ARP_ContactsMain","ARP_PhoneWarning","ARP_gangCreate","ARP_gangMain","ARP_KeyChain","ARP_Buttons", "ARP_Settings","ARP_ChangeBackground","ARP_Licenses","ARP_Money","ARP_Inv"};

  BannedWords[] = {
    "Fuck",
    "Shit",
    "Prick",
    "Nigger",
    "Nigga",
    "Jiggaboo",
    "Spic",
   	"Faggot",
   	"Fag",
   	"Bitch",
   	"Paki",
   	"Coon",
   	"Nignog",
   	"Niglet",
   	"Porch Monkey",
   	"PorchMonkey",
   	"Chink",
   	"Gook",
   	"Towelhead",
   	"Spick",
   	"Wetback",
   	"Beaner"
  };
};

class ARP_Backgrounds {
  class test1 {
    image = "\ARP\images\phone\backgrounds\Background_1.paa";
    preview = "\ARP\images\phone\backgrounds\Background_1_preview.paa";
  };
  class test2 {
    image = "\ARP\images\phone\backgrounds\Background_2.paa";
    preview = "\ARP\images\phone\backgrounds\Background_2_preview.paa";
  };
  class test3 {
    image = "\ARP\images\phone\backgrounds\Background_3.paa";
    preview = "\ARP\images\phone\backgrounds\Background_3_preview.paa";
  };
  class test4 {
    image = "\ARP\images\phone\backgrounds\Background_4.paa";
    preview = "\ARP\images\phone\backgrounds\Background_4_preview.paa";
  };
};

class ARP_BottomIcons
{
  class Keys
  {
    displayName = "KEYS";
    onCall = "['ARP_KeyChain'] spawn life_fnc_changeMenu";
    image = "Keys.paa";
  };
  class Money
  {
    displayName = "MONEY";
    onCall = "['ARP_Money'] spawn life_fnc_changeMenu";
    image = "money.paa";
  };
  class Sync
  {
    displayName = "SYNC DATA";
    onCall = "[] call SOCK_fnc_syncData";
    image = "sync.paa";
  };
  class Inventory
  {
    displayName = "INVENTORY";
    onCall = "['ARP_Inv'] spawn life_fnc_changeMenu";
    image = "Inventory.paa";
  };
};

class ARP_Apps
{
  class Licenses
  {
    displayName = "LICENSES";
    onCall = "['ARP_Licenses'] spawn life_fnc_changeMenu";
    image = "licenses.paa";
    conditions = "";
  };
  class Settings
  {
    displayName = "SETTINGS";
    onCall = "['ARP_Settings'] spawn life_fnc_changeMenu";
    image = "settings.paa";
    conditions = "";
  };
  class GangMenu
  {
    displayName = "GANG MENU";
    onCall = "[] spawn life_fnc_LoadGangMenu";
    image = "gang.paa";
    conditions = "playerSide isEqualTo Civilian";
  };
  class Contacts
  {
    displayName = "CONTACTS";
    onCall = "['ARP_ContactsMain'] spawn life_fnc_changeMenu";
    image = "Contacts.paa";
    conditions = "";
  };
  class Messages
  {
    displayName = "MESSAGES";
    onCall = "['ARP_MessagesMain'] spawn life_fnc_changeMenu";
    image = "Messages.paa";
    conditions = "";
  };
  class EmergencyMessage
  {
    displayName = "DISPATCH";
    onCall = "['ARP_MessagesEmergency'] spawn life_fnc_changeMenu";
    image = "999_messaging.paa";
    conditions = "!(playerSide isEqualTo Civilian)";
  };
  class EmergencyMessageTo
  {
    displayName = "999";
    onCall = "['ARP_EmergencyMessage'] spawn life_fnc_changeMenu";
    image = "999_dispatch.paa";
    conditions = "";
  };
  class SkillMenu
  {
    displayName = "SKILLS";
    onCall = "createDialog ""TTM_GUI_RscDisplayTalentOverview"";";
    image = "skills.paa";
    conditions = "";
  };
  class Taxi
  {
    displayName = "TAXI";
    onCall = "createDialog ""RscDisplayTaxiMenu"";";
    image = "taxi.paa";
    conditions = "";
  };
  class Nav
  {
    displayName = "NAVIGATION";
    onCall = "[] call mav_gps_fnc_initNavigation;";
    image = "nav.paa";
    conditions = "";
  };
  class VIP
  {
    displayName = "VIP";
    onCall = "[] call ARP_VIPNametagMenu;";
    image = "VIP.paa";
    conditions = "";
  };
  class wantedList
  {
    displayName = "WANTED";
    onCall = "[] call life_fnc_wantedMenu";
    image = "wanted.paa";
    conditions = "playerSide isEqualTo WEST";
  };
};

class ARP_onLoads
{
  class ARP_Buttons
  {
    onload = "[] spawn life_fnc_loadMainButtons";
  };
  class ARP_ChangeBackground
  {
    onload = "[] spawn life_fnc_loadBackgroundSelection";
  };
  class ARP_Money
  {
    onload = "[] call life_fnc_LoadMoneyMenu";
  };

  class ARP_Inv
  {
    onload = "[] call life_fnc_LoadInventory";
  };

  class ARP_Licenses
  {
    onload = "[] call life_fnc_LoadLicenses";
  };

  class ARP_Settings
  {
    onload = "[] call life_fnc_loadSettings";
  };

  class ARP_KeyChain
  {
    onload = "[] call life_fnc_LoadKeyChain";
  };

  class ARP_ContactsMain
  {
    onload = "[] call life_fnc_LoadContacts";
  };

  class ARP_MessagesMain
  {
    onload = "[] spawn life_fnc_LoadMessageList";
  };

  class ARP_MessagesEmergency
  {
    onLoad = "[] spawn life_fnc_OpenEmergencyMessage";
  };
};