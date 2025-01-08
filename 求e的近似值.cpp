#include<stdio.h>
double jinsizhi(double number);
 int main(){
 	int n;
 	scanf("%d",&n);
    double result=jinsizhi(n);
 	printf("%.8lf",result);
 	return 0;
 }
double jinsizhi(double number){
 	double sum=1.0;
 	double i;
 	double fenmu=1.0;
 	for(i=1.0;i<=number;i++){
 		fenmu*=i;
 		sum+=1/fenmu;
	 }
	 return sum;
 }
