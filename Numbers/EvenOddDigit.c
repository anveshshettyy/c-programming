#include<stdio.h>

int main() {

    int num, even=0, odd, rem, mul = 1;

    printf("Enter a number:");
    scanf("%d",&num);

    while ( num > 0 ) {
        rem = num % 10;
        if ( rem % 2 == 0 ) {
            even = even * 10 + rem;
        } else {
            odd = odd * 10 + rem;
        }
        
        num = num / 10;
    }
    printf("Even numbers are: %d\n",even);
    printf("Odd numbers are: %d",odd);

    return 0;
}