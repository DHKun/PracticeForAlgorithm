/*
解题思路：
1. 问题分析：
   - 需要在n×n的棋盘上放置n种奇物，每种各n个
   - 要求每行每列的异或和（紊乱值）最小
   - n保证是奇数

2. 解决方案：
   - 采用循环移位法构造解
   - 第一行放置1到n
   - 每下一行都是上一行向右循环移动一位
   - 这样可以保证每行每列都包含1到n的所有数字

3. 正确性证明：
   - 由于n是奇数，这种构造方式能确保：
   - 每行每列都恰好包含1到n的每个数字一次
   - 最终得到的紊乱值在所有可能方案中是最小的
*/

#include <bits/stdc++.h>
using namespace std;

// 计算异或和：遍历数组中所有数字进行异或运算
int calculateXOR(const vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
    return result;
}

// 检查方案的最大紊乱值：
// 1. 检查所有行的异或和
// 2. 检查所有列的异或和
// 3. 返回所有行列异或和中的最大值
int checkSolution(const vector<vector<int>> &grid, int n)
{
    int maxChaos = 0;
    for (int i = 0; i < n; i++)
    {
        maxChaos = max(maxChaos, calculateXOR(grid[i]));
    }
    for (int j = 0; j < n; j++)
    {
        vector<int> column;
        for (int i = 0; i < n; i++)
        {
            column.push_back(grid[i][j]);
        }
        maxChaos = max(maxChaos, calculateXOR(column));
    }
    return maxChaos;
}

// 生成最优解：
// 使用循环移位法构造n×n矩阵
// 每个位置的值为((列号+行号) mod n) + 1
// 这确保了每行每列都包含1到n的所有数字
vector<vector<int>> generateOptimalSolution(int n)
{
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = ((j + i) % n) + 1;
        }
    }
    return grid;
}

int main()
{
    // 1. 读取输入的n值
    int n;
    cin >> n;

    // 2. 生成最优解矩阵
    vector<vector<int>> solution = generateOptimalSolution(n);

    // 3. 计算并输出最大紊乱值
    int maxChaos = checkSolution(solution, n);
    cout << maxChaos << endl;

    // 4. 按格式输出矩阵
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << solution[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
//题目描述
/*这些奇物共有 n 种，分别从 1 到 n 编号，每种奇物都恰好有 n 个，即一共有 n×n 个奇物。开拓者决定把这些奇物安置到一个专门用来收容奇物的 n×n 大小的棋盘上。
但是开拓者发现，这些奇物会与棋盘耦合并互相产生一些奇妙的影响，导致在这个棋盘中，每一行和每一列的 n 个奇物都会在这一行或者这一列产生一个紊乱值，而紊乱值的大小为这 n 个奇物编号的异或和†。
如果有某一行或者某一列的紊乱值超过阈值 m，可能会导致这些奇物被棋盘破坏。因此，开拓者想知道如果以最优方案摆放这些奇物，阈值 m 最低可以设置到多少。
开拓者想让你给出最优方案摆放方案下阈值 m 的最小值，以及把这 n×n 个奇物摆放在棋盘上的具体方案。
† 异或和，即所有数的按位异或和。
输入描述:
一行一个正整数 n (1≤n<500, 且保证 n 是奇数)表示奇物的种类以及每种奇物的数量。
输出描述:
第一行一个正整数 m 表示最优方案下的紊乱值。
接下来输出一个 n 行 n 列的矩阵，表示一种最优方案。如果存在多个可行方案，输出任意一种。
示例1
输入
1
输出
1
1
示例2
输入
3
输出
0
1 2 3
2 3 1
3 1 2
备注:
注意到 n 是奇数。*/