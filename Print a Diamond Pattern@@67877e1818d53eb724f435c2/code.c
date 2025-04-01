#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=n-1;j>=1;j--){
                printf(" ");
            }
            for(int j=1;j<=i;j++){
                printf("*");
            }
            for(intj=1;j<i;j++){
                printf("*");
            }
            printf("\n");
        }else{
            for(int j=1;j<=i-n;j++){
                printf(" ");
            }
            for(int j=1;j<=2*n-1;j++){
                printf("*");
            }
            for(int j=1;j<2*n-1;j++){
                printf("*");
            }
        }
    }
}