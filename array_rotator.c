#include <stdio.h>

void rotateLeft(int arr[], int n, int d) {
    // Handle cases where d is greater than n
    d = d % n;
    
    int temp[n];
    int k = 0;

    // Step 1: Copy elements from index 'd' to the end into temp
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Step 2: Copy the first 'd' elements to the end of temp
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }

    // Step 3: Copy temp back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, d;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &d);

    rotateLeft(arr, n, d);

    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}
