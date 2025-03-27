#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Upper half
    for (int i = 1; i <= 2 * n - 1; i++) {
        if (i <= n) {
            for (int j = n - i; j >= 1; j--) {
                printf(" ");
            }
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            for (int j = 1; j < i; j++) {
                printf("*");
            }
        } else {
            for (int j = 1; j <= i - n; j++) {  // Fixed space loop
                printf(" ");
            }
            for(int j=1 ; j<=2*n-i; j++){
                printf("*");
            }
            for (int j=1 ; j< (2*n-i) ; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
