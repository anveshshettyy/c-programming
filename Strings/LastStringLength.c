#include<stdio.h>

int lengthOfLastWord(char* s) {
    int length=0, i;
    for( i=0; s[i] ; s++ )
        length++;

    printf("%d",length);
}

int main() {

    char str[100], *s;
    int length=0,i,count;

    printf("Enter the string: ");
    scanf("%s",str);

    while( getchar() != '\n' );

    s = str;
   
    lengthOfLastWord( s );

    return 0;
}