#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n )
{
    if( n<=2 )
        return 1;
    else
        return fib(n-2)+fib(n-1);
}
void PrintFN( int m, int n )
{
    int count=0;
    int i=1;
    while( fib(i)<=n )
    {
        if( fib(i)>=m )
        {
            count++;
            if(count==1)
                printf("%d", fib(i) );
            else
                printf(" %d", fib(i) );
        }
        i++;
    }
    if(count==0)
        printf("No Fibonacci number");
}