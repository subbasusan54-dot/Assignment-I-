#include <stdio.h>

// Function declaration
void calculate(int a, int b, int *sum, int *diff, int *prod);

int main() {
    int num1 = 10, num2 = 5;
    int sum, difference, product;

    // Function call (passing addresses)
    calculate(num1, num2, &sum, &difference, &product);

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}

// Function definition
void calculate(int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}