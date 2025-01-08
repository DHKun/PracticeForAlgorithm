#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
    int i;
    int a=1;
    int sum=0;
    if(number<0){
        number=-number;
        a=-a;
    }
    while(number>0){
        i=number%10;
        sum=sum*10+i;
        number/=10;
    }
    sum*=a;
    return sum;
}