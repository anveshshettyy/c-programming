#include <stdio.h>
#include<string.h>

int main()
{

    char str[100], substr[100];
    int i = 0, totallen, substrlen;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    totallen = strlen( str );

    while (getchar() != '\n');

    printf("Enter a substring: ");
    scanf("%[^\n]s", substr);

    char *result;
    result = strstr( str, substr);

    substrlen = strlen( result );

    int ans = totallen - substrlen;
     
    printf("%d", ans);
    


    return 0;
}
