#include <stdio.h>

int main() {

    int a,b,shift;
    scanf("%d %d",&a, &b);

    shift=a>>b;

    printf("%d",shift);

    return 0;
}