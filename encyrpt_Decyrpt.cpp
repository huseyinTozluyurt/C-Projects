#include <iostream>
using namespace std;

string encyrptPassword(string password, int encyrptParameter) {
	int first = encyrptParameter / 100;
	int second = encyrptParameter % 100;
	//if parameter is 4356,first is 43 and the second is 56

	string encyrptedPassword = {};
	size_t size = password.length();
	for (int i = 0; i < size / 2; i++) {
		char element = (password[i] + first);
		encyrptedPassword += element;

	}
	for (int j = size / 2; j < size; j++) {
		encyrptedPassword += (password[j] + second);
	}
	return encyrptedPassword;
}

string decyrptPassword(string password, int encyrptParameter) {
	int first = encyrptParameter / 100;
	int second = encyrptParameter % 100;
	string decyrptPassword = {};
	size_t size = password.length();
	for (int i = 0; i < size / 2; i++) {
		decyrptPassword += (password[i] - first);
	}
	for (int j = size / 2; j < size; j++) {
		decyrptPassword += (password[j] - second);
	}
	return decyrptPassword;
}

int main() {
	string password;
	int parameter;
	cout << "Enter password: ";
	cin >> password;
	do {
		cout << "Enter 4 digit parameter(XXXX) such as 1423" << endl;
		cout << "Encyrpt parameter: ";
		cin >> parameter;

	} while (!(parameter > 1000 && parameter < 10000));
	string encyrptedPass = encyrptPassword(password, parameter);
	cout << "Encyrpted password: " << encyrptedPass << endl;
	string decyrptedPass = decyrptPassword(encyrptedPass, parameter);
	cout << "Decyrpted password: " << decyrptedPass;

	return 0;
}
