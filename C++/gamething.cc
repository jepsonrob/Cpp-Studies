#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <vector>

/*
STEP ONE: PLAYER ONE! Create character: Name, Speed, Defence, Attack, Health. 3 rolls.
PLAYER TWO! Do the same thing!
COMPLETE

STEP TWO: Roll your attacks (given 3, 3 rolls)

STEP THREE: Player two! Create Character (name & rolls)

STEP FOUR: Player two attack select (3 rolls)

STEP FIVE: Battle Phase!Player One goes first

STEP SIX: (fastest player) Select an attack

STEP SEVEN: Apply attack effects to self & other player.

STEP EIGHT: Check to see if anyone's health is at 0 - if it is, they lose!
Otherwise, step 9:

STEP NINE: Go to Step Six

STEP TEN: Continue until a player dies (health reaches 0)


How attacking works:
Check your stats
Modify your stats (according to attack's modifiers)

Check enemy stats 
Modify enemy stats (you attack, minus enemy defence, this is new attack)

Check to see if anyone's health is at 0.


first, we'll need a function that changes all stats.
eg:

statMod(int changeHealth, int changeDefence, int changeAttack, int changeAcc){
// changes all the stats
}

then we need to make the attack's algorithm effect these stats accordingly.
eg:

	void alcohol(){
		int hitCheck = random() % 10; // roll for accuracy
		if (hitCheck > !! Your accuracy !!){ // if character's accuracy is better than roll, attack success!
			std::cout << "\nAttack Failed!\n" << std::endl;
		} else {
			int damage = !! Your health !! - !!enemy defence!!;
			!!enemy health!! = !!!enemy health!! - damage
			}
	};

Attack 



So after a roll the player will be given three attacks.
These attacks will be given as numbers in an array/vector which will (of course) be able to look up through the array.
There will be three entrys in the array, and the attacks will be listed as 0, 1 and 2. Obviously.
This will be passed through into the attack switch. This means that the attack's number calls the specific function.
START -> User selects an attack -> user attack number (0 to 2) is converted to real attack -> real attack function is called at attack time -> 



*/


/*
ORDERED DRUG LIST:
"Cocaine", "Alcohol", "MDMA", "LSD", "Nicotine", "Nitrous Oxide", 
"Mushrooms", "Heroin", "Crack", "Meth", "Ketamine", "DMT", "Weed", 
"Steroids", "Speed", "Angel Dust", "Paracetamol", "Morphine" n
*/



/*


MAIN CODE STARTS HERE!


*/


// declare variables
int rerollStatNum = 3;
int rerollAttackNum = 3;
std::string attackVect[] = {"Cocaine", "Alcohol", "MDMA", "LSD", "Nicotine", "Nitrous Oxide", "Mushrooms", "Heroin", "Crack", "Meth", "Ketamine", "DMT", "Weed", "Steroids", "Speed", "Angel Dust", "Paracetamol", "Morphine"};


		
		

class character{
	public:
		std::string name; 
		int health;
		int attack;
		int defence;
		int acc;
		int attackList[4];
		
		// Member function declaration
		void statRoll();
		void attackRoll();
		void attackSelect();
			
			
		// Functions that change the character's stats
				
		void newHealth(int enemyAttack){
			int change;
			health = health - (enemyAttack - defence);
			std::cout << name << "'s remaining health:" << health << std::endl;
		}
		
		void newAcc(int change){
			if (change > acc){
				std::cout << name << "'s Accuracy up!" <<std::endl;
			} else if (change < acc){
				std::cout << name << "'s Accuracy down!" <<std::endl;
			}
			acc = change;
		}
		
		void newDefence(int change){
			if (change > defence){
				std::cout << name << "'s Defence up!" <<std::endl;
			} else if (change < defence){
				std::cout << name << "'s Defence down!" <<std::endl;
			}
			defence = change;
		}
		
