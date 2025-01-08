#include <iostream>  // 引入iostream头文件，用于输入输出
#include <cmath>     // 引入cmath头文件，用于计算平方根等数学函数
using namespace std; // 使用std命名空间，用于使用iostream和cmath中的函数

int main() // 主函数
{
    int m, n;               // 定义两个整型变量m和n
    cin >> n >> m;          // 输入两个整数m和n
    int i, j;               // 定义两个整型变量i和j
    for (i = 0; i < n; i++) // 循环n次
    {
        for (j = 0; j < m; j++) // 循环m次
        {
            cout << (char)(65 + abs(i - j)); // 输出字符，65+abs(i-j)计算ASCII码，abs(i-j)计算绝对值
        }
        cout << endl; // 换行
    }
    return 0; // 返回0
}
