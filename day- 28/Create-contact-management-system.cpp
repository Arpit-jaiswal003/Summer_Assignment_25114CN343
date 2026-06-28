#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phone;
    string email;

public:
    void addContact()
    {
        cin.ignore();

        cout << "Enter Name= ";
        getline(cin, name);

        cout << "Enter Phone Number= ";
        getline(cin, phone);

        cout << "Enter Email= ";
        getline(cin, email);

        cout << "Contact Added Successfully!\n";
    }

    void displayContact()
    {
        cout << "\n----- Contact Details -----";
        cout << "\nName = " << name;
        cout << "\nPhone = " << phone;
        cout << "\nEmail = " << email << endl;
    }

    void updateContact()
    {
        cin.ignore();

        cout << "Enter New Name= ";
        getline(cin, name);

        cout << "Enter New Phone Number= ";
        getline(cin, phone);

        cout << "Enter New Email= ";
        getline(cin, email);

        cout << "Contact Updated Successfully!\n";
    }
};

int main()
{
    Contact c;
    int choice;

    do
    {
        cout << "\n===== Contact Management System =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contact";
        cout << "\n3. Update Contact";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice= ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            c.addContact();
            break;
        case 2:
            c.displayContact();
            break;
        case 3:
            c.updateContact();
            break;
        case 4:
            cout << "Thank You!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 4);

    return 0;
}