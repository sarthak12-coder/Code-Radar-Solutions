#include <stdio.h>
void peakElement(int n, int arr[]){
    if(n==1) return arr[0];
    if(arr[0]>arr[1]) return arr[0];
    for(int i=1; i<n-1;i++){
        if(arr[i]>arr[i-1]&& arr[i]>arr[i+1]) return arr[i];
    }
    if arr[n-1]>arr[n-2] retrun arr[n-1];
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d",peakElement(n,arr));
    return 0;
}