		void newAttack(int change){
			if (change > attack){
				std::cout << name << "'s Attack up!" <<std::endl;
			} else if (change < defence){
				std::cout << name << "'s Attack down!" <<std::endl;
			}
			attack = change;
		}
		/* Attacks */
		class attacks{
			public:
				void Cocaine(){
					attackAcc = 6;
				}
				void Alcohol(){
					attackAcc = 10;
				}
				void MDMA(){}
				void LSD(){}
				void Nicotine(){}
				void NitrousOxide(){}
				void Mushrooms(){}
				void Heroin(){}
				void Crack(){}
				void Meth(){}
				void Ketamine(){}
				void DMT(){}
				void Weed(){}
				void Steroids(){}
				void Speed(){}
				void AngelDust(){}
				void Paracetamol(){}
				void Morphone(){}
				
				bool accuracyTest() {
				int hitCheckChar = random() % 7;
				if (hitCheckChar < charAcc){
					int charSuccess = 1;
				} else {
					return 0;
				}
				hitCheckChar = random() % 7;
				if (charSuccess == 1){
					if (hitCheckChar < attackAcc){ return 1; } 
					else { return 0; }
				}
			}
				
				

		};
		
	}; // end of character class
	
	
// declare the 2 player objects
	character char1;
	character char2;
	
	
	
	void alcohol(int charAtt, int charAcc){
		int hitCheck = random() % 10;
		if (hitCheck < charAcc){
			std::cout << "Attack Failed!" << std::endl;
		} else {
			//attack goes here, maybe
		}
	};
	
	void character::statRoll() // This is how you have functions outside of the objects!
		{
				health = rand() % 50 + 1;
				attack = rand() % 5 + 1;
				defence = rand() % 5 + 1;
				acc = rand() % 10 + 1;
				std::cout << "Your health is " << health << std::endl;
				std::cout << "Your attack is " << attack << std::endl;
				std::cout << "Your defence is " << defence << std::endl;
				std::cout << "Your accuracy is " << acc << "\n" << std::endl;
				
				if(rerollStatNum > 0){
				std::cout << "Reroll? Y or N (" << rerollStatNum << " rerolls remaining.)" << std::endl;
				std::string answer;
				std::cin >> answer;
					if (answer == "Y" || answer == "yes" || answer == "y" || answer == "Yes"){ 
					rerollStatNum = rerollStatNum - 1;
					statRoll(); 
					}
				}
	        };
			
	void character::attackRoll()
		{
			// Array full of attack names with corresponding numbers
			int attackVectSize = 17;

			//initial rolling
			int firstRoll = random() % attackVectSize;
			int secondRoll = random() % attackVectSize;
			int thirdRoll = random() % attackVectSize;
			int fourthRoll = random() % attackVectSize;

			// if any of the rolls are identical, roll again until correct.
			while (firstRoll == secondRoll || firstRoll == thirdRoll || firstRoll == fourthRoll || secondRoll == thirdRoll || secondRoll == fourthRoll || thirdRoll == fourthRoll){
			firstRoll = random() % attackVectSize;
			secondRoll = random() % attackVectSize;
			thirdRoll = random() % attackVectSize;
			fourthRoll = random() % attackVectSize;
			}

			std::cout << "Your drugs of choice are: " << attackVect[firstRoll] << ", " << attackVect[secondRoll] << ", " << attackVect[thirdRoll] << " and " << attackVect[fourthRoll] << "." << std::endl;

			// 3 available rerolls
			if(rerollAttackNum > 0){
			std::cout << "Reroll? Y or N (" << rerollAttackNum << " rerolls remaining.)" << std::endl;
			std::string answer;
			std::cin >> answer;
			if (answer == "Y" || answer == "yes" || answer == "y" || answer == "Yes"){ 
			rerollAttackNum = rerollAttackNum - 1;
			attackRoll(); 
			}
		}
			attackList[0] = firstRoll;
			attackList[1] = secondRoll;
			attackList[2] = thirdRoll;
			attackList[3] = fourthRoll;	
	}
	/*
	// Attack Selector
	int attackSelect(int attackNum){
		std::cout << "Select your attack!" << std::endl;
		switch (attackNum, youStat, enemyStat){
			// youStat & enemyStat as arrays!
			case 1: cocaine();
			case 2: alcohol();
			case 3: mdma();
			case 4: lsd();
			case 5: nicotine();
			case 6: nitrous();
			case 7: mushrooms();
			case 8: heroin();
			case 9: crack();
			case 10: meth();
			case 11: ketamine();
			case 12: dmt();
			case 13: weed();
			case 14: steroids();
			case 15: speed();
			case 16: angelDust();
			case 17: paracetamol();
			case 18: morphine();
			
			
			ORDERED DRUG LIST:
			"Cocaine", "Alcohol", "MDMA", "LSD", "Nicotine", "Nitrous Oxide", 
			"Mushrooms", "Heroin", "Crack", "Meth", "Ketamine", "DMT", "Weed", 
			"Steroids", "Speed", "Angel Dust", "Paracetamol", "Morphine" n
			
	
	
	void cocaine(int *youStats, int *enemyStats){
		youStat[0]; //health
		youStat[1]; //attack
		youStat[2]; //defence
		youStat[3]; //accuracy
		
	}
	*/
	

