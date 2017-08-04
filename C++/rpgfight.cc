#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
// For usleep function
// #include <unistd.h>


using namespace std;
/*
	Order of sequence:
		- Attack, defend or special is selected.
		- You attack first, unless you choose to defend
		- Your attack triggers the loss of the enemies health
		- Defending is a whole decision thing, sets things like who's go it is first
		- Three different branches split from a decision.
		A - 
			1 - Attack:
				- Checks to see if enemy is defending
				- if it is, call enemy.defendAttack(), specifying damage
				else
				Calls the enemy.isAttacked() function, specifying damage.
			2 - Defend
				- 
				
*/


class hero {
public:
	int health = 10 + (rand() % 10);
	int attack = 3 + (rand() % 3);
	int defence = 3 + (rand() % 3);
	int critChance = 1 + (rand() % 3);
private:
	isAttacked(int attVal, int critChance){
		health = health - attVal;
	}
	
};
	 
	int main(){
		
		return 0;
	}
	
	
// Three-second delay
// usleep(3000000);
	
/*
	Step 1: Define the Problem:
	Make an RPG / Pokemon style fight!
	Choices: Attack, Special, Defend & escape. 
	Enemy: Attack, Defend or Special.
	Step 2: N/A (Define tools, targets & backup plan)
	Step 3: Break hard problems into easy ones:
	( Have an attack and defend system:
		- have stats (variables) rise and fall according to what happens )
	Modules needed:
		- User input
		Typing commands seems like the best solution. It would then be easy to implement a select words system later down the line.

		- Attack/defend system
		Ratings out of 10 -> 10 being the highest, 1 being the lowest.
	

	Regular attack  w/ Crit algorithm:
		(Enemy.Defence + Enemy.Health) - (You.Attack * You.specialMod) = Enemy.Health
	Regular attack algorithm:
		(Enemy.Defence + Enemy.Health) - (You.Attack) = Enemy.Health
	Special attack algorithm:
		(Enemy.Defence + Enemy.Health) - (You.Attack * You.specialMod) = Enemy.Health
	Special attack w/ Crit algorithm:
		(Enemy.Defence + Enemy.Health) - (You.Attack * You.specialMod) * (You.critMod) = Enemy.Health

		- Health and attack values
		Health starts at 10 (+ random number up to 10)
		Attack starts at 3 (+random number up to 5)




*/