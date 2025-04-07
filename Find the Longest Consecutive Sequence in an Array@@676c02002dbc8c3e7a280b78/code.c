#include <stdio.h>
void Sequence(int *arr, int n){
    int length =0;
    for(int i=0 i<n;i++){
        if(arr[i]<arr[i+1]){
            length+=1;
        }
    }
    printf("%d",length);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    Sequence(arr,n);
    return 0;  
}