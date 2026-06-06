#include <iostream>
using namespace std;
long power(int x, unsigned n)
{

    long long pow = 1;

    
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }

    return pow;
}
int main(){
int x,n;
cout<<"Enter the number = ";
cin>> x;
cout<<"power raised to = ";
cin>> n;

 int result = power(x, n);
    cout << result << endl;

    return 0;
    

}