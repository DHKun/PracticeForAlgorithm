#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p ){
    int i;
    int flag = 1;
    if(p<=1)
        flag = 0;
   else if(p>2){
       
    for (i=2;i<=p-1;i++){
        if(p%i == 0){
            flag=0;
            break;
        }
    }}
    return flag;
}
int PrimeSum( int m, int n ){
    int i;
    int sum;
    sum =0;
    for(i=m;i<=n;i++){
        if(prime(i)){
            sum += i;
        } 
    }
    return sum;
}

