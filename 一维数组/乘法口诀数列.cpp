#include<stdio.h>
int main(){
	int a1,a2,n,count=3,num[1005],i,j,sum;
    scanf("%d %d %d",&a1,&a2,&n);
    num[1]=a1,num[2]=a2;
	for(i=1;i<=n;i++){
		sum=num[i]*num[i+1];
		if(sum<10){
			num[count++]=sum;
		}else{
			num[count++]=sum/10;
			num[count++]=sum%10;
		}
		if(count>n)break;
	}
	printf("%d", a1);
	for(j=2;j<=n;j++) {
		printf(" %d",num[j]);
	}
    return 0;
}