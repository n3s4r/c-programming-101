#include <stdio.h>

int main() {

    int n;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("\nEnter the elements: ");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nReversed Array: ");
    for(int i = n-1; i >= 0 ; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
gpt solution:

#include <stdio.h>

int main() {

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the elements: ");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int temp;

    for(int i = 0; i < n/2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed Array: ");

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

*/
