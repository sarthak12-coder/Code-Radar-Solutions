#include <stdio.h>
rotated(int arr[n], int n, int k){
    int rotate[n]
    for(int i=0;i<k;i++){
        rotate[i]=arr[n-k+i];
    }
    for(int i=0;i<n-k;i++){
        rotated[k+i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d",rotate[0]);
    }
}
int main(){
    int n ,arr[n],k;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",k);
    scanf("%d",&k);
    rotated(arr,n,k);
    return 0;
}

















