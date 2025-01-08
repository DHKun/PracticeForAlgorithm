#include <stdio.h>
#include<math.h>
int main()
{
 int n,i,j,k;
 scanf("%d",&n);
    if(n==1){
        printf("None");
    }
 for(i=2;i<=n;i++)
 {
     k=pow(2,i)-1;
    for(j=2;j<=sqrt(k);j++)
    {
      if(k%j!=0) continue;
      else break;
    }
    if(j>sqrt(k)) printf("%d\n",k);
 }
 return 0; 
}