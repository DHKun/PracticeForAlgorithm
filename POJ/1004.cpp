//Financial Management
#include<stdio.h>
int main(){
    double a[12];
    for(int i=0;i<12;i++){
        scanf("%lf",&a[i]);
    }
    double sum=0;
    for(int i=0;i<12;i++){
        sum+=a[i];
    }
    double average=sum/12.0;
    printf("$%.2f\n",average);
    return 0;
}