// C++ program to print character 
// pattern using character
#include <iostream>
using namespace std;

int main()
{
    int i, j;
  
  
    int rows;
     cout<<"enter the rows = ";
    cin>> rows;
  
    char character = 'A';
  
    
    for (i = 0; i < rows; i++) {
      
        
        for (j = 0; j <= i; j++) {
          
           
            cout << character << " ";
        }
        cout << "\n";
      
        
        character++;
    }
    return 0;
}