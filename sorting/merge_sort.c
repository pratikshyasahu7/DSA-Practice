#include <stdio.h>   // Standard input-output header for printf and scanf

// Function to merge two sorted halves of the array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;   // Size of the left subarray
    int n2 = right - mid;      // Size of the right subarray

    int L[n1], R[n2];          // Temporary arrays to hold left and right parts

    // Copy data into left subarray L[]
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }

    // Copy data into right subarray R[]
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;  
    // 'i' is index for left subarray, 'j' for right subarray, 'k' for merged array

    // Merge the two subarrays into the original array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];   // Take element from left if smaller
            i++;
        } else {
            arr[k] = R[j];   // Take element from right if smaller
            j++;
        }
        k++;   // Move to next position in merged array
    }

    // Copy any remaining elements from left subarray
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements from right subarray
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to recursively divide the array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;  
        // Find the middle point to divide the array

        mergeSort(arr, left, mid);        // Recursively sort the left half
        mergeSort(arr, mid + 1, right);   // Recursively sort the right half

        merge(arr, left, mid, right);     // Merge the two sorted halves
    }
}

// Main function
int main() {
    int arr[6] = {38, 27, 43, 3, 9, 82};  // Declare array with 6 unsorted elements
    int n = 6;   // Number of elements in the array

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // Print the original unsorted array
    }
    printf("\n");

    mergeSort(arr, 0, n - 1);    // Call mergeSort with full array range

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   // Print the sorted array
    }

    return 0;   // End of program
}
