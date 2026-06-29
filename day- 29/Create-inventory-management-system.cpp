#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Item items[100];
    int n = 0, choice, id, i;
    bool found;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice= ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Item ID= ";
                cin >> items[n].id;
                cout << "Enter Item Name= ";
                cin >> items[n].name;
                cout << "Enter Quantity= ";
                cin >> items[n].quantity;
                cout << "Enter Price= ";
                cin >> items[n].price;
                n++;
                cout << "Item Added Successfully!\n";
                break;

            case 2:
                if (n == 0) {
                    cout << "Inventory is Empty.\n";
                } else {
                    cout << "\nID\tName\tQuantity\tPrice\n";
                    for (i = 0; i < n; i++) {
                        cout << items[i].id << "\t"
                             << items[i].name << "\t"
                             << items[i].quantity << "\t\t"
                             << items[i].price << endl;
                    }
                }
                break;

            case 3:
                cout << "Enter Item ID to Search= ";
                cin >> id;
                found = false;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        cout << "Item Found=\n";
                        cout << "Name= " << items[i].name << endl;
                        cout << "Quantity= " << items[i].quantity << endl;
                        cout << "Price= " << items[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Item Not Found!\n";
                break;

            case 4:
                cout << "Enter Item ID= ";
                cin >> id;
                found = false;

                for (i = 0; i < n; i++) {
                    if (items[i].id == id) {
                        cout << "Enter New Quantity= ";
                        cin >> items[i].quantity;
                        cout << "Quantity Updated Successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Item Not Found!\n";
                break;

            case 5:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}