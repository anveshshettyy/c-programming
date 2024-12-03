#include<stdio.h>

void checkPalindrome( int n )
{
    
}

int main() {
    int n;

    printf("Enter the number to check palindrome:");
    scanf("%d",&n);

    checkPalindrome( n ); 

    if( checkPalindrome ){
        printf("Yes it is a palindrome");
    }
    else{
        printf("It is not a palindrome");
    }

    return 0;
}