#include <stdio.h>
bubbleSort(int arr[], int n){
    for(int i=1 ;i<n-1 ; i++){
        for(int j=1 ;j<=n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        Scanf("%d",arr[i]);
    }
    bubbleSort(arr,n);
    printf("%d",arr[])
    return 0;
}