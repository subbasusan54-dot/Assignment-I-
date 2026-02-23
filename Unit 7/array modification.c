#include <stdio.h>

// Function to replace negative numbers with 0
void replaceNegative(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int array[6] = {5, -3, 8, -1, 8, -7};
    int size = 6;

    printf("Before replacing: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    // Function call
    replaceNegative(array, size);

    printf("\nAfter replacing: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}