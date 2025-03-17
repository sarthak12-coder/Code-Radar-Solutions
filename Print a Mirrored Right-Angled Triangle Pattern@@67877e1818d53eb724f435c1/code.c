#include <stdio.h>
int main() 
{
    int i,j,a,k;
    scanf("%d", &a);
    for(i=1;i<=a;i++)
    {
        for(k=1;k<=a-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}