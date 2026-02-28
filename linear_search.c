#include <math.h>
# include <stdio.h>
// Function to perform linear search in an array
int linear_search(int *array_nums, int array_size, int val)
{
    // Iterate through each element of the array
    int i;
    for (i = 0; i < array_size; i++)
    {
        // Check if the current element is equal to the target value
        if (array_nums[i] == val)
            return i; // Return the position if found
    }
    return -1; // Return -1 if the element is not found in the array
}
// Main function
int main()
{
    int n;
    // Array for linear search
    int array_nums[] = {0, 10, 40, 20, 30, 50, 90, 75, 82, 92, 155, 133, 145, 163, 200, 180};
    size_t array_size = sizeof(array_nums) / sizeof(int);
    // Print the original array
    printf("Original Array: ");
    for (int i = 0; i < array_size; i++) 
        printf("%d ", array_nums[i]);   
    printf("\n");
    // Input a number to search
    printf("Input a number to search: ");
    scanf("%d", &n); 
    // Perform linear search and print the result
    int index = linear_search(array_nums, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d", index);
    else
        printf("\nElement not found..!");
    // Return 0 to indicate successful execution
    return 0;
}
