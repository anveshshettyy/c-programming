#include<stdio.h>

int main() {

    int arr[10];
    int i, n, small, large, sum, max_sum, min_sum;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the Elements of the array:");
    for( i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    large = arr[0];
    sum = 0;

    for( i=0; i<n; i++){
        if ( arr[i] < small ){
            small = arr[i];
        }
        if ( arr[i] > large ) {
            large = arr[i];
        }

        sum = sum + arr[i];

        max_sum = sum - small;
        min_sum = sum - large;
    }

    printf("Smallest Element is : %d\n", small);
    printf("Largest Element is : %d\n", large);
    printf("Sum is : %d\n", sum);
    printf("Maximum sum is : %d\n", max_sum);
    printf("Minimum sum is : %d\n", min_sum);
    
    return 0;
}