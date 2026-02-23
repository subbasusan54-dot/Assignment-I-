#include <stdio.h>

// Function declaration
int isPrime(int N);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is NOT a Prime number.\n", num);

    return 0;
}

// Function definition
int isPrime(int N) {
    if (N <= 1)
        return 0;

    for (int i = 2; i <= N / 2; i++) {
        if (N % i == 0)
            return 0;
    }

    return 1;
}