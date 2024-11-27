//Find the difference  of sum of all odd and even digits.

#include<stdio.h>

int main() {

    int num, even=0, odd, rem, EvenMul = 1, OddMul = 1, EvenSum=0 , OddSum=0, Diff, EvenC = 0, OddC, remm;

    printf("Enter a number:");
    scanf("%d",&num);

    while ( num > 0 ) {
        rem = num % 10;
        if ( rem % 2 == 0 ) {
            even = even + ( rem * EvenMul );
            EvenMul *= 10;
            

        } else {
            odd = odd + ( rem * OddMul );
            OddMul *= 10;
        }
        num = num / 10;
    }

    EvenC = even;
    OddC = odd;

    while ( EvenC > 0 ) {
        remm = EvenC % 10;
        EvenSum += remm; 
        EvenC = EvenC / 10;
    }

    remm = 0;

    while ( OddC > 0 ) {
        remm = OddC % 10;
        OddSum += remm; 
        OddC = OddC / 10;
    }

    Diff = OddSum - EvenSum;

    printf("Even numbers are: %d\n",even);
    printf("Odd numbers are: %d\n",odd);
    printf("Even Sum is: %d\n",EvenSum);
    printf("Odd Sum is: %d\n",OddSum);
    printf("Difference is: %d",Diff);


    return 0;
}