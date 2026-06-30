
// RECIPE MANAGEMENT SYSTEM

#include <iostream>
#include <string>
using namespace std;

string recipeName[100];
string ingredient[100];
int total = 0;


void addRecipe()
{
    cin.ignore();

    cout << "Enter Recipe Name= ";
    getline(cin, recipeName[total]);

    cout << "Enter Main Ingredient= ";
    getline(cin, ingredient[total]);

    total++;

    cout << "Recipe Added Successfully!\n";
}


void displayRecipes()
{
    if (total == 0)
    {
        cout << "No recipes available.\n";
        return;
    }

    cout << "\n----- Recipe List -----\n";

    for (int i = 0; i < total; i++)
    {
        cout << "\nRecipe " << i + 1 << endl;
        cout << "Name       = " << recipeName[i] << endl;
        cout << "Ingredient = " << ingredient[i] << endl;
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Recipe Management System =====";
        cout << "\n1. Add Recipe";
        cout << "\n2. Display Recipes";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addRecipe();
            break;

        case 2:
            displayRecipes();
            break;

        case 3:
            cout << "Program Ended.";
            break;

        default:
            cout << "Invalid Choice!";
        }

    } while (choice != 3);

    return 0;
}