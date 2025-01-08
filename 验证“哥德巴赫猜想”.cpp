#include<stdio.h>
#include<math.h> 
int prime(int x);
int main()
{
  int n,i;
  scanf("%d",&n);
  for(i=2;;i++)
  {
    if(prime(i)&&prime(n-i))
  	{
    	printf("%d = %d + %d",n,i,n-i);
    	break;
	   }
  }
  return 0;
}
int prime(int x)
{
  int i;
  for(i=2;i<=sqrt(x);i++)
  {
    if(x%i==0)
      return 0;
  }
  return 1;
}