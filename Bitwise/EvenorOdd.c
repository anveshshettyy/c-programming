#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if( (x & 1) == 0 )
        printf("Even");
    else
        printf("Odd");

    return 0;
}