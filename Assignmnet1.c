#include <stdio.h>


void readNumbers(int *arr, int n) {
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}


void displayNumbers(int *arr, int n) {
    printf("Numbers entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void displayOddPositioned(int *arr, int n) {
    printf("Odd positioned elements:\n");
    for (int i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void displayEvenNumbers(int *arr, int n) {
    printf("Even numbers:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}


int findMax(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}


void calculateSumAndAverage(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    printf("Sum of numbers: %d\n", sum);
    printf("Average of numbers: %.2lf\n", average);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    readNumbers(numbers, n);
    displayNumbers(numbers, n);
    displayOddPositioned(numbers, n);
    displayEvenNumbers(numbers, n);
    int max = findMax(numbers, n);
    printf("Maximum number: %d\n", max);
    calculateSumAndAverage(numbers, n);

    return 0;
}
