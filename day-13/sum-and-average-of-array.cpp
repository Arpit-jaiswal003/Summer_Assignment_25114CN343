#include <iostream>
using namespace std;
 
int main(){
    int n,sum=0;
    cout<<"Enter the size of array = ";
    cin>> n;
    
    int arr[n];
    cout<<"Enter "<<n<<" elements = "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
            sum+=arr[i];
    }
        float average=(float)sum/n;

        cout<<"sum = "<<sum<<endl;
        cout<<"average = "<<average<<endl;
        return 0;

}