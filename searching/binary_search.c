#include <stdio.h>

// Binary Search using Divide and Conquer (Recursive)
int binarySearch(int arr[], int low, int high, int key) {

    // Base condition
    if (low <= high) {

        // Divide step
        int mid = low + (high - low) / 2;

        // If element found
        if (arr[mid] == key)
            return mid;

        // Search left half
        if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);

        // Search right half
        return binarySearch(arr, mid + 1, high, key);
    }

    // Element not found
    return -1;
}

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
