#include <iostream>
using namespace std;

int main() {

	int quant;
	int choice;

	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	int Totalrooms = 0, Totalpasta = 0, Totalburger = 0, Totalnoodles = 0, Totalshake = 0, Totalchicken = 0;

	cout << "\n\t Quantity of items we have";
	cout << "\nRooms available: ";
	cin >> Qrooms;
	cout << "\nQuantity of pasta: ";
	cin >> Qpasta;
	cout << "\nQuantity of burger: ";
	cin >> Qburger;
	cout << "\nQuantity of noodles: ";
	cin >> Qnoodles;
	cout << "\nQuantity of shake: ";
	cin >> Qshake;
	cout << "\nQuantity of chicken-roll";
	cin >> Qchicken;

	m:

	cout << "\n\t\t\tPlease select from the menu options";
	cout << "\n\n1-)Rooms";
	cout << "\n2-)Pasta";
	cout << "\n3-)Burger";
	cout << "\n4-)Noodles";
	cout << "\n5-)Shake";
	cout << "\n6-)Chicken-roll";
	cout << "\n7-)Information regarding sales and collection ";
	cout << "\n8-)Exit";
	cout << "\n\nPlease enter your choice: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "\n\nEnter the number of rooms you want: ";
		cin >> quant;
		if (Qrooms-Srooms >= quant)
		{
			Srooms += quant;
			Totalrooms += (quant*1200);
			cout << "\n\n\t\t" << quant << "room/rooms have been allocated to you!";
			}
		else
		{
			cout << "\nOnly" << Qrooms-Srooms << "Rooms remaining in the hotel";
			break;
		}
	case 2:
		cout << "\n\nEnter the pasta quantity: ";
		cin >> quant;
		if (Qpasta-Spasta >= quant)
		{
			Spasta += quant;
			Totalpasta += (quant * 250);
			cout << "\n\n\t\t" << quant << "Pasta is the order";

		}
		else
		{
			cout << "\nOnly" << Qpasta-Spasta << "Pasta remaining in the hotel";
			break;
		}
	case 3:
		cout << "\n\nEnter the burger quantity: ";
		cin >> quant;
		if (Qburger - Sburger >= quant)
		{
			Sburger += quant;
			Totalburger += (quant * 120);
			cout << "\n\n\t\t" << quant << "Burger is the order!";
		}
		else
		{
			cout << "\nOnly" << Qburger - Sburger << "Burger remaining in the hotel";
			break;
		}
	case 4:
		cout << "\n\nEnter the noodles quantity: ";
		cin >> quant;
		if (Qnoodles - Snoodles >= quant)
		{
			Snoodles += quant;
			Totalnoodles += (quant * 150);
			cout << "\n\n\t\t" << quant << "Noodles is the order!";
		}
		else
		{
			cout << "\nOnly" << Qnoodles - Snoodles << "Noodles remaining in the hotel";
			break;
		}
	case 5:
		cout << "\n\nEnter the shake quantity: ";
		cin >> quant;
		if (Qshake - Sshake >= quant)
		{
			Sshake += quant;
			Totalshake += (quant * 120);
			cout << "\n\n\t\t" << quant << "Shake is the order!";
		}
		else
		{
			cout << "\nOnly" << Qshake - Sshake << "Shake remaining in the hotel";
			break;
		}
	case 6:
		cout << "\n\nEnter the Chicken-roll quantity: ";
		cin >> quant;
		if (Qchicken - Schicken >= quant)
		{
			Schicken += quant;
			Totalchicken += (quant * 165);
			cout << "\n\n\t\t" << quant << "Chicken-roll is the order!";
		}
		else
		{
			cout << "\nOnly" << Qchicken - Schicken << "Chicken-roll remaining in the hotel";
			break;
		}
	case 7:
		cout << "\n\t\tDetails of sales and collection";
		cout << "\n\nNumber of rooms we had:" << Qrooms;	
		cout << "\n\nNumber of rooms we gave for rent:" << Srooms;
		cout << "\n\nRemaining rooms: " << Qrooms-Srooms;
		cout << "\n\nTotal rooms collection for the day:" << Totalrooms;

		cout << "\n\nNumber of pastas we had:" << Qpasta;
		cout << "\n\nNumber of pastas we sold:" << Spasta;
		cout << "\n\nRemaining pastas: " << Qpasta - Spasta;
		cout << "\n\nTotal pasta collection for the day:" << Totalpasta;

		cout << "\n\nNumber of burgers we had:" << Qburger;
		cout << "\n\nNumber of burgers we sold:" << Sburger;
		cout << "\n\nRemaining burgers: " << Qburger - Sburger;
		cout << "\n\nTotal burger collection for the day:" << Totalburger;

		cout << "\n\nNumber of noodles we had:" << Qnoodles;
		cout << "\n\nNumber of noodles we sold:" << Snoodles;
		cout << "\n\nRemaining noodles: " << Qnoodles - Snoodles;
		cout << "\n\nTotal noodles collection for the day:" << Totalnoodles;

		cout << "\n\nNumber of shake we had:" << Qshake;
		cout << "\n\nNumber of shake we sold:" << Sshake;
		cout << "\n\nRemaining shake: " << Qshake - Sshake;
		cout << "\n\nTotal shake collection for the day:" << Totalshake;

		cout << "\n\nNumber of Chicken-rolls we had:" << Qchicken;
		cout << "\n\nNumber of Chicken-rolls we sold:" << Schicken;
		cout << "\n\nRemaining Chicken-rolls: " << Qchicken - Schicken;
		cout << "\n\nTotal Cicken-rolls collection for the day:" << Totalchicken;

		cout << "\n\nTotal Collection Price of the day: " << Totalrooms + Totalburger + Totalchicken + Totalnoodles + Totalpasta + Totalshake<<"\n\n";
	case 8:
		exit(0);

	default:
		cout << "\nPlease select the numbers mentioned above!";
		goto m;
	}
	return 0;
}
