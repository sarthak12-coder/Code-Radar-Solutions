#include <stdio.h>

int fibonacciSeries(int n){
    if (n==1) return 0;
    if(n==2) return 1;
    int a=0;
    int b=1;
    int sum =0;
    for (int i=1; i<=n-2; i++){
        sum =a+b;
        a=b;
        b=sum;
    }
    return sum;
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