#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("%d", sum);
    return 0;
}