#include <stdio.h>

int main() {
    int num;
    scanf("%d",&a);

    if(num>="a" && num<="z"){
        printf("Lowercase\n");
    }else if (num>="A" && num<="Z"){
        printf("Uppercase\n");
    }else{
        printf("Not an alphabet\n");
    }
    return 0;
}