/*??????????*/
#include <stdio.h>
int main(void)
{
    int i, mark, min, n;
    scanf("%d", &n);
    scanf("%d", &mark); 
    min = mark;
    for (i = 1; i < n; i++)
    {
        scanf("%d", &mark);
        if (min > mark)
            min = mark;
    }
    printf("min = %d\n", min);
    return 0;
}
