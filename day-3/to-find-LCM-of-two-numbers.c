#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    printf("Enter frist number= ");
    scanf("%d", &a);

    printf("Enter second number= ");
    scanf("%d", &b);

    x = a;
    y = b;

    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;
    lcm = (a * b) / gcd;

    printf("LCM = %d\n", lcm);

    return 0;
}