#include<stdio.h>

void readArray( int arr[] , int n ){
    int i;
    for( i=0; i<n; i++ ){
        scanf("%d",&arr[i]);
    }
}

void printArray( int arr[], int n ){
    int i;
    for( i=0; i<n; i++ ){
        printf(" %d ",arr[i]);
    }
}

// void FindSum1( int arr[], int n, int target ){
//     int i,j;
//     for( i=0; i<n; i++ ){
//         for( j=i+1; j<n; j++ ){
//           if( target ==  arr[i] + arr[j]  ) {
//             printf(" %d %d \n",arr[i], arr[j]);
//           }
//         }
//     }
// }

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

void findSum2( int arr[], int n, int target ){
    int left, right;

    left = 0;
    right = n-1;

    while( left < right ){
        int sum = arr[left] + arr[right];
        if( sum == target ){
            printf("%d %d \n",arr[left], arr[right]);
            left++;
            right--;  
        } else if( sum > target )
            right--;
         else 
            left++;
    }
}

int main() {
    int arr[10];
    int n, target;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("Enter the array Elements:");
    readArray( arr , n );

    printf("Enter the target:");
    scanf("%d",&target);

    

    // FindSum1( arr, n, target );

    qsort( arr, n, sizeof(int), compare );

    // printf("The array is:");
    // printArray( arr , n );

    findSum2( arr, n, target );
    
    return 0;

}