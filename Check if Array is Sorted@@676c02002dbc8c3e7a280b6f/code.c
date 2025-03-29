#include <stdio.h>

int main() {
    int n, i, issorted = 1;

    // Taking input for array size
    scanf("%d", &n);

    int arr[n]; // Variable-length array (VLA) (C99 and later)

    // Input elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is sorted
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            issorted = 0; // Mark as not sorted
            break;
        }
    }

    // Printing the result
    if (issorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
