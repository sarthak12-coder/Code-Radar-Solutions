#include <stdio.h>
#include <string.h>

void cyclic_shift_right(int n) {
    char num_str[20];  // Buffer to store the number as a string
    sprintf(num_str, "%d", n);  // Convert integer to string
    int len = strlen(num_str);

    if (len == 1) {
        printf("%d\n", n);
        return;
    }

    // Create the shifted number
    char shifted_num[20];
    shifted_num[0] = num_str[len - 1];  // Move last digit to the front
    for (int i = 0; i < len - 1; i++) {
        shifted_num[i + 1] = num_str[i];
    }
    shifted_num[len] = '\0';  // Null-terminate the string

    printf("%d\n", atoi(shifted_num));  // Convert back to integer and print
}

int main() {
    int N;
    scanf("%d", &N);

    cyclic_shift_right(N);
    return 0;
}
