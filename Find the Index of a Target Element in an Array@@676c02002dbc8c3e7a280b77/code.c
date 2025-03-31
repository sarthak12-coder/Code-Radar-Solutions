#include <stdio.h>
int index(int arr[] , int n){
    int index=1;
    for(int i=0; i<n;i++){
        if(arr[i]==k);
        index+=i;
        return index;
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    printf("%d",index(arr,n));
    return 0;
}