#include<stdio.h>
#include<math.h>
int main(){
    float x;
    int n=1;
    double fenmu=1.0;
    double sum=1.0;
    double fenzi;
    double esp=1.0;
    scanf("%f",&x);
    while(esp>0.00001){
        fenzi=pow(x,n);
        fenmu*=n;
        esp=fenzi/fenmu;
        sum+=esp;
        n++;
    }
    printf("%.4f",sum);
    return 0;
}