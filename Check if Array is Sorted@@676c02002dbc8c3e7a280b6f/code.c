#include <stdio.h>
void sorted(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            printf("Sorted");
        }else{
            printf("Not sorted")
        }
    }
}
int main(){
    int n;
    scanf("%d",n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sorted(n,arr);
    return 0;
}