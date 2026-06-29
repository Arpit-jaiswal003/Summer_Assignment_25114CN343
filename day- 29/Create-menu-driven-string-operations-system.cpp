#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str1, str2;
    int choice;

    cout << "Enter first string= ";
    getline(cin, str1);

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Display String" << endl;
        cout << "2. Find Length" << endl;
        cout << "3. Concatenate String" << endl;
        cout << "4. Reverse String" << endl;
        cout << "5. Compare Strings" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice= ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "String= " << str1 << endl;
                break;

            case 2:
                cout << "Length = " << str1.length() << endl;
                break;

            case 3:
                cout << "Enter second string= ";
                getline(cin, str2);
                cout << "Concatenated String= " << str1 + str2 << endl;
                break;

            case 4: {
                string temp = str1;
                reverse(temp.begin(), temp.end());
                cout << "Reversed String= " << temp << endl;
                break;
            }

            case 5:
                cout << "Enter second string= ";
                getline(cin, str2);
                if (str1 == str2)
                    cout << "Strings are Equal." << endl;
                else
                    cout << "Strings are Not Equal." << endl;
                break;

            case 6:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 6);

    return 0;
}