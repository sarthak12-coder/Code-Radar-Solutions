#include <stdio.h>

int main() {
    char num;
    scanf("%C", &num);

    if(num>='a' && num<='z'){
        printf("Lowercase");
    }else if (num>='A' && num<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}