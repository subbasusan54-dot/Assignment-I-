#include <stdio.h>

// Function declaration
float circleArea(float radius);

// Main function
int main() {
    float r = 5.0;
    float area;

    area = circleArea(r);   // Pass by value
    printf("Area of circle = %.2f\n", area);

    return 0;
}

// Function definition
float circleArea(float radius) {
    float pi = 3.14;
    return pi * radius * radius;
}