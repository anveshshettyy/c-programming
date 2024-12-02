#include <stdio.h>

void readArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
}

void SubArray(int arr[], int n, int k)
{
    int i, j, sum = 0, max;
    for (i = 0; i < n-k; i++)
    {
        max = 0;
        sum = 0;
        for (j = i; j <= i+k; j++)
        {
            sum = sum + arr[j];
        }
        max = sum;
        if (sum > max)
        {
            max = sum;
        }
    }
    printf("%d", max);
}

int main()
{
    int n, k, arr[10], sum;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    readArray(arr, n);

    // printf("Enter the sum:");
    // scanf("%d",&sum);

    printf("Enter k:");
    scanf("%d", &k);

    SubArray(arr, n, k);

    return 0;
}