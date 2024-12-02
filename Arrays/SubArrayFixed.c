#include<stdio.h>

int main(){
    int arr[10], n, sum, k;
    int i, j, curr_sum, max_sum;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");
    for( i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }

    printf("Enter the sum:");
    scanf("%d",&sum);

    printf("Enter k:");
    scanf("%d",&k);
        
    for( i=0; i<k; i++ ){
        curr_sum = curr_sum + arr[i];
        if( curr_sum == sum )
            printf("Sum found between indexes %d and %d ",i, k);
    }

    for( i=k ; i<n; i++ ){
        curr_sum = curr_sum + arr[i] - arr[i-k];

        if( curr_sum == sum ){
            printf("Sum found between indexes %d and %d ",i-k+1, i);
        }
    }
}