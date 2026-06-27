#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number= ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name= ";
        getline(cin, name);

        cout << "Enter Marks= ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll Number = " << rollNo;
        cout << "\nName        = " << name;
        cout << "\nMarks       = " << marks << endl;
    }

    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Student s[100];
    int n = 0, choice, roll, i;
    bool found;

    do
    {
        cout << "\n===== Student Record Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter your choice= ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s[n].input();
            n++;
            break;

        case 2:
            if (n == 0)
            {
                cout << "No records found.\n";
            }
            else
            {
                cout << "\nStudent Records=\n";
                for (i = 0; i < n; i++)
                {
                    s[i].display();
                }
            }
            break;

        case 3:
            cout << "Enter Roll Number to Search= ";
            cin >> roll;
            found = false;

            for (i = 0; i < n; i++)
            {
                if (s[i].getRollNo() == roll)
                {
                    s[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Student not found.\n";
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