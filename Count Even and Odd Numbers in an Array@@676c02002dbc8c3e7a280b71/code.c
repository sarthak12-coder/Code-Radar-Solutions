#include <stdio.h>
int oddNumber(int arr[], int n){
    int odd =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2!=0){
            odd=odd+1;
        }
    }
    return odd;
}
int evenNumber(int arr[], int n){
    int even =0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even=even+1;
        }
    }
    return even;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",oddNumber(arr,n),evenNumber(arr,n));
    return 0;
}