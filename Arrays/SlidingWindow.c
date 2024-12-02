#include<stdio.h>

int main(){
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

    curr_sum = arr[0];
    int start = 0;

    for( i=1; i<=n; i++ ){
        while ( curr_sum > sum && start < i-1 ){
            curr_sum = curr_sum - arr[start];
            start++;
        }
        if( curr_sum == sum ){
            printf("Found between the index %d and %d  \n", start, i-1);
            flag = 1;
            break;
        }
        if( i<n )
            curr_sum = curr_sum + arr[i];
    }
    if( !flag ){
        printf("No indexes found");
    }


    return 0;
}