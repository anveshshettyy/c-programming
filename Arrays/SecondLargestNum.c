#include<stdio.h>

int main(){

    int arr[10],res[10], i, j, k=0, n, temp, temp2=0;

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

    for ( i = 0; i<n; i++ ){
        if( arr[i] == arr[i+1] ){
            temp2 = arr[i+2];
            break;
        }
        else{
            temp2 = arr[i+1];
        }
    }
    printf("%d",temp2);

}