#include <bits/stdc++.h>
using namespace std;

int n;
const int N = 8;
int a[N][N];
int ants;

bool judge(int row, int col, int num)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == num)
            {
                if (abs(row - i) == abs(col - j) || i == row || j == col)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void dfs(int k, int num)
{
    if (k == n)
    {
        num = 3;
    }
    if (k == 2 * n)
    {
        ants++;
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (a[k % n][j] == 1)
        {
            a[k % n][j] = num;
            if (judge(k % n, j, num))
            {
                dfs(k + 1, num);
            }
            a[k % n][j] = 1;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }

    dfs(0, 2);
    cout << ants << endl;
    return 0;
}
