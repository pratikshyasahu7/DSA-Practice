#include <stdio.h>   // Standard input-output header file for printf

// Main function where program execution begins
int main() {
    int arr[5] = {64, 25, 12, 22, 11};  
    // Declare an integer array 'arr' with 5 unsorted elements

    int n = 5;  
    // Store the number of elements in the array

    int i, j, minIndex, temp;  
    // 'i' and 'j' for loop counters,
    // 'minIndex' will store the index of the smallest element in the current pass,
    // 'temp' is used for swapping values

    // Outer loop goes through each position of the array
    for (i = 0; i < n - 1; i++) {
        minIndex = i;  
        // Assume the current index 'i' holds the smallest element

        // Inner loop finds the smallest element in the remaining unsorted part
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Update minIndex if a smaller element is found
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }

    return 0;  
    // End of program, return 0 indicates successful execution
}
