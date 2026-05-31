#include<stdio.h>
int main(){
    int num,digit;
    long long product=1;
    printf("Enter the digit =");
    scanf("%d",&num);
    
    while(num!=0){
        digit=num%10;
        product=product*digit;
        num=num/10;
    }
    printf("Product of digit = %lld\n",product);
    return 0;
    
}