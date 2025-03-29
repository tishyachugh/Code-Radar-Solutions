#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return 0; // Only one element, it's a peak
    if (arr[0] > arr[1]) return 0; // First element is peak
    if (arr[n - 1] > arr[n - 2]) return n - 1; // Last element is peak

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return i; // Found the first peak
        }
    }
    
    return -1; // No peak found (should not happen for valid input)
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakIndex = findFirstPeak(arr, n);

    if (peakIndex != -1) {
        printf("%d\n", arr[peakIndex]);
    } else {
        printf("No peak element found\n");
    }

    return 0;
}
