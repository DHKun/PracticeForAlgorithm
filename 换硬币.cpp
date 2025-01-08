#include<stdio.h>
int main(){
	int wufen,erfen,yifen;
	int x;
	int count=0;
	scanf("%d",&x);
	for(wufen=x/5;wufen>=1;wufen--)
	for(erfen=x/2;erfen>=1;erfen--)
	for(yifen=x;yifen>=1;yifen--)
	if(x==wufen*5+erfen*2+yifen){
		printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",wufen,erfen,yifen,wufen+erfen+yifen);
		count++;
	}
	printf("count = %d",count);
	return 0;
}
