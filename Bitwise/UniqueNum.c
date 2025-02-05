#include<stdio.h>

int main() {
    int arr[10], i, n, unique=0;

    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for( i=0; i<n; i++ )
        scanf("%d",&arr[i]);

    for( i=0; i<n; i++ ){
        unique = unique ^ arr[i];
    }

    printf("%d",unique);


    return 0;
}