#include <iostream>
#include <string>

int main(){
	// Ask for the person's name
	std::cout << "Please Enter Your Name: ";
	// Read the Name
	std::string name;	// defines the string name
	std::cin >> name;	// reads into name
	
	//write a greeting!
	std::cout << "Greetings, " << name << "! \nYou are a massive piece of shit, you know!" << std::endl;
	
	return 0;
}