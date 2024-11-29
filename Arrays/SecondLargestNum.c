#include<stdio.h>

int main(){

    int arr[10],res[10], i, j, k=0, n, temp

    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array elements:");
    for( i = 0; i< n ; i++ )
        scanf("%d",&arr[i]);

    for( i=0; i<n; i++ ){
        
        for( j=0; j<n; j++ ){
            if( arr[j] < arr[j+1] ){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("The Second Largest Element is:");
    printf(" %d ",arr[1]);

}