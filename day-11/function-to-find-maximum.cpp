#include <iostream>
using namespace std;

// Function to find maximum
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter  num1 = ";
    cin >> num1;


    cout << "Enter  num2 = ";
    cin >> num2;

    cout << "Maximum number = " << maximum(num1, num2);

    return 0;
}