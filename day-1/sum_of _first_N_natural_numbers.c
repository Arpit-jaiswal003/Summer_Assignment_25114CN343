#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of first N natural numbers
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;

}
