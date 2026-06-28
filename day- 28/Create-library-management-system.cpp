#include <iostream>
#include <string>
using namespace std;

class Library
{
private:
    int bookId;
    string bookName;
    string author;
    bool issued;

public:
    void addBook()
    {
        cout << "Enter Book ID= ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name= ";
        getline(cin, bookName);

        cout << "Enter Author Name= ";
        getline(cin, author);

        issued = false;
        cout << "Book Added Successfully!\n";
    }

    void displayBook()
    {
        cout << "\nBook ID = " << bookId;
        cout << "\nBook Name = " << bookName;
        cout << "\nAuthor = " << author;
        cout << "\nStatus = " << (issued ? "Issued" : "Available") << endl;
    }

    void issueBook()
    {
        if (!issued)
        {
            issued = true;
            cout << "Book Issued Successfully!\n";
        }
        else
        {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook()
    {
        if (issued)
        {
            issued = false;
            cout << "Book Returned Successfully!\n";
        }
        else
        {
            cout << "Book was not issued.\n";
        }
    }
};

int main()
{
    Library book;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Book";
        cout << "\n3. Issue Book";
        cout << "\n4. Return Book";
        cout << "\n5. Exit";
        cout << "\nEnter your choice= ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            book.addBook();
            break;
        case 2:
            book.displayBook();
            break;
        case 3:
            book.issueBook();
            break;
        case 4:
            book.returnBook();
            break;
        case 5:
            cout << "Thank you!\n";
            break;
        default:
            cout << "Invalid Choice!\n";
        }
    } while (choice != 5);

    return 0;
}