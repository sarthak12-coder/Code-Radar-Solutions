#include <stdio.h>
int majority(int arr[],int n){
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=1;j<n;j++){
            if(arr[i]=arr[j]){
                count +=1;
            }
        }
        if (count >n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",majority(arr,n));
    return 0;
}