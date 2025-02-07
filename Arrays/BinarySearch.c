#include<stdio.h>

int main()
{
    int arr[100];
    int n, i, left, right, mid, target, index;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for( i=0; i<n; i++ )
        scanf("%d",&arr[i]);

    printf("Enter the element to search: ");
    scanf("%d",&target);
    

    left = 0;
    right = n - 1;

    while( left <= right )
    {
        mid = ( left + right ) / 2;
        if( arr[mid] == target ) index = mid ;

        if( arr[mid] > target )
            right = mid - 1;
        else 
            left = mid + 1;
    }

    printf("Target found at index: %d",index);

    return 0;
}