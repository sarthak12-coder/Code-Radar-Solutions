#include <stdio.h>

int main() {
    int num;
    scanf(" %d", &a);

    if(isalpha(a)){
        printf("Lowercase");
    }else if (num>="A" && num<="Z"){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}