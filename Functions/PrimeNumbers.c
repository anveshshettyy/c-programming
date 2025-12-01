#include<stdio.h>

int main() {
    int n = 100;

    for(int i=2; i*i<=n; i++) {
        if(i%2 == 0) printf("%d ", i); 
    }
}