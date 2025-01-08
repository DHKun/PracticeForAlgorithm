#include <stdio.h>
 
int main()
{
    int a,n;
    double item=0;
    double sum=0;
    scanf("%d %d",&a,&n);
    for(int i=1;i<=n;i++){
        item=item*10+a;
        sum+=item;
    }
 
    printf("s = %.lf\n",sum);
    return 0;
}
