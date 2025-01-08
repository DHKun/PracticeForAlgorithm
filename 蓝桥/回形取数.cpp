#include <stdio.h>
int down(int a[200][200], int i, int j, int m)
{ // 方向向下判断
    if (i < m - 1)
    {
        if (a[i + 1][j] == -1) // 如果下一个数据已经去过
            return 0;
        else
            return 1;
    }
    else if (i == m - 1) // 如果到达数组边界
        return 0;
    else
        return 1;
}
int right(int a[200][200], int i, int j, int n)
{
    if (j == n - 1)
        return 0;
    else if (j < n)
    {
        if (a[i][j + 1] == -1)
            return 0;
        else
            return 1;
    }
}
int up(int a[200][200], int i, int j)
{
    if (i == 0)
        return 0;
    else if (a[i - 1][j] == -1)
        return 0;
    else
        return 1;
}
int left(int a[200][200], int i, int j)
{
    if (j == 0)
        return 0;
    else if (a[i][j - 1] == -1)
        return 0;
    else
        return 1;
}

int main()
{
    int a[200][200];
    int i, j;
    int m, n;
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    i = 0;
    j = 0;

    while (m != 1 || n != 1){
        for (; down(a, i, j, m); i++){
            printf("%d ", a[i][j]);
            a[i][j] = -1; // 将去过的数据设置标记即-1
        }
        if (a[i][j + 1] == -1)
            break;

        for (; right(a, i, j, n); j++){
            printf("%d ", a[i][j]);
            a[i][j] = -1;
        }
        if (a[i - 1][j] == -1)
            break;

        for (; up(a, i, j); i--){
            printf("%d ", a[i][j]);
            a[i][j] = -1;
        }
        if (a[i][j - 1] == -1)
            break;

        for (; left(a, i, j); j--){
            printf("%d ", a[i][j]);
            a[i][j] = -1;
        }
        if (a[i + 1][j] == -1)
            break;
    }
    printf("%d", a[i][j]);
    return 0;
}
