#include <stdio.h>

int main()
{
    int range, i, j, k = 0, l, size, flag = 0;
    int arr[100];

    printf("Enter a range: ");
    scanf("%d", &range);

    for (i = 2; i <= range; i++)
    {
        flag = 0;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr[k] = i;
            printf("%d \t",arr[k]);
            k++;
            
        }
        size = k;
    }

    printf("\n");
    
    for (i = 1; i < size; i++)
    {
        flag = 0;
        for (j = 2; j * j <= i+1; j++)
        {
            if ((i+1) % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d) %d \n", i, arr[i]);
        }
    }

    return 0;
}