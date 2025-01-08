#include<stdio.h>
int main()
{
    char s;
    int count;
    int num=0;
    s=getchar();
    for(int i=0;s!='\n';i++)
    {
        if(s!=' '){
            count++;
            num=1;
        }
        else
        {
            if(count!=0)
                printf("%d ",count);
            count=0;
        }
        s=getchar();
    }
    if(num==0)
        printf("0 ");
    if(count!=0)
        printf("%d ",count);
    return 0;
}