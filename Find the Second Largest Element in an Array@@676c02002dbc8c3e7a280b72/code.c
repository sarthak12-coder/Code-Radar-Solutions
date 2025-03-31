#include <stdio.h>
void swap(int *a, int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[i+1]){
                swap(&arr[i],&arr[i+1]);
            }
        }
    }

    printf("%d",arr[n-2]);
    return 0;
}