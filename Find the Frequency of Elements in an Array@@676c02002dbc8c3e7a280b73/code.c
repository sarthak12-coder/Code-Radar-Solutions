#include <stdio.h>
void countFrequencies(int arr[n], int n){
    int count =0;
    for(int i=1 ; i<n;i++){
        int k=count;
        for (int j=1; j<n;j++){
            if(arr[i]=arr[j]){
                k=k+1;
            }
            printf("%d %d",arr[i],count);
        }
    }
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    countFrequencies(arr,n);
    return 0;
}