#include<stdio.h>
int main(){
	int m,n,sum,num=0;       //定义所需要的所有变量
	scanf("%d %d",&m,&n);
	for(int i=m;i<=n;i++){      //利用循环对[m,n]的每个数字进行讨论
		if(i==1)           //对1的特殊情况进行讨论
            continue;       //跳出这次循环
		sum=1;           //将每次的sum值初始化
		for(int j=2;j<i;j++)         //对数字是否为完数讨论
			if(i%j==0) 
                sum+=j;
		if(sum==i)         //在sum=i时，sum的值即为所需的完数
		{
			printf("%d = 1",i);      //按格式输出完数
			for(int j=2;j<i;j++)         //利用循环找出除1和本身的所有因子
				if(i%j==0)        //j为sum的因子数
					printf(" + %d",j);       //按格式输出所有因子
			printf("\n");
			num++;       //记录所有在[m,n]中的完数
		}
	}
	if(num==0)        //讨论没有完数的情况
        printf("None");
	return 0;
}