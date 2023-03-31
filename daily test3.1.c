#include <stdio.h>
int factorial(int n);
int gcd(int ca, int b);
int main() 
{    printf("Enter a positive of factorial : ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    printf("Enter two positive inter of gcd : ");
    scanf("%d %d", &num1, &num2);
    gcd_val = gcd(num1, num2);
    printf("gcd of %d and %d is %d\n", num1, num2, gcd_val);
    return 0;
}
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
