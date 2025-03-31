#include <stdio.h>

int fibonacciSeries(n){
    int a =0;
    int b=1;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    return sum;
    return ;
}
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    printf("%d",fibonacciSeries(n));
    return 0;
}