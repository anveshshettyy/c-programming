#include<stdio.h>

void readArray(int arr[], int n) {
    for( int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
}

void printArray( int arr[], int n ){
    for(int i=0; i<n; i++ )
        printf(" %d ",arr[i]);
}

int compare( int arr[], int x, int n){
    int i,j,k;
    for( i=0; i<n-2; i++ ){
        for( j=i+1;j<n-1; j++ ){
            for( k=j+1; k<n; k++ ){
                if( x == arr[i]+arr[j]+arr[k]){
                    printf("%d %d %d \n",arr[i],arr[j],arr[k]);
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int n,x, arr[10];

    printf("Enter the size of the array:");
    scanf("%d",&n);


    printf("Enter the elements of the array:");
    readArray( arr,  n);

    printf("Enter x:");
    scanf("%d",&x);

    int z = compare( arr , x, n);

    if( compare==0 ){
        printf("No triplets found");
    }

    return 0;
}