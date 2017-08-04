#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
	
	int main()	{ 
		cout << "What is your name?" << endl;
		string name;
		cin >> name;
		string words = "Your name is " ;
			
		ofstream writer("savetext.txt");
		if (! writer){
			cout << "Error saving file" << endl;
			return -1;
		} else {
			writer << words << name << endl;
			writer.close();
			return 0;
		}
	}