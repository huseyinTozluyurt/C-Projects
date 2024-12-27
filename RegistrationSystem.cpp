#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void login();
void registration();
void forgot();
int main() {
	int choice;

	cout << "\t\t\t_________________________________________________________________________\n\n\n";
	cout << "\t\t\t                          Welcome to the Login Page                      \n\n\n";
	cout << "\t\t\t                                      Menu                               \n\n\n\n\n";
	cout << "\t|Press 1 to LOGIN					|" << endl;
	cout << "\t|Press 2 to REGISTER					|" << endl;
	cout << "\t|Press 3 if you forgot your PASSWORD	|" << endl;
	cout << "\t|Press 4 to EXIT						|" << endl;
	cout << "\n\t\t\t Please Enter your choice: " << endl;
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		login();
		break;
	case 2:
		registration();
		break;
	case 3:
		forgot();
		break;
	case 4:
		cout << "\t\t\tThank you! \n\n";
	default:
		system("cls");
		cout << "\t\t\tPlease select from the options given above\n"<<endl;
		main();
	
	}

}
void login()
{
	int count;
	string userId, password, id, pass;
	system("cls");
	cout << "\t\t\tPlease enter the username and the password: " << endl;
	cout << "\t\t\tUsername: ";
	cin >> userId;
	cout << "\t\t\tPassword: ";
	cin >> password;

	ifstream input("records.txt");

	while (input >> id >> pass)
	{
		if (id == userId && pass == password)
		{
			count = 1;
			system("cls");
		}
	}
	input.close();
	if (count == 1)
	{
		cout << userId << "\nYour login is successfull \nThanks for logging in !"<<endl;
		main();
	}
	else
	{
		cout << "\nLOGGING ERROR\nPlease check your username and passwordn\n";
		main();
	}
}
void registration()
{
	string ruserId, rpassword, rId, rpass;
	system("cls");
	cout << "\t\t\tEnter the username: ";
	cin >> ruserId;
	cout << "\t\t\tEnter the password: ";
	cin >> rpassword;

	ofstream f1("records.txt",ios::app);
	f1 << ruserId << ' ' << rpassword<<endl;
	system("cls");
	cout << "\n\t\t\tRegistration is successfull! \n";
	main();	

}

void forgot(){
	int option;
	system("cls");
	cout << "\t\t\t Do you forgot the password? No worries \n";
	cout << "Press 1 to search your id by username"<<endl;
	cout << "Press 2 to go back to the main menu" << endl;
	cout << "\t\t\t Enter your choice";
	cin >> option;
	switch (option) 
		{
		case 1:
		{
			int count = 0;
			string suserId, sId, spass;
			cout << "\n\t\t\tEnter the username which you remembered: ";
			cin >> suserId;
			ifstream f2("records.txt");
			while (f2 >> sId >> spass)
			{
				if (sId == suserId)
				{
					count = 1;
				}
			}
			f2.close();
			if (count == 1)
			{
				cout << "\n\n Your account is found! \n";
				cout << "\n\nYour password is: " << spass;
				main();
			}
			else
			{
				cout << "\n\tSorry your account is not found! \n";
				main();
			}
			break;
		}
		case 2:
			main();
		default:
			cout << "\t\t\tWrong choice! Please try again. "<<endl;
			forgot();
	}

}
