#include <stdio.h>
void countFrequencies(int arr[], int n){
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0 ; i<n ;i++){
        if(visited[i]==1){
            continue;
        }
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
                visited[j]=1;
            }
        }
        printf("%d %d\n",arr[i],count);
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