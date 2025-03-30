#include <stdio.h>
int maxNumber(int arr[], int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minNumber(int arr[], int n){
    int min = arr[0];
    for(int i=1;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",minNumber(arr,n),maxNumber(arr,n));
    return 0;
}