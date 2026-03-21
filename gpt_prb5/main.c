#include <stdio.h>

// Function to find the peak element
int findPeak(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if mid is a peak
        // 1. Check left neighbor (or if it's the start)
        // 2. Check right neighbor (or if it's the end)
        if ((mid == 0 || arr[mid] >= arr[mid - 1]) &&
            (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
            return mid;
        }

        // If the left neighbor is greater, the peak must be on the left
        if (mid > 0 && arr[mid - 1] > arr[mid]) {
            high = mid - 1;
        }
        // Otherwise, the peak must be on the right
        else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int data[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(data) / sizeof(data[0]);

    int peakIndex = findPeak(data, n);

    if (peakIndex != -1) {
        printf("The peak element is %d at index %d\n", data[peakIndex], peakIndex);
    } else {
        printf("No peak element found.\n");
    }

    return 0;
}
