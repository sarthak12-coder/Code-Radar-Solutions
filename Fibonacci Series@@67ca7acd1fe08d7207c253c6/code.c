#include <stdio.h>

void fibonacciSeries(int n){
    int a=0,b=1,sum;
    if(n>=1){
        printf("%d ",a);
    }
    if(n>=2){
        printf("%d ",b);
    }
    for(int i=1;i<=n;i++){
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}