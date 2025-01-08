#include<stdio.h>
void pailieshengxu(int a[],int n);
int main(){
	int a[10]={11,5,3,1,4,7,9,15,2,6};
	pailieshengxu(a,10);	
	return 0;
}
void pailieshengxu(int a[],int n){
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
		for(f=0;f<10;f++){
			printf("%d ",a[f]);
		}
		printf("\n");	
	}
}
