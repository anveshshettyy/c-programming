#include <stdio.h>

char rev_word(char *q){
    int z;
    if(*q==' ')
        z=0;

    else if(*q=='\0')
        z=0;

    else
        z=rev_word(q+1) + 1;
    if(z)
        putchar(*q);
    return z;
    
}
char *rev(char *t)
{
    static char a[100];
    static int i;

    if(*t)
    {
        rev(t+1);
        a[i++]=*t;
    }
    return a;
}

int main()
{
    char *t=(char *)malloc(100*sizeof(char *));
    char *p=NULL;
    int a;
    
    printf("Enter String: ");
    scanf("%[^\n]s",t);
    p=rev(t);
   
    while(*p){
        a=rev_word(p);
        p=p+a;
        if(*p==' '){
            putchar(' ');
            p++;
        }
       
        }

    return 0;
}