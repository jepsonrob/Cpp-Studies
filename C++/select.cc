// This is C++ code that creates a simple options menu to demontrate the use of 'do-while' loops

#include <iostream> // library that contains basic input output functions

using namespace std;

int main()
{
  int option; // user's entered option will be saved in this variable
  do //do-while loop starts here.that display menu again and again until user select to exit program
  { 
     //Displaying Options for the menu
     cout << "1) Display Top Web Browsers List " << endl;
     cout << "2) Display Top Websites Name " << endl;
     cout << "3) Display Top Smartphone Brands List" << endl;
     cout << "4) Exit Program " << endl;
     //Prompting user to enter an option according to menu
     cout << "Please select an option : ";
     cin >> option;  // taking option value as input and saving in variable "option"
     
     if(option == 1) // Checking if user selected option 1
     {
       //Display some web browsers list
        cout << "Mozilla FireFox" << endl;
        cout << "Google Chrome" << endl;
        cout << "Microsoft Internet Explorer" << endl;
        cout << "Apple Safari" << endl;
     }
     else if(option == 2) // Checking if user selected option 2
     {
       //Displaying top sites
        cout << "Google" << endl;
        cout << "Facebook" << endl;
        cout << "Youtube" << endl;
        cout << "Yahoo" << endl;
     }
     else if(option == 3) // Checking if user selected option 3
     {
       //displaying top smartphone brands
        cout << "Apple" << endl;
        cout << "Samsung" << endl;
        cout << "HTC" << endl;
     }
     else if(option == 4) // Checking if user selected option 4
     {
       cout << "Terminating Program" << endl;
     }
     else //if user has entered invalid choice (other than 1,2,3 or 4)
     {
       //Displaying error message
       cout << "Invalid Option entered" << endl;
     }
  }
  while(option != 4);  //condition of do-while loop
   
   return 0;
}