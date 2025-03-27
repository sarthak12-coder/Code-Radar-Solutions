#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(int i =1; i<=a ; i++){
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