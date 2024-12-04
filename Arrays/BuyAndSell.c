#include<stdio.h>

int main(){

    int n, stocks[10], i;
    printf("Enter the size of stocks:");
    scanf("%d",&n);

    printf("Enter the stocks: ");
    for( i=0; i<n; i++ ){
        scanf("%d",&stocks[i]);
    }

    return 0;
}