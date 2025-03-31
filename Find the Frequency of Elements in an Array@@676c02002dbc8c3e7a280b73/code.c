#include <stdio.h>

void countFrequencies(int arr[], int n) {
    int visited[n] ;  // Initialize visited array to 0

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            continue;  // Skip already counted elements
        }

        int count = 1;  // Start counting current element

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // Mark duplicate as counted
            }
        }

        printf("%d %d\n", arr[i], count);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    countFrequencies(arr, n);

    return 0;
}
