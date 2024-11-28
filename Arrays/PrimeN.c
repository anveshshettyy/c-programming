#include<stdio.h>

int main () {

    int num,num2, i, j, prime;
    int flag = 0;

    printf("Starting range:");
    scanf("%d",&num2);

    printf("Ending range:");
    scanf("%d",&num);

    for ( j=num2; j<=num; j++ ){
        flag = 0;
        for ( i =2; i*i <=j; i++ ){
            if ( j % i == 0 ){
                flag = 1;
                break;
            }
        }
        if( flag == 0 ) {
            printf("%d\t",j);
        }
    }

    return 0;
}