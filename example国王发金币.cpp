#include<stdio.h>
int main()
{
    int count = 0;
    int k, sum = 0, i = 1;
    scanf("%d", &k);
    while(count < k){
        count = count + i;
        int num = i * i;
        sum = sum + num;
        i++;
    }
    int a = count - k;
    int y = a * (i-1);
    int w = sum - y;
    printf("%d", w);
}