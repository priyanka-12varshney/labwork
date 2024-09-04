#include <stdio.h>

int main() {
    int arr[100];
    int size, i;
    int max, min;
    double sum = 0.0, average;
	printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements in the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum
    }

    // Assume the first element as maximum and minimum
    max = arr[0];
    min = arr[0];

    // Find maximum and minimum in all array elements
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Calculate average
    average = sum / size;

    // Print results
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Sum = %.2lf\n", sum);
    printf("Average = %.2lf\n", average);

    return 0;
}

