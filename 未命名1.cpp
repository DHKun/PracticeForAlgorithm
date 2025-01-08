#include<stdio.h>
int main()
{
    double n=1;//用于表示分母的变化
    double eps=0;//用于存放精度
    double s=1;//用于存放分式
    double sum=0;//用于存放结果
    int flag=1;//用来表示分式的正负
    scanf("%lf",&eps);
    do//使用do--while语句，避免精度设置大于1时，出现sum=0的情况
    {
        s=1.0/n;    //该位置需要特别注意，s的变化放在sum的前面
        sum=flag*s+sum;
        n=n+3;
        flag=-1*flag;
    }while(s>=eps);
    printf("sum = %.6f",sum);
}

