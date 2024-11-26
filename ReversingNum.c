#include<stdio.h>

int main(){

    int num, rem, rev = 0;

    printf("Enter a number to be reversed:");
    scanf("%d", &num);

    printf("The actual number is: %d\n", num);

    while(num > 0) {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }

    printf("The reversed number is: %d", rev);


    return 0;
}