#include<stdio.h>

int lengthOfLastWord(char* s) {
    int length=0, i, count = 0;
    for( i=0; s[i] ; i++ )  
            length++;

    for( i=length - 1; i>=0 && s[i] == ' '; i--);

    for( i ; i>=0 && s[i] != ' ' ; i-- )
        count++;

    return count;
}

int main() {

    char str[100], *s;
    int count;

    printf("Enter the string: ");
    scanf("%[^\n]s",str);

    while( getchar() != '\n' );

    s = str;
   
    count = lengthOfLastWord( s );

    printf("Length of the last word: %d", count);

    return 0;
}