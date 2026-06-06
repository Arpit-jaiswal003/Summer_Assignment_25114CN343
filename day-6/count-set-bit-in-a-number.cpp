#include <bits/stdc++.h>
using namespace std;

unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    int i;
    cout<<"Enter the number = ";
    cin>> i;
    cout << countSetBits(i);
    return 0;
}