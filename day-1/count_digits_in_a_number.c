#include<stdio.h>
int main(){
    int number, count=0;
    printf("enter a number:");
    scanf("%d",&number);
    //handle zero
    if(number==0){
        count=1;
    }
//count digit
    while(number!=0){
        number=number/10;
        count++;
    }
    printf("number of digits  is %d", count);
    return 0;
}