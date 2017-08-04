#include <iostream>
#include <string>

int main(){
	/*
	
	THIS IS SOME BASIC POINTER STUFFS!
	
	int x;
	int *pointer; // This is a pointer! It's a variable that stores the memory address of an integer (as it has been established as an int.)
	std::cout << "Please enter a number." << std::endl;
	std::cin >> x;
	std::cout << "Memory address of variable is: " << &x << std::endl;
	std::cout << "Please enter another number." << std::endl;
	std::cin >> x;
	pointer = &x;
	std::cout << "Value you just entered is: " << *pointer << std::endl;
	std::cout << "This time is has been shown to you through pointing, though. So that's cool!" << std::endl;
	
	*/
	std::cout << "Dynamic Memory! What is it? What does it do? Let's find out!" << std::endl;
	std::cout << "(Press enter to continue!)" << std::endl;
	std::string nothing;
	std::cin.ignore(); //Let's use this as a way of 'any key to continue'!
	std::cout << "In a C++ program, memory is divided into two parts: the STACK and the HEAP. What would you like to know more about?" << endl;
	std::cin >> nothing >> endl;
	if (nothing == "STACK"){
		// Explain stacks here
		else if (nothing == "HEAP"){
			//explain Heaps here!
		} else {
			std::cout << "Well seeing as you didn't pick either properly, let's all go home." << std::endl;
			return 0;
		}
	}
	
	
	
	return 0;
}