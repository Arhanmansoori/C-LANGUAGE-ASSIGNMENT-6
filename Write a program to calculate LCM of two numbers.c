#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {

    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;


    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);


    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}

