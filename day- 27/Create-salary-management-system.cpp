#include <iostream>
#include <string>
using namespace std;

class Salary
{
private:
    int empId;
    string name;
    float basic, hra, da, deduction, netSalary;

public:
    void input()
    {
        cout << "Enter Employee ID= ";
        cin >> empId;

        cin.ignore();
        cout << "Enter Employee Name= ";
        getline(cin, name);

        cout << "Enter Basic Salary= ";
        cin >> basic;

        cout << "Enter HRA= ";
        cin >> hra;

        cout << "Enter DA= ";
        cin >> da;

        cout << "Enter Deduction= ";
        cin >> deduction;

        netSalary = basic + hra + da - deduction;
    }

    void display()
    {
        cout << "\nEmployee ID = " << empId;
        cout << "\nName        = " << name;
        cout << "\nBasic Salary= " << basic;
        cout << "\nHRA         = " << hra;
        cout << "\nDA          = " << da;
        cout << "\nDeduction   = " << deduction;
        cout << "\nNet Salary  = " << netSalary << endl;
    }
};

int main()
{
    Salary emp[100];
    int n = 0, choice;

    do
    {
        cout << "\n===== Salary Management System =====";
        cout << "\n1. Add Salary Record";
        cout << "\n2. Display All Records";
        cout << "\n3. Exit";
        cout << "\nEnter your choice= ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp[n].input();
            n++;
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found.\n";
            }
            else
            {
                cout << "\nSalary Records=\n";
                for (int i = 0; i < n; i++)
                {
                    emp[i].display();
                }
            }
            break;

        case 3:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}