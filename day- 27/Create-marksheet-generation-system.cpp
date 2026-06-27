#include <iostream>
#include <string>
using namespace std;

class Marksheet
{
private:
    int rollNo;
    string name;
    int marks[5];
    int total;
    float percentage;
    char grade;

public:
    void input()
    {
        cout << "Enter Roll Number= ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Student Name= ";
        getline(cin, name);

        total = 0;
        cout << "Enter marks of 5 subjects=\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << "= ";
            cin >> marks[i];
            total += marks[i];
        }

        percentage = total / 5.0;

        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 75)
            grade = 'B';
        else if (percentage >= 60)
            grade = 'C';
        else if (percentage >= 40)
            grade = 'D';
        else
            grade = 'F';
    }

    void display()
    {
        cout << "\n========== MARKSHEET ==========\n";
        cout << "Roll Number = " << rollNo << endl;
        cout << "Name        = " << name << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << " Marks = " << marks[i] << endl;
        }

        cout << "Total Marks = " << total << "/500" << endl;
        cout << "Percentage  = " << percentage << "%" << endl;
        cout << "Grade       = " << grade << endl;
    }
};

int main()
{
    Marksheet student;

    student.input();
    student.display();

    return 0;
}