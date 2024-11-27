#include<stdio.h>

int main(){
    int  a, b;

    printf("Enter a and b:");
    scanf("%d%d", &a , &b);


    int temp = a;
    a = b;
    b = temp;

    printf("Enter a: %d", a);+
    printf("Enter b: %d",b);

    return 0;
}

