// Need to automate userinput with error checking
// Create seprate files for organize (DONE)
// Future functions for linked list adjustment (InsertAtHead and deleteFromEnd COMPLETE) (STILL NEED OTHER FUNCTIONS)
// Read and write to text file
// Use of boolens to simpify my expressions
#include <iostream>
#include "GlassClassNode.h"
using namespace std;

int main () {

	GlassLList list;

	cout << "Welcome!" << endl;
	cout << "Please enter your five digit password: " << endl;
	string userPass;
	
	// User enters password
	while(userPass != "75321")
	{
		cin.clear();
		getline(cin, userPass);
		if(cin.fail() || cin.bad())
		{
			cout << "ERROR CIN MAIN";
			cin.clear();
			cin.ignore();
		}
		if(userPass != "75321")
		{
			cout << "That is not the correct password. \nPlease try agian: " << endl;
		}
		else if(userPass == "75321")
		{
			break;
		}
	}
	
	//Glass inventory navigation
	while(userPass == "75321")
	{
		int userNum = 0;
		string tglassName;
    	string taddress;
    	string troomLoc;
    	string tglassType;
    	string thardware;
    	int tdueDate;
		int pos;
    	double tx,ty,tz;

		cout << "(Add glass to the start of the list [1])\n(Delete glass from the end of the list [2])\n(View glass list [3])\n(EXIT [4])\n" << 
			    "(View size of list [5])\n(Insert glass at a position in the list [6])\n" << "(Delete glass info at a position in the list [7])" << endl;
		cin >> userNum;

		switch(userNum)
		{
			case 1:
			//Enter glass at the start
				
				cin.clear();
				cin.ignore();
				cout << "Please enter the glass name: " << endl;
				getline(cin, tglassName);
				cout << "Please enter the glass address: " << endl;
				getline(cin, taddress);
				cout << "Please enter the glass room location: " << endl;
				getline(cin, troomLoc);
				cout << "Please enter the glass glass type: " << endl;
				getline(cin, tglassType);
				cout << "Please enter the glass hardware: " << endl;
				getline(cin, thardware);
				cout << "Please enter the glass due date: " << endl;
				cin >> tdueDate;
				cout << "Please enter the glass x, y, and z measurements: " << endl;
				cin >> tx;
				cin >> ty;
				cin >> tz;
				
				list.insertAtHead(tglassName, taddress, troomLoc, tglassType, thardware, tdueDate, tx, ty, tz);

				cin.clear();
				cin.ignore();
				cout << "- Glass Info has been added - " << endl;
				
				break;
			case 2:
			//Delete obj from the end of the list
				list.deleteFromEnd();
				break;
			case 3:
			//Print
				list.print();
				break;
			case 4:
			//Exit
				cout << "You have exited the program." << endl;
				userPass = "END OF STATEMENT";
				break;
			case 5:
			//Size of list
				cout << "The size of your list is: " << list.SizeOfLList() << endl;
				break;
			case 6:
			//Insert at position
				cin.clear();
				cin.ignore();
				cout << "Please enter the position you want to add the new glass too: " << endl;
				cin >> pos;
				cin.clear();
				cin.ignore();
				cout << "Please enter the glass name: " << endl;
				getline(cin, tglassName);
				cout << "Please enter the glass address: " << endl;
				getline(cin, taddress);
				cout << "Please enter the glass room location: " << endl;
				getline(cin, troomLoc);
				cout << "Please enter the glass type: " << endl;
				getline(cin, tglassType);
				cout << "Please enter the glass hardware: " << endl;
				getline(cin, thardware);
				cout << "Please enter the glass due date: " << endl;
				cin >> tdueDate;
				cout << "Please enter the glass x, y, and z measurements: " << endl;
				cin >> tx;
				cin >> ty;
				cin >> tz;
				
				list.insertAtposition(pos, tglassName, taddress, troomLoc, tglassType, thardware, tdueDate, tx, ty, tz);

				cin.clear();
				cin.ignore();
				cout << "- Glass Info has been added - " << endl;
				break;
			case 7:
				cin.clear();
				cin.ignore();
				cout << "Please enter the position you want to delete from the glass list: " << endl;
				cin >> pos;

				list.deleteAtPos(pos);

				cin.clear();
				cin.ignore();

				cout << "- Glass Info has been deleted -" << endl;
				break;
			default:
			//If ERROR
				cout << "ERROR (Main - Switch Statment)" << endl;
				userPass = "END OF STATEMENT";
		}
	}


	return 0;
}