#include <stdio.h>

int fib( int n );

int main(){
    int n;

    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

int fib( int n ){
    int a=1;
    int b=1;
    int c;
    int i;
    if (n == 1 || n == 2) {
        return 1;
    }
    for(i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}