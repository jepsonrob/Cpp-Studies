#include <iostream>
#include <string>

/*

*/


int main(){
	std::cout << "Please enter your name!" << std::endl;
	std::string name;
	std::cin >> name;
	std::string greeting = "Hello there, " + name + "!";
	int greetingSize = greeting.size();
	
	std::cout << "What padding size would you like?" << std::endl;
	int padding;
	std::cin >> padding;
	int fullLength = greetingSize + 2 + (padding * 2); //fullLength is the size of the greeting, padding and 2 for each end/start star.
	const std::string stars(fullLength, '*'); // Make the whole length of stars.
	
	int fullHeight = (padding * 2) + 3;
	int greetingLine = (fullHeight - 1) / 2;
	const std::string paddingSpaces(padding, ' ');
	int emptySpace = fullLength - 2;
	const std::string spaces(emptySpace, ' ');
	
	
	for (int i = 0; i < fullHeight; i++){
		
		if (i == 0 || i == (fullHeight - 1)){
			std::cout << stars << std::endl;
		} else if (i == greetingLine){
			std::cout << "*" << paddingSpaces << greeting << paddingSpaces << "*" << std::endl;
		} else {
		std::cout << '*' << spaces << "*" << std::endl;
		}
	}
	
	return 0;
	
}