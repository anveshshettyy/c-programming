#include<stdio.h>

int main() {

    int num, rem, large=0; 

    printf("Emter a number:");
    scanf("%d",&num);

    while ( num > 0 ) {
        rem = num % 10;

        if ( rem > large) {
            large = rem;
        }
        num = num / 10;
    }

    printf("The largest number is: %d",large);
    
    return 0;
}