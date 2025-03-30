#include <stdio.h>
void sorted(int n,int arr[]){
    if(arr[0]>arr[n-1]) printf("Not Sorted") return ;
    printf("Sorted");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sorted(n,arr);
    return 0;
}