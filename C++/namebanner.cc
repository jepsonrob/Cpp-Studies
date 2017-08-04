#include <iostream>
#include <string>

int main(){
	// Ask for the person's name
	std::cout << "Please Enter Your Name: ";
	// Read the Name
	std::string name;	// defines the string name
	std::cin >> name;	// reads into name
	
	//build the intended message
	const std::string greeting = "Hello," + name + "!";
		
	//build the second and fourth lines
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";
	

	//build the first and last lines
	const std::string first(second.size(), '*');
	
	// write it all
	std::cout << std::endl;
	std::cout << first << std::endl;
	std::cout << second << std::endl;
	std::cout << "* " << greeting << " *" << std::endl;
	std::cout << second << std::endl;
	std::cout << first << std::endl;
	
	return 0;
}

/* String constructor!
For example - 
	const std::string test(10, 'Filler')
in which the brackets identify the construction.
The 10 gives the amount, the 'filler' (second parameter) says what to fill it with.
*/
