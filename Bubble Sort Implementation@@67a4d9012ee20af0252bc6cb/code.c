#include <stdio.h>

// Bubble Sort function
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){  // Outer loop for passes
        for(int j = 0; j < n - i - 1; j++){  // Inner loop for swapping
            if(arr[j] > arr[j + 1]){  // Swap if needed
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    
    // Input size of array
    scanf("%d", &n);
    
    int arr[n];

    // Input array elements
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    // Sort the array
    bubbleSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
