#include<stdio.h>
#define SIZE 26

int main()
{
    char str[100];
    int i;
    int count[SIZE] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    for( i=0; str[i]; i++ )
    {
        if( str[i] >= 65 && str[i] <= 90 )
            count[str[i] - 'A']++;
        
        else if( str[i] >= 97 && str[i] <= 122 )
            count[str[i] - 'a']++;
    }

    for( i=0; i<SIZE; i++ )
    {
        if( count[i] == 0 )
        {
            printf("Not a Pangram");
            return 0;
        }
    }

    printf("It is a Panagram");

    return 0;
}