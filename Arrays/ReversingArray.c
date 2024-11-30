#include<stdio.h>

int main() {

    int n, arr[10], i, j, k, temp, res[10];

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for( i=0 ; i<n ; i++) {
        res[i] = arr[n- i - 1];
    }

    printf("The reversed array is:");
    for( i=0; i<n; i++ )
        printf(" %d ",res[i]);

    return 0;
}