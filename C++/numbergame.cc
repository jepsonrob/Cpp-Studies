#include <iostream>

using namespace std;

int multiply(int a, int b){
	int c = a * b;
    return c;
}
    
int subtract(int a,int b){
	int c = a - b;
	return c;    
}
	
int add(int a, int b){
    int c = a + b;
	return c;
}
    
int divide(int a, int b){
    int c = a / b;
	return c;
}

int getIntegerFromUser()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    return a;
}

int chooser(a,b){
	int randInt = randomNumGen() % 4 + 1;
    if (rand == 1)
        num = multiply(a, b)
        op = '*'
    elif rand == 2:
        num = divide(a, b)
        op = '/'
    elif rand == 3:
        num = add(a, b)
        op = '+'
    elif rand == 4:
        num = subtract(a, b)
        op = '-'
    chosen = [num, op]
    return chosen
        
}

int main(){
	cout << "\nWelcome to this shitty little command-line game! \n" <<
"To play, you must give the computer 3 integers - NOT ZERO!\n" <<
"The computer then processes them randomly, and you need to guess what it did!\n" <<
"The operators the computer uses are *, /, - and +. Good luck!" << endl;
	int x = getIntegerFromUser();
	int y = getIntegerFromUser();
	int z = getIntegerFromUser();
    if (x == 0 || y == 0 || z == 0){
		cout << "I told you not to enter zero, you little bitch. Ugh." << endl;
		return 1
	}

	
	return 0;
}
