#include <stdio.h>

int main()
{

    int num, flag = 0, i;

    printf("Enter a number:");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("It is not a prime number");
    }
    else
    {
        printf("It is a prime number");
    }

    return 0;
}