#include<stdio.h>
int main(){
      int i=0;
      int j=0;
      int n=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
      for(j=1;j<=n+i-1;j++)
       {                                   //n+i-1：每行*的位置
         if(j==n-i+1||j==n+i-1)    //n+i-1：每行最后*的位置
             printf("*");
         else
             printf(" ");
         }
printf("\n");
}                 //————————↑打印上半部分△   
for(i=1;i<n;i++)      //下面比上面少一行
{
     for(j=1;j<=2*n-i-1;j++)
         {
               if(j==i+1||j==2*n-i-1)   //i+1：▽i从第一行算起，*号位于i+1的位置
                    printf("*");            //2*n-i-1：这样得到这一行的元素个数，也是最后一个*在的位置
               else
                    printf(" ");
          }
printf("\n");
}    
return 0;
}


