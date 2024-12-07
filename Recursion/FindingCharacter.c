#include<stdio.h>

int FindChar(char  str[], char chr )
{
    int i = 0;

    if(!str)
        return 0;

    else
    {
        if( str[i] == chr )
        {
            return i;
        }
        FindChar(str[i+1]);
    }
}

int main()
{

    char str[100];
    char chr;
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    while( getchar() != '\n' );

    printf("Enter a character ");
    scanf("%c",&chr);

    // for( i=0; str[i]; i++ )
    // {
    //     if(str[i] == chr)
    //         printf("Character found at index %d \n",i);
    // }

    int index = FindChar( str, chr );

    printf("Character found at index %d \n",index);


    return 0;
}

