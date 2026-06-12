#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;

    cout << "Enter the number =  ";
    cin >> n;

    fibonacci(n);

    return 0;
}