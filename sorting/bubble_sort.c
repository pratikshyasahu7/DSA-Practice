/*
Algorithm: Bubble Sort
Time Complexity:
  Best(Big O): O(n)
  Average(θ): O(n^2)
  Worst(ω): O(n^2)
Space Complexity: O(1)
*/
#include <stdio.h>   // Standard input-output header file for printf and scanf

// Main function where program execution begins
int main() {
    int arr[5] = {64, 34, 25, 12, 22};  
    // Declare an integer array 'arr' of size 5 and initialize it with unsorted values

    int n = 5;  
    // Store the number of elements in the array

    int i, j, temp;  
    // Declare loop counters 'i' and 'j', and a temporary variable 'temp' for swapping

    // Outer loop runs (n-1) times to ensure all elements are sorted
    for (i = 0; i < n - 1; i++) {
        // Inner loop compares adjacent elements in the unsorted portion of the array
        for (j = 0; j < n - i - 1; j++) {
            // Check if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1] if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element followed by a space
    }

    return 0;  
    // End of program, return 0 indicates successful execution
}
