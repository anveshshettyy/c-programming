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
    RevString("jack and jill");

    return 0;
}