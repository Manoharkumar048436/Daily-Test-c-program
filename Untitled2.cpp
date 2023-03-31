#include <stdio.h>

int main() {
    int num, digit, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for ( ; num != 0; num /= 10) {
        digit = num % 10;
        rev = rev * 10 + digit;
    }

    printf("Reverse of the number: %d", rev);

    return 0;
}
