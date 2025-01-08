#include<stdio.h>
int main(){
	int a[10]={1,2,3,4,5,6,7,9,11,15};
	int low=0,high=9,mid;
	int key;
	scanf("%d",&key);
	while(high>=low){
		mid=(low+high)/2;
		if(a[mid]=key)break;
		if(a[mid]<key){
			low=mid+1;
		}
		if(a[mid]<key){
			high=mid-1;
		}
	}
	return 0;
} 
