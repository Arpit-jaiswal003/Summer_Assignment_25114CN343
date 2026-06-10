#include <iostream>
#include <iomanip> // for setw
using namespace std;

int main() {
    int n;

    cout << "Enter number of rows =  ";
    if (!(cin >> n) || n <= 0) { 
        cout << "Invalid input. Please enter a positive integer.\n";
        return 1;
    }

    for (int i = 1; i <= n; i++) {

        cout << setw(n - i + 1) << "";

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

       
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }

        cout << "\n";
    }

    return 0;
}
