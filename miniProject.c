#include <stdio.h>

int main() {
    int n, i;
    int isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Number is Positive\n");
    if (n < 0)
        printf("Number is Negative\n");
    if (n == 0)
        printf("Number is Zero\n");

    if (n % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n - 1; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");

    return 0;
}