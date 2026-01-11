#include <stdio.h>   // Standard input-output header for printf and scanf

// Main function where execution begins
int main() {
    int arr[5] = {12, 11, 13, 5, 6};  
    // Declare an integer array 'arr' with 5 unsorted elements

    int n = 5;  
    // Store the number of elements in the array

    int i, key, j;  
    // 'i' for outer loop, 'key' stores the current element to insert,
    // and 'j' is used to shift elements to the right

    // Outer loop starts from the 2nd element (index 1) because 
    // a single element (arr[0]) is already considered sorted
    for (i = 1; i < n; i++) {
        key = arr[i];  
        // Take the current element as 'key' which we want to insert into the sorted portion

        j = i - 1;  
        // Start comparing with the element just before the 'key'

        // Shift elements of the sorted part that are greater than 'key' to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Move element arr[j] one step to the right
            j = j - 1;            // Move to the previous element
        }

        arr[j + 1] = key;  
        // Place 'key' at its correct sorted position
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print each element followed by space
    }

    return 0;  
    // End of program, return 0 means successful execution
}
