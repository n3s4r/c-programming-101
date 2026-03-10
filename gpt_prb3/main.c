#include <stdio.h>

int main() {

    int n;
    int arr[100];
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}
