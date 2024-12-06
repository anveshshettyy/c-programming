#include<stdio.h>

char *RevString( char *p )
{
    static char a[100];
    static int i;

    if( *p )
    {
        RevString(p+1);
        a[i++] = *p;
    }
    return a;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Reversed String is %s",RevString(str));

    return 0;
}