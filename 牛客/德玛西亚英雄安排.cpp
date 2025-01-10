#include <iostream>
#include <vector>
using namespace std;

const int MOD = 100000000;
int n, m;
vector<vector<int>> grid;
vector<vector<int>> dp;

bool isValid(int row, int state)
{
    for (int i = 0; i < m; i++)
    {
        if ((state & (1 << i)) && grid[row][i] == 0)
        {
            return false;
        }
        if (i > 0 && (state & (1 << i)) && (state & (1 << (i - 1))))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    while (cin >> n >> m)
    {
        grid.assign(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        int totalStates = 1 << m;
        dp.assign(n, vector<int>(totalStates, 0));

        for (int state = 0; state < totalStates; state++)
        {
            if (isValid(0, state))
            {
                dp[0][state] = 1;
            }
        }

        for (int i = 1; i < n; i++)
        {
            for (int prevState = 0; prevState < totalStates; prevState++)
            {
                if (dp[i - 1][prevState] == 0)
                    continue;

                for (int currState = 0; currState < totalStates; currState++)
                {
                    if (!isValid(i, currState))
                        continue;

                    if ((currState & prevState) != 0)
                        continue;

                    dp[i][currState] = (dp[i][currState] + dp[i - 1][prevState]) % MOD;
                }
            }
        }

        int result = 0;
        for (int state = 0; state < totalStates; state++)
        {
            result = (result + dp[n - 1][state]) % MOD;
        }

        cout << result << endl;
    }
    return 0;
}
/*德玛西亚是一个实力雄厚、奉公守法的国家，有着功勋卓著的光荣军史。有一天他们想去制裁邪恶的比尔吉沃特，于是派遣了自己最优秀的战士。结果比尔吉沃特领土太小，只有长为n宽为m共计n*m块土地，其中有些土地标记为0表示为高山峻岭或者深海湖泊，英雄们无法在其中站立，只有标记为1的土地才能容纳一个英雄。德玛西亚的英雄们战斗时有一个特点，他们不希望队友站在自己旁边显得很暧昧。请问最多能有多少种安排德玛西亚英雄的方法？
输入描述:
输入包含多组测试数据；
每组数据的第一行包含2个整数n和m (n <= 12, m <= 12 )，之间用空格隔开；
接下来的n行，每行m个数，表示n*m的比尔吉沃特领土。
输出描述:
输出一个整数n代表安排应用的方法。
（答案取膜100000000）
示例1
输入
3 3
1 1 1
0 1 1
1 0 0
输出
24*/