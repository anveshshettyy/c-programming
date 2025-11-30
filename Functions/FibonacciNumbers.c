#include<stdio.h>

int fib(int n) {
    if(n<2) return n;

    int a = fib(n-1);
    int b = fib(n-2);

    return a+b;
}

int main(){
    int n = 5;
    printf("%d", fib(n));
}