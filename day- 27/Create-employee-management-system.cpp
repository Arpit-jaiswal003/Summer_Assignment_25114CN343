#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empId;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee ID = " << empId;
        cout << "\nName        = " << name;
        cout << "\nSalary      = " << salary << endl;
    }

    int getEmpId()
    {
        return empId;
    }
};

int main()
{
    Employee emp[100];
    int n = 0, choice, id, i;
    bool found;

    do
    {
        cout << "\n===== Employee Management System =====";
        cout << "\n1. Add Employee";
        cout << "\n2. Display All Employees";
        cout << "\n3. Search Employee";
        cout << "\n4. Exit";
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
                cout << "No employee records found.\n";
            }
            else
            {
                cout << "\nEmployee Records=\n";
                for (i = 0; i < n; i++)
                {
                    emp[i].display();
                }
            }
            break;

        case 3:
            cout << "Enter Employee ID to Search= ";
            cin >> id;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (emp[i].getEmpId() == id)
                {
                    emp[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Employee not found.\n";
            }
            break;

        case 4:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}