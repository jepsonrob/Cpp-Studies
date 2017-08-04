#include <iostream>
#include <string>

class person{
	public:
		std::string firstname; 
		std::string secondname;
		int birthYear;
	};

int main(){
	
	person person1;
	
	// Ask for the person's name
	std::cout << "Please Enter your First Name: ";
	// Get the Name
	std::cin >> person1.firstname;
	// Ask for lastname
	std::cout << "Please Enter your Last Name: ";
	// Get last name
	std::cin >> person1.secondname;
	// Ask year of birth
	std::cout << "What Year were you Born?" << std::endl;
	// Get year of birth
	std::cin >> person1.birthYear;
	int age = 2017 - person1.birthYear;
	
	std::cout << "Hey there, " << person1.firstname << " " << person1.secondname << ". You are " << age << " years old."; << std::endl;
	
	return 0;
}

/* String constructor!
For example - 
	const std::string test(10, 'Filler')
in which the brackets identify the construction.
The 10 gives the amount, the 'filler' (second parameter) says what to fill it with.
*/
