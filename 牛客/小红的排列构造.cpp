#include <bits/stdc++h
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> result(n);
    for (int i = 0; i < n; i++)
    {
        result[i] = i + 1;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            int j = i;
            while (j >= 0 && s[j] == '0')
            {
                swap(result[j], result[j + 1]);
                j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << (i == n - 1 ? "\n" : " ");
    }

    return 0;
}
/*题目描述:
小红定义一个仅由 0 和 1 两个字符构成的 01 串 s 和一个排列 p 是匹配的，当且仅当满足以下条件：
若 si = 1，则排列的前 i 项元素恰好也构成一个排列；
若 si = 0，则排列的前 i 项元素无法构成一个排列；
现在小红拿到了一个长度为 n 的 01 串。请你构造一个排列使得它们是匹配的。
长度为 n 的排列是由 1 ~ n 这 n 个整数，按任意顺序组成的数组，其中每个整数恰好出现一次。例如，{2, 3, 1, 5, 4} 是一个长度为 5 的排列，而 {1, 2, 2} 和 {1, 3, 4} 都不是排列，因为前者存在重复元素，后者包含了超出范围的数。
输入描述:
第一行输入一个正整数 n (1 ≤ n ≤ 10⁵) 代表排列的长度。
第二行输入一个长度为 n 的 01 字符串 s。
输出描述:
如果答案不存在，直接输出 -1；否则，在一行上输出 n 个正整数代表构造的排列。
如果存在多个解决方案，你可以输出任意一个，系统会自动判定是否正确。注意，自测运行功能可能因此返回错误结果，请自行检查答案正确性。
示例 1:
输入
3
001
输出
3 1 2
说明
对于这个样例，
由于 s0 = 0，排列的前一项元素无法构成一个排列；
由于 s1 = 0，排列的前两项元素无法构成一个排列；
由于 s2 = 1，排列的前三项元素构成一个排列；
同时，输出 {2, 3, 1}、{3, 2, 1} 等答案也都是合法的。
示例 2:
输入
4
1110
输出
-1
*/