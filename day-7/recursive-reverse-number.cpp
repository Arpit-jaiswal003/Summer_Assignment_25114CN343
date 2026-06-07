#include <bits/stdc++.h>
using namespace std;

void reverse(int n)
{

  
   if (n < 10) {
      cout<<n;
      return;
   }

   else{
      cout<<n%10;
      reverse(n/10);
   }
}


int main()
{
   int n;
   cout<<"Enter a number = ";
   cin>> n;
   reverse(n);
   return 0;
}