#include<stdio.h>

int main() {
    int arr[10][10];
    int i, j, m, n;

    printf("Enter m:");
    scanf("%d",&m);

    printf("Enter n:");
    scanf("%d",&n);

    printf("Enter the 2D array:");
    for( i=0; i<m; i++ ){
        for( j=0; j<n; j++ ){
            scanf("%d",&arr[i][j]);
        }
    }

    for( i=0; i<m; i++ ){
        for( j=0; j<n; j++ ){
            printf(" %d \n",arr[i][j]);
        }
    }

    return 0;
}