#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int count[100];
    int i;
    printf("Enter the first string: ");
    scanf("%[^\n]s",str1);

    while( getchar() != '\n' );

    printf("Enter the second string: ");
    scanf("%[^\n]s",str2);

    for( i=0; str1[i]; i++ )
    {

            count[str1[i] - 'a']++;
            count[str2[i] - 'a']--;
    }

    if( count>0 )
    {
        printf("Not anagram");
    }
    else {
        printf("Anagram");
    }


    return 0;
}