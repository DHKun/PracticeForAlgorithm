#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
        if(a[i]>a[max]){
            max=i;
        }
    }
    printf("%d %d\n",a[max],max);
    return 0;
}