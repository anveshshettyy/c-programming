#include<stdio.h>

int main()
{
    int num, k;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter k: ");
    scanf("%d", &k);

    num = ( num & ( (1 << k ) - 1 ) );

    printf("Remainder: %d",num);
    
    return 0;
}