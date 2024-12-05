#include<stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    while( getchar() != '\n' );

    


    return 0;
}