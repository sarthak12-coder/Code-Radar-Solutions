#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    int rotated[n]; // Create new array for rotated elements

    

    // Move last k elements to the beginning
    for (int i = 0; i < k; i++) {
        rotated[i] = arr[n - k + i];
    }

    // Move first (n-k) elements after the last k elements
    for (int i = 0; i < n - k; i++) {
        rotated[k + i] = arr[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n); // Input size of array
    int arr[n];

    // Take array input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k); // Input rotation count

    // Rotate and print the array
    rotateArray(arr, n, k);

    return 0;
}
