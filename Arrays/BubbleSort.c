#include<stdio.h>

void readArray( int arr[] , int n ){
    int i;
    for( i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
}

void printArray(int arr[], int n){
    int i;
    for( i=0; i<n ; i++){
        printf(" %d \n",arr[i]);
    }
}

void swap( int *p, int *q ){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubbleSort(int arr[], int n){
    int i, j,status;
    for( i=0; i<n; i++ ){
        status = 0;
        for( j=0; j<n-1-i; j++){
            if( arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                status = 1;
            }     
        }
        if( status == 0 )
            break;
    }
}

int main() {
    int arr[100];
    int n;

    printf("Enter Size:");
    scanf("%d",&n);

    printf("Enter the elements of array:");
    readArray(arr, n);

    printf("Initital arrray is:");
    printArray(arr, n);

    bubbleSort(arr , n);

    printf("Sorted array is:");
    printArray(arr, n);


    return 0;
}