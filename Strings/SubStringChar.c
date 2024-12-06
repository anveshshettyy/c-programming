#include<stdio.h>

int main ()
{

    char str[100], sub[100];

    printf("Enter a string: ");
    scanf("%[^/n]s",str);

    printf("Enter a sub string: ");
    scanf("%[^/n]s",sub);

    return 0;
}