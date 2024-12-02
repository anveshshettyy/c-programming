#include <stdio.h>

int main()
{
    int arr[10], n, sum, k;
    int i, j, curr_sum, max_sum, flag;

    printf("Enter the size of array:");
    scanf("%d", &n);

    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum:");
    scanf("%d", &sum);

    for( i=0; i<n; i++ ){
        flag = 0;
        curr_sum = arr[i];

        for( j=i+1; j<n; j++){
            if( curr_sum == sum ){
                printf("Found between the index %d to %d",i, j-1);
                flag = 1;
                break;
            }
            if( curr_sum > sum || j==n ){
                break;
            }
            curr_sum = curr_sum + arr[j];
        } 
        if( flag == 1 )
            break;
        
    }
    if( !flag )
        printf("No indexes found");   
}