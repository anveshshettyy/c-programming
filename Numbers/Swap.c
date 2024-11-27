#include<stdio.h>

int main(){
    int num, originalNum, firstNum, midNum, lastNum,result = 0, mul = 1;

    printf("Enter a number to swap the first and last digit:");
    scanf("%d",&num);
    originalNum = num;

    lastNum = num % 10;
    
    while ( num >= 10 ) {
        num = num / 10;
        mul = mul * 10;
    }
    firstNum = num;

    midNum = originalNum % mul;
    midNum = midNum / 10;
    

    result = ( (lastNum * mul) + ( midNum * 10 )) + firstNum ;
    printf("The swapped number is: %d",result );

    return 0;
}

