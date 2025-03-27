#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(int i =1; i<=n ; i++){
        if(i==1 && i==n){
            printf("*");
        }else{
            printf("*");
            for (j=1; j<=n-2; j++){
                printf(" ");
            }
            printf("*");
        }
    }
    return 0;
}