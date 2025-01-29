#include<stdio.h>

void RevString( char *p )
{
    if( *p )
     {
        RevString( p+1 );
        printf("%c",*p);    
     }
}

int main()
{
    char revString[100];

    printf("Enter a string: ");
    scanf("%[^\n]s",revString);
    RevString(revString);

    return 0;
}