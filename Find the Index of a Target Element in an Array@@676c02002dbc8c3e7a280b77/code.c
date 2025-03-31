#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    index=1;
    for(int i=0; i<n;i++){
        if(arr[i]==k);
        index+=i;
    }
    printf("%d",&index);
    return 0;
}