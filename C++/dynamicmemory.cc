#include <iostream>
#include <string>

int main(){

	std::cout << "Dynamic Memory! What is it? What does it do? Let's find out!" << std::endl;
	std::cout << "(Press enter to continue!)" << std::endl;
	std::string nothing;
	std::cin.ignore(); //Let's use this as a way of 'any key to continue'!
	std::cout << "In a C++ program, memory is divided into two parts: the STACK and the HEAP. What would you like to know more about?" << std::endl;
	std::cin >> nothing;
	if (nothing == "STACK"){
		std::cout << "The STACK: all your local variables are held in the memory of the stack. " << std::endl;
		// Explain stacks here
	} else if (nothing == "HEAP"){
		//explain Heaps here!
			std::cout << "The HEAP: is unused program memory that can be used when he program runs to dynamically allocate the memory." << std::endl;
			std::cin.ignore();
			std::cout << "You can allocate memory at run time within the HEAP for the variable of given type using the NEW operator, which returns the address of the space allocated." << std::endl;
		} else {
			std::cout << "Well seeing as you didn't pick either properly, let's all go home." << std::endl;
			return 0;
		}
	return 0;
}