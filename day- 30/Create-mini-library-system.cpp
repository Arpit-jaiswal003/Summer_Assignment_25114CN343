#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of books= ";
    cin >> n;

    int bookID[100];
    string title[100];
    string author[100];

   
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;

        cout << "Book ID= ";
        cin >> bookID[i];
        cin.ignore();

        cout << "Book Title= ";
        getline(cin, title[i]);

        cout << "Author Name= ";
        getline(cin, author[i]);
    }

    cout << "\n----- Library Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Book ID     = " << bookID[i] << endl;
        cout << "Book Title  = " << title[i] << endl;
        cout << "Author Name = " << author[i] << endl;
    }

    return 0;
}