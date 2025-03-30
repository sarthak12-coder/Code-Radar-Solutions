#include <stdio.h>
int max(int arr[], int n , int max){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if arr[i]>max;
        max=arr[i];
    }
    return max;
}
int min(int arr[], int n , int min){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if arr[i]<min;
        min=arr[i];
    }
    return min;
}
int main()[
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scaanf("%d",arr[i]);
    }
    printf("%d ",max(arr,n));
    printf("%d",min(arr,n));
    return 0;
]