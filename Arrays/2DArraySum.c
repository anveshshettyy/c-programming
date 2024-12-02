#include<stdio.h>

int main(){
    int row, col, i, j;
    int arr1[10][10], arr2[10][10], res[10][10];

    printf("Enter the size of rows: ");
    scanf("%d",&row);

    printf("Enter the size of columns: ");
    scanf("%d",&col);

    printf("Enter the elments of the first array: ");
    for( i=0; i<row; i++)
    {
        for( j=0; j<col; j++ )
            scanf("%d",&arr1[i][j]);
    }

    printf("Enter the elments of the second array: ");
    for( i=0; i<row; i++)
    {
        for( j=0; j<col; j++ )
            scanf("%d",&arr2[i][j]);
    }

    printf("The sum of both arrays is:\n");
    for( i=0; i<row; i++ )
    {
        for( j=0; j<col; j++ )
            res[i][j] = arr1[i][j] + arr2[i][j];
    }

    for( i=0; i<row; i++ )
    {
        for( j=0; j<col; j++ )
            printf(" %d ",res[i][j]);

        printf("\n");
    }
    
    return 0;
} 