#include<stdio.h>

int main()
{
    int num, k;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter k: ");
    scanf("%d", &k);

    if(num & ( 1 << k ))
        printf("Yes");
     else 
        printf("No");
    
    return 0;
}