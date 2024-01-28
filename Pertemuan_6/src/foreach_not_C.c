#include <stdio.h>

int main() {
    // Create an array of integers
    int numbers[] = {1, 2, 3, 4, 5};

    // Calculate the number of elements in the array
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Use a for loop to iterate over the array
    for (int i = 0; i < length; i++) {
        int number = numbers[i];
        printf("Element at index %d: %d\n", i, number);
    }

    return 0;
}

