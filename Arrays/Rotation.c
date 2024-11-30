#include <stdio.h>

int main()
{
    int n, arr[10], i, j, k, temp;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position:");
    scanf("%d", &k);

    for (j = 0; j < k; j++)
    {
        temp = arr[0];
        for (i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }

    printf("The rotated elemenst are:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}