#include <stdio.h>

int main() {

    int a;
    unsigned int msbMask = 1U << (sizeof(int) *CHAR_BIT-1);

    scanf("%d",%a);

    if (a & &msbMusk){
        printf("Set");
    }else{
        printf("Not Set");
    }

    return 0;
}