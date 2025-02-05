#include<stdio.h>

int main(){
    char str[100] = {"leetcode"}, arr[100];

    int i, j=0;
    for( i=0; str[i]; i++ )
    {
        if( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            arr[j] = str[i];
            str[i] = '*';
            j++;
        }
    }
    arr[j] = '\0';

    for( i=0; str[i]; i++ )
    {
        if( str[i] == '*' )
        {
            str[i] = arr[j-1];
            j--;
        }
    }

    printf("%s", str);



    return 0;
}