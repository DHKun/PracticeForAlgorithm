<<<<<<< HEAD
/*解题思路
这是一个图论问题，可以将每个位置看作图中的节点，传送门看作有向边
问题可以转化为：求需要最少添加多少条边，才能使图中所有节点都连通
使用并查集来处理节点之间的连通关系：

初始时每个节点都是独立的集合
根据传送门信息，将相连的节点合并到同一个集合
最后统计还剩下多少个独立的集合（连通分量）


要使所有节点连通，需要添加的最少边数 = 连通分量数量 - 1

因为每添加一条边，最多可以连接两个连通分量
要将所有连通分量连接起来，最少需要的边数就是连通分量数量减一*/
#include <bits/stdc++.h>
using namespace std;

// 并查集类，用于处理图中的连通分量
class UnionFind
{
private:
    vector<int> parent; // 存储每个节点的父节点
    vector<int> rank;   // 存储每个节点的秩(树的高度)用于优化合并操作

public:
    // 构造函数：初始化大小为n的并查集，每个节点初始时指向自己
    UnionFind(int n) : parent(n + 1), rank(n + 1, 0)
    {
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }

    // 查找函数：找到节点x所属的根节点
    // 使用路径压缩优化，将查找路径上的所有节点直接连接到根节点
    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    // 合并函数：将两个节点所在的集合合并
    // 使用按秩合并优化，将较小的树接到较大的树下面
    void unite(int x, int y)
    {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// 解决方案函数
int solve(int n, const vector<int> &portals)
{
    UnionFind uf(n);

    // 根据传送门信息建立连接关系
    // 如果位置i连接到位置portals[i-1]，则将它们合并到同一个集合
    for (int i = 1; i <= n; ++i)
    {
        uf.unite(i, portals[i - 1]);
    }

    // 统计不同的连通分量数量
    unordered_set<int> uniqueRoots;
    for (int i = 1; i <= n; ++i)
    {
        uniqueRoots.insert(uf.find(i));
    }

    // 返回需要添加的最少传送门数量
    // 最少传送门数量 = 连通分量数量 - 1
    return uniqueRoots.size() - 1;
}

int main()
{
    // 优化输入输出速度
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // 测试用例数量
    cin >> T;
    while (T--)
    {
        int n; // 位置数量
        cin >> n;
        vector<int> portals(n); // 存储传送门信息
        for (int i = 0; i < n; ++i)
            cin >> portals[i];
        cout << solve(n, portals) << '\n';
    }
    return 0;
}
//题目描述
/*有 n 座城市，分别编号为 1,2,...,n，每座城市持有一台传送到其他城市的折跃门。每台折跃门只能传送到指定编号的城市，且每座城市只能被一台折跃门传送到。给定数组 a，其中 ai 表示第 i 座城市持有的折跃门可以传送到第 ai 座城市。
为了加快城市之间的交通速度，市长们委托小 P 为他们进行折跃门的调整，使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
小 P 可以任意交换两座城市持有的折跃门，他希望知道最少需要交换多少次，才能使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
输入描述：
第一行一个整数 T (1 ≤ T ≤ 10^4)，表示测试用例数。
对于每个测试用例：
第一行一个整数 n (1 ≤ n ≤ 10^5)，表示城市的数量。
第二行共 n 个整数 a1,a2,...,an (1 ≤ ai ≤ n)，表示第 i 座城市持有的折跃门可以传送到第 ai 座城市。
保证所有测试用例的 n 之和不超过 10^5。
输出描述：
对于每个测试用例，输出一行一个整数，表示最少需要交换多少次，才能使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
示例1
输入
5
1
1
2
1 2
3
1 3 2
4
1 3 2 4
5
3 4 5 2 1
输出
0
1
1
2
1
备注:
对于第一组测试用例：显然只有一座城市，不需要交换折跃门，因此答案为0。
=======
/*解题思路
这是一个图论问题，可以将每个位置看作图中的节点，传送门看作有向边
问题可以转化为：求需要最少添加多少条边，才能使图中所有节点都连通
使用并查集来处理节点之间的连通关系：

初始时每个节点都是独立的集合
根据传送门信息，将相连的节点合并到同一个集合
最后统计还剩下多少个独立的集合（连通分量）


要使所有节点连通，需要添加的最少边数 = 连通分量数量 - 1

因为每添加一条边，最多可以连接两个连通分量
要将所有连通分量连接起来，最少需要的边数就是连通分量数量减一*/
#include <bits/stdc++.h>
using namespace std;

// 并查集类，用于处理图中的连通分量
class UnionFind
{
private:
    vector<int> parent; // 存储每个节点的父节点
    vector<int> rank;   // 存储每个节点的秩(树的高度)用于优化合并操作

public:
    // 构造函数：初始化大小为n的并查集，每个节点初始时指向自己
    UnionFind(int n) : parent(n + 1), rank(n + 1, 0)
    {
        for (int i = 1; i <= n; ++i)
            parent[i] = i;
    }

    // 查找函数：找到节点x所属的根节点
    // 使用路径压缩优化，将查找路径上的所有节点直接连接到根节点
    int find(int x)
    {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    // 合并函数：将两个节点所在的集合合并
    // 使用按秩合并优化，将较小的树接到较大的树下面
    void unite(int x, int y)
    {
        int rootX = find(x), rootY = find(y);
        if (rootX != rootY)
        {
            if (rank[rootX] < rank[rootY])
            {
                parent[rootX] = rootY;
            }
            else if (rank[rootX] > rank[rootY])
            {
                parent[rootY] = rootX;
            }
            else
            {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

// 解决方案函数
int solve(int n, const vector<int> &portals)
{
    UnionFind uf(n);

    // 根据传送门信息建立连接关系
    // 如果位置i连接到位置portals[i-1]，则将它们合并到同一个集合
    for (int i = 1; i <= n; ++i)
    {
        uf.unite(i, portals[i - 1]);
    }

    // 统计不同的连通分量数量
    unordered_set<int> uniqueRoots;
    for (int i = 1; i <= n; ++i)
    {
        uniqueRoots.insert(uf.find(i));
    }

    // 返回需要添加的最少传送门数量
    // 最少传送门数量 = 连通分量数量 - 1
    return uniqueRoots.size() - 1;
}

int main()
{
    // 优化输入输出速度
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; // 测试用例数量
    cin >> T;
    while (T--)
    {
        int n; // 位置数量
        cin >> n;
        vector<int> portals(n); // 存储传送门信息
        for (int i = 0; i < n; ++i)
            cin >> portals[i];
        cout << solve(n, portals) << '\n';
    }
    return 0;
}
//题目描述
/*有 n 座城市，分别编号为 1,2,...,n，每座城市持有一台传送到其他城市的折跃门。每台折跃门只能传送到指定编号的城市，且每座城市只能被一台折跃门传送到。给定数组 a，其中 ai 表示第 i 座城市持有的折跃门可以传送到第 ai 座城市。
为了加快城市之间的交通速度，市长们委托小 P 为他们进行折跃门的调整，使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
小 P 可以任意交换两座城市持有的折跃门，他希望知道最少需要交换多少次，才能使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
输入描述：
第一行一个整数 T (1 ≤ T ≤ 10^4)，表示测试用例数。
对于每个测试用例：
第一行一个整数 n (1 ≤ n ≤ 10^5)，表示城市的数量。
第二行共 n 个整数 a1,a2,...,an (1 ≤ ai ≤ n)，表示第 i 座城市持有的折跃门可以传送到第 ai 座城市。
保证所有测试用例的 n 之和不超过 10^5。
输出描述：
对于每个测试用例，输出一行一个整数，表示最少需要交换多少次，才能使得从任意一座城市出发，都可以通过折跃门到达任意一座城市。
示例1
输入
5
1
1
2
1 2
3
1 3 2
4
1 3 2 4
5
3 4 5 2 1
输出
0
1
1
2
1
备注:
对于第一组测试用例：显然只有一座城市，不需要交换折跃门，因此答案为0。
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
对于第三组测试用例：只需交换城市 1 与其它城市中任意一个折跃门即可使任意两座城市互通，因此答案为1。*/