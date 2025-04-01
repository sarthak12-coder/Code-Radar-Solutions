#include <stdio.h>
void fibonacci(int n){
    int a=0, b=1, sum;
    if(n>1) printf("%d",a);
    if(n>2) printf("%d",b);

    for(int i=3;i<=n;i++){
        int sum=a+b;
        printf("%d",sum);
        a=b;
        b=sum;
    }
    return ;
}
