#include <stdio.h>
int index1(int arr[] , int n , int k){
    for(int i=0; i<n;i++){
        if(arr[i]==k) return i;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    printf("%d",index1(arr,n,k));
    return 0;
}