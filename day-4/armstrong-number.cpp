#include <iostream>
using namespace std;


int main()
{
    int n ;
    cout<<"Enter the number = ";
    cin>>n;
    int temp = n;
    int sum = 0;

    while (n > 0) {
        int rem = n % 10;
        sum = (sum) + (rem * rem * rem);
        n = n / 10;
    }

    
    if (temp == sum) {
        cout << ("Yes It is Armstrong Number");
    }
    else {
        cout << ("No It is not an Armstrong Number");
    }
    return 0;
}