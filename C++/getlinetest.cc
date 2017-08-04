#include <iostream>
#include <string>

int main(){
	// Ask for the person's name
	std::cout << "Please Enter a Phrase of Some Kind: ";
	// Read the Name
	std::string name;	// defines the string name
	getline(std::cin, name);
	
	std::cout << "\"" << name << "\"" << " Is a really dumb phrase. You suck." << std::endl;
	
	return 0;
}

/* String constructor!
For example - 
	const std::string test(10, 'Filler')
in which the brackets identify the construction.
The 10 gives the amount, the 'filler' (second parameter) says what to fill it with.
*/
