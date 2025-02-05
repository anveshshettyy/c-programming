#include<stdio.h>

int main()
{
    int num, k;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter k: ");
    scanf("%d", &k);

    num = num << k;

    printf("Result: %d",num);
    
    return 0;
}