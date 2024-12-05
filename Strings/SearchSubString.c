#include<stdio.h>

searchString( int str1[],int str2[] )
{
    int i,j,length1, length2;

    while( str1 )
        length1++;

    while( str2 )
        length2++;

    for( i=0; i<= length1-length2; i++ )
    {
        
    }
}

int main() {

    int str1[100], str2[100];

    printf("Enter the string: ");
    scanf("%s[^/n]",str1);

    printf("Enter the substring to search: ");
    scanf("%s[^/n]",str2);

    while( getchar() != '\n' );

    searchString( str1, str2 );

    if( (searchString) == 1 )
        printf("Found");

    printf("Not Found");

    return 0;
}