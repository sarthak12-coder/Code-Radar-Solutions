#include <stdio.h>
void Sequence(int *arr, int n){
    if(n == 0) return 0;
    int longest = 1;
    int currentStreak = 1;
    for(int i=1 ; i<n;i++){
        if(arr[i]==arr[i-1]) continue;
        if(arr[i]==arr[i-i]+1){
            currentStreak+=1;
        }else{
            if(currentStreak>longest){
                longest=currentStreak;
            }
            currentStreak=1;
        }
    }
    if(currentStreak>longest){
        longest=currentStreak;
    }
    printf("%d";longest);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n;i++){
        scanf("%d",&arr[i]);
    }
    Sequence(arr,n);
    return 0;  
}