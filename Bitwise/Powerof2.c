#include<stdio.h>

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if( (x & x-1) == 0 )
        printf("It is power of 2");
    else 
        printf("It is not power of 2");

    return 0;
}