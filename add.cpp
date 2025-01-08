#include<stdio.h>
#include<math.h>
int main(){
	double x,m,s;
	int n,f;
	const double eps;
	scanf("%f",x);
	n=0;
	m=1;
	double t=1;
	s=0;
	while(1){
		m=pow(x,n);
		f=fact(n);
		t=m/f;
		s=s+t;
		n++;
		if(fabs(t)<eps)break;
	}
	printf("%d.4f",s);
	return 0;
}
