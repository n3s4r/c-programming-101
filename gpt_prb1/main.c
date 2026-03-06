#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int e[100];
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &e[i]);
    }

    for(int i = 0; i < n; i++) {
        if(e[i] > largest) {
            second = largest;
            largest = e[i];
        }
        else if(e[i] > second && e[i] != largest) {
            second = e[i];
        }
    }

    if(second == INT_MIN) {
        printf("Second largest number does not exist\n");
    } else {
        printf("Second largest number: %d\n", second);
    }

    return 0;
}
