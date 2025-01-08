#include <stdio.h>

int main()
{
    int n,i;
    double x,a,fz=2.0,fm=1.0,sum=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
            x=fz/fm;
            sum+=x;
            a=fm;
            fm=fz;
            fz=fz+a;
    }
    printf("%.2f",sum);
    return 0;
}

