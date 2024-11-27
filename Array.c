#include<stdio.h>

int main() {

    int arr[10];
    int i, n, small, large, sum;

    printf("Enter the size of the array:");
    scanf("%d", &n);

    printf("Enter the Elements of the array:");

    for( i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    small, large = arr[0];
    for( i=0; i<n; i++){
        if ( arr[i] < small ){
            small = arr[i];
        }
        if ( arr[i] > large ) {
            large = arr[i];
        }
    }
    // printf("Total Sum is : %d\n", sum);
    printf("Smallest Element is : %d\n", small);
    printf("Largest Element is : %d\n", large);
    
    return 0;
}