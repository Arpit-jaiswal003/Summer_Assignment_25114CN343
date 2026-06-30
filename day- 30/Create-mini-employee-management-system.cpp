#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of employees= ";
    cin >> n;

    int empID[100];
    string empName[100];
    float salary[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;

        cout << "Employee ID= ";
        cin >> empID[i];
        cin.ignore();

        cout << "Employee Name= ";
        getline(cin, empName[i]);

        cout << "Salary= ";
        cin >> salary[i];
    }

   
    cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        cout << "Employee ID   = " << empID[i] << endl;
        cout << "Employee Name = " << empName[i] << endl;
        cout << "Salary        = " << salary[i] << endl;
    }

    return 0;
}