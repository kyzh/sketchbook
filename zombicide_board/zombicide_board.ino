#include <LiquidCrystal.h>

#define RS 12
#define EN 11
#define D4 5
#define D5 3
#define D6 2
#define D7 10


/* Set the hardware layout */

// First the led 
// they display the danger level

int blueLed = 4; // 0-6 kills
//int yellowLed = 6; // 7-18 kills
//int orangeLed = 13; // 19-42 kills
//int redLed = 9; // 43+ kills

// Then the butons
int zombicideButton = 7; // Used to increase the counter and to select 
int leftButton = 8; // Used to navigate backwards in the menues
// int rightButton = X; // Used to navigate forward in the menue

// Finally the LCD screen 
LiquidCrystal lcd(RS,EN,D4,D5,D6,D7);


/* Character Data */
boolean usingZombivors = false; // Zombivors allows caracters resurection in prison outbreak.


// List of character name per Saison/Boxeset 
String charactersSaisonOne[] = {"Amy", "Doug", "Josh", "Ned", "Phil", "Wanda" };
String charactersSaisonTwo[] = {"Belle", "Grindlock", "Joshua", "Kim", "Shannon", "Watts", };
String charactersToxicCityMall[] = {"Derek", "Elsa","Neema","Raoul"};
String charactersSaisonThree[] = {"Dan", "Travis", "Laurie"};

// List of additionnal charater from kisckstarter nd special edition boxset etc...
String characterSpecialGuestBoxes[] = {"Bones", "Padre Johnson", "Ben", "Mary", "Mitch", "Uncle Honk"};
String charaterPromo[] = {
  "Achille",
  "Adriana",
  "Audrey",
  "Brad",
  "Chuck",
  "Claudia",
  "Dakota",
  "Dave",
  "Don",
  "Eagle Chaz",
  "El Cholo",
  "Eva",
  "Frank",
  "Fred",
  "Helen",
  "Gary",
  "Ivy",
  "Kirk",
  "Kyoko",
  "Lea",
  "Mack",
  "Marvin",
  "Mike",
  "Nick",
  "Ralph",
  "Rick",
  "Rob",
  "Rose",
  "Ross",
  "Smith",
  "Thaissa",
  "Troy",
  "Will",
  "Lucius", 
  "Cat",
  "Doc",
  "Jesse",
  "Seth"
};

String characterToCome[] = { "Bastian", "Nikki", "Benny", "Oksana", "Patrick", "Mack"};

// List of skills name
String skillsEnglish = {
  "+1 Action",
  "+1 Damage with .44 Magnum",
  "+1 Damage with Baseball Bat",
  "+1 Damage with Chainsaw",
  "+1 Damage with Flamethrower",
  "+1 Damage with Kukris",
  "+1 Damage with Machete",
  "+1 Damage with Sawed-off",
  "+1 Damage: Melee",
  "+1 Damage: Ranged",
  "+1 Zone per Move",
  "+1 die: Combat",
  "+1 die: Melee",
  "+1 die: Ranged",
  "+1 free Combat Action",
  "+1 free Melee Action",
  "+1 max Range",
  "+1 to dice roll: Combat",
  "+1 to dice roll: Melee",
  "+1 toto dice roll: Ranged",
  "1 free Move Action",
  "1 free Search Action",
  "1 re-roll per turn",
  "2 Zones per Move Action",
  "2 cocktails are better than 1",
  "Ambidextrous",
  "Blitz",
  "Bloodlust: Combat",
  "Bloodlust: Melee",
  "Bloodlust: ranged",
  "Born leader",
  "Break-in",
  "Can start at Orange level",
  "Can start at Red level",
  "Can start at Yellow Danger level",
  "Collection: Runner",
  "Collector: Abomination",
  "Collector: Fatty",
  "Collector: Walker",
  "Death grasp",
  "Destiny",
  "Distributor",
  "Dreadnought: Abomination",
  "Dreadnought: Fatty",
  "Dreadnought: Runner",
  "Dreadnought: Walker",
  "Frenzy: Combat",
  "Frenzy: Melee",
  "Frenzy: Ranged",
  "Gunslinger",
  "Hoard",
  "Hold your nose",
  "Is that all you've got?",
  "Lifesaver",
  "Lock it down",
  "Loud",
  "Low Profile",
  "Lucky",
  "Matching Set !",
  "Medic",
  "Ninja",
  "Point-blank",
  "Reaper: Combat",
  "Reaper: Ranged",
  "Regeneration",
  "Roll 6: +1 die Combat",
  "Roll 6: +1 die Melee",
  "Roll 6: +1 die Ranged",
  "Rotten",
  "Shove",
  "Slippery",
  "Sniper",
  "Start with 2 Kukris",
  "Start with 2 machete",
  "Start with Chainsaw",
  "Start with a .44 Magnum",
  "Start with a Baseball Bat",
  "Start with a Flashlight",
  "Start with a flamethrower",
  "Starts with a Sawed-off",
  "Steady hand",
  "Super strength",
  "Swordmaster",
  "Tactician",
  "Taunt",
  "Tough",
  "Toxic immunity",
  "Trick shot",
  "Webbing",
  "Zombie link",
} 
// set mappings

void setup () {
  lcd.begin(16,2);
  lcd.print("Zombicide board initialisation");
}

void loop () {
  String item[] = {"Hello","How","Where"};
  lcd.print(item[1]);
}

