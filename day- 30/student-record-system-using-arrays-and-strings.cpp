#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of students= ";
    cin >> n;

    string name[100];
    int roll[100];
    float marks[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Roll Number= ";
        cin >> roll[i];

        cin.ignore();

        cout << "Name= ";
        getline(cin, name[i]);

        cout << "Marks= ";
        cin >> marks[i];
    }


    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll Number = " << roll[i] << endl;
        cout << "Name        = " << name[i] << endl;
        cout << "Marks       = " << marks[i] << endl;
    }

    return 0;
}