int main(){
	
	// Ask for player 1's name
	std::cout << "PLAYER ONE READY! What's your name?" << std::endl;
	getline(std::cin, char1.name);
	std::cout << "\n\nAlright then, "<< char1.name << "! Time to roll stats...\n" << std::endl;
	
	rerollStatNum = 3; //replenish roll supply
	rerollAttackNum = 3;
	char1.statRoll(); // Decides on char1 stats
	char1.attackRoll(); // Decides on char1 attacks
	
	std::cout << "\nTIME FOR PLAYER TWO! What's your name?" << std::endl;
	std::cin >> char2.name;
	std::cout << "\n\nAlright then, "<< char2.name << "! Time to roll stats...\n" << std::endl;
	
	rerollStatNum = 3;//replenish roll supply
	rerollAttackNum = 3;
	char2.statRoll(); // Decides on char2 stats
	char2.attackRoll(); // Decides on char 2 attacks


	// char1.newHealth( alcohol(char1.attack, char1.acc) );
	
		
	return 0;
}

/*
Cocaine:
1 x att dam
- 1/10 defence
60% accuracy

Alcohol:
1 x att damage
+ 1/5 defence
- 1/4 speed
- 1/10 health
100% acc

MDMA:
1 x att damage
+ 1/5 health
+ 2 speed
80% acc

LSD:
either
BAD TRIP!
5 x att damage!
health - 25
or
EXPLORE THE NATURE OF REALITY
full health
You are at peace with everything ( minus 4/15 attack )
50% accurate


Nicotine:
2 x att damage to enemy
1 x att damage to self
70% acc


Nitrous Oxide:
1 x att damage
100% acc

Mushrooms:
either
BAD TRIP! (40%)
3 x att damage!
health - 10
or
EXPLORE THE NATURE OF REALITY (40%)
health + 10
You are at peace with everything ( minus 2 attack )
or
BAD BATCH (20%)
health - 5/15
70% acc

Heroin:
2 x att damage
defence drops to 0

70% acc

Crack:
2 x att damage
- 1/10 health
90% acc

Meth:
NOT EVEN ONCE
(die)
50% accurate

Ketamine:
defence * 3
attack - 3
100% acc

DMT:
REROLL EVERYTHING
(maybe a side-narrative thing that goes off on a crazy tangent?)
80%

Weed:
1 x att damage
70% acc

Steroids:
raise damage + 1/10
raise defence + 1/10
health - 1/10

Speed:
1 x att damage 
accuracy + 1/5


Angel Dust:
4 x att damage
+ 10/15 health
- all defence
attack reduced to 1 after attack

Paracetamol:
+ 5/10 health

Morphine:
Full Health
Attack - 1/10
*/