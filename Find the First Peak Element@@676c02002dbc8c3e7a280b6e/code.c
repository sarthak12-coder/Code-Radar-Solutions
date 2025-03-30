#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) return arr[0]; // Single element is a peak by default
    
    // Check if the first element is a peak
    if (arr[0] > arr[1]) return arr[0];

    // Check for peak in the middle
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];  // Return the first peak element
        }
    }

    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2]) return arr[n - 1];

    return -1; // No peak found
}

int main() {
    int n;
    scanf("%d", &n);  // Read size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read elements
    }

    printf("%d\n", findFirstPeak(arr, n));

    return 0;
}
