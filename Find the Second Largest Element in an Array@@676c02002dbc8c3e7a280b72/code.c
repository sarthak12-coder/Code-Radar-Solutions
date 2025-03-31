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
    if(n==1){
        printf("%d",-1);
        return ;
    }
    for(int i=0; i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }

    printf("%d",arr[n-2]);
    return 0;
}