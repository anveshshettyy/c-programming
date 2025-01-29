#include<stdio.h>
#include<string.h>

int searchString( char str1[],char str2[] )
{
    char *result;

    result = strstr( str1, str2 );
    return ( result ) ? 1 : 0;
    
}

int main() {

    char str1[100], str2[100];

    printf("Enter the string: ");
    scanf("%[^\n]s",str1);

    while( getchar() != '\n' );

    printf("Enter the substring to search: ");
    scanf("%[^\n]s",str2);

    if( (searchString( str1, str2 )) == 1 )
        printf("Found");
    else{
        printf("Not Found");
    } 

    return 0;
}