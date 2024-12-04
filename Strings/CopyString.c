#include<stdio.h>

int main(){

    char str1[100], str2[100];
    int i,l =0;
    
    printf("Enter a String: ");
    scanf("%[^\n]s",str1);

    for( i=0; str1[i]; i++ )
        str2[i] = str1[i];

    str2[i] = '\0';

    printf("Copied String is: %s",str2);

    return 0;
}