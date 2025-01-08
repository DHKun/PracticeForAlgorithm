#include<stdio.h>
int main(){
    double eps;
    double fenzi=1.0;
    double fenmu=1.0;
    double t=1.0;
    double last=1.0;
    double sum=1.0;
    int n=1;
    double fsum;
    scanf("%le", &eps);
    while(last>eps){
        fenzi*=n;
        fenmu*=(2*n+1);
        last=fenzi/fenmu;
        sum+=last;
        n++;
        }
        fsum=2*sum;
        printf("PI = %.5f",fsum);
    return 0;
}