#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string Name;
    int usableMoney;
    string shoppingItems;
    int totalPrice = 0;
    string gender;
};

class ProductList {
public:
    unsigned short toyoto = 3000;
    unsigned short wolwo = 4000;
    unsigned short bmw = 5000;
    unsigned short tesla = 10000;
};

void productListShow(string* liste, int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        if (i == size - 1) {
            cout << liste[i] << " ]" << endl;
            break;
        }
        cout << liste[i] << ", ";
    }
}

int main() {
    string name;
    int money;
    string gender;
    int amount_of_products = 0;
    int billing = 0;

    cout << "*******************************************************************************************************************" << endl;
    cout << "***************************************************Welcome to the VivaCars*****************************************\n\n\n";
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Welcome to the Viva Cars Mr./Mrs." << name << endl;
    cout << "Please enter the personal information forum" << endl;
    cout << "Amount of money allocatable: ";
    cin >> money;

    do {
        cout << "Gender: ";
        cin >> gender;
    } while (gender != "Male" && gender != "Female");

    Person client;
    client.Name = name;
    client.usableMoney = money;
    client.gender = gender;

    cout << "Amount of products: ";
    cin >> amount_of_products;
    string* productList = new string[amount_of_products];
    ProductList menu;

    cout << "Choose a product below: " << endl;
    cout << "1- Toyoto: " << menu.toyoto << "\n2- BMW: " << menu.bmw << "\n3- Wolwo: " << menu.wolwo << "\n4- Tesla: " << menu.tesla << endl;

    for (int i = 0; i < amount_of_products; i++) {
        string item;
        cout << "Choose product " << i + 1 << ": ";
        cin >> item;

        bool validItem = true;

        if (item == "Tesla") {
            client.totalPrice += menu.tesla;
            productList[i] = "Tesla";
            cout << "Tesla is added to the shopping cart." << endl;
            cout << "Total Price: " << client.totalPrice << endl;
            cout << "Shopping Cart: " << productList[i] << endl;
        }
        else if (item == "Reset") {
            client.totalPrice = 0;
            i = -1; 
            continue;
        }
        else if (item == "BMW") {
            client.totalPrice += menu.bmw;
            productList[i] = "BMW";
            cout << "BMW is added to the shopping cart." << endl;
            cout << "Total Price: " << client.totalPrice << endl;
            cout << "Shopping Cart: " << productList[i] << endl;
        }
    
        else if (item == "Toyoto") {
            client.totalPrice += menu.toyoto;
            productList[i] = "Toyoto";
            cout << "Toyoto is added to the shopping cart." << endl;
            cout << "Total Price: " << client.totalPrice << endl;
            cout << "Shopping Cart: " << productList[i] << endl;
        }
        else if (item == "Wolwo") {
            client.totalPrice += menu.wolwo;
            productList[i] = "Wolwo";
            cout << "Wolwo is added to the shopping cart." << endl;
            cout << "Total Price: " << client.totalPrice << endl;
            cout << "Shopping Cart: " << productList[i] << endl;
        }
        else {
            cout << "Invalid Car name, try again: " << endl;
            i -= 1; // Decrease index to retry current iteration
            validItem = false;
        }

        if (validItem && client.usableMoney < client.totalPrice) {
            short element;
            cout << "You have exceeded your budget." << endl;
            cout << "Shopping list: " << endl;
            productListShow(productList, amount_of_products);

            do {
                cout << "Choose an element to replace (0 to " << amount_of_products - 1 << "): ";
                cin >> element;
            } while (element < 0 || element >= amount_of_products);

            // Adjust total price by removing the selected item
            if (productList[element] == "Wolwo")
                client.totalPrice -= menu.wolwo;
            else if (productList[element] == "Tesla")
                client.totalPrice -= menu.tesla;
            else if (productList[element] == "Toyoto")
                client.totalPrice -= menu.toyoto;
            else if (productList[element] == "BMW")
                client.totalPrice -= menu.bmw;


            string product;
            cout << "Enter new product: ";
            cin >> product;

            if (product == "Wolwo") {
                client.totalPrice += menu.wolwo;
                productList[element] = "Wolwo";
            }
            else if (product == "BMW") {
                client.totalPrice += menu.bmw;
                productList[element] = "BMW";
            }

            else if (product == "Tesla") {
                client.totalPrice += menu.tesla;
                productList[element] = "Tesla";
            }
            else if (product == "Toyoto") {
                client.totalPrice += menu.toyoto;
                productList[element] = "Toyoto";
            }
            else {
                cout << "Invalid Car name, try again." << endl;
                i -= 1; 
                continue;
            }

            cout << "Total Price: " << client.totalPrice << endl;
            cout << "Shopping Cart: " << productList[element] << endl;
        }
    }

    cout << "You have bought:\n";
    for (int i = 0; i < amount_of_products; i++) {
        cout << productList[i] << "\t";
    }

    short remaining = client.usableMoney - client.totalPrice;
    cout << endl << "Remaining amount of money is: " << remaining << " dollars.";

    delete[] productList;
    productList = nullptr;

    return 0;
}
