#include<stdio.h>
int main()
{
    int n,i,j,a=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   {
      for(j=n;j>=i;j--)
   {
      printf("%c ",'A'+a);
      a++;
   }
   printf("\n");
 }  
    return 0;
}