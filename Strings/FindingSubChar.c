#include <stdio.h>

int main()
{

    char str[100];
    char chr;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (getchar() != '\n')
        ;

    printf("Enter a character: ");
    scanf("%c", &chr);

    for (i = 0; str[i]; i++)
    {
        if (str[i] == chr)
        {
            printf("Character found at index %d \n", i);
            return 0;
        }
    }

    printf("Character not found");

    return 0;
}
