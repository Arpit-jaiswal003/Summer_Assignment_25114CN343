#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int start, end;

    cout << "Enter start of range: ";
    cin >> start;

    cout << "Enter end of range: ";
    cin >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    return 0;
}