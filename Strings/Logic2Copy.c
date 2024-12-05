#include<stdio.h>


void copy( char *p, char *q )
{
    // while( *p != '\0' )
    // {
    //     *q = *p;
    //     p++;
    //     q++;
    // }

    // *q = '\0';

    while( *q++ = *p++);
    *q ='\0';
}

int main(){

    char str1[100], str2[100];
    int i,l =0;
    
    printf("Enter a String: ");
    scanf("%[^\n]s",str1);

    

    copy( str1 , str2 );

    printf("Copied String is: %s", str2);

    return 0;
}