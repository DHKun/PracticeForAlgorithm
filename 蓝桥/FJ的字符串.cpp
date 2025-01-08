#include <iostream>
using namespace std;
int main()
{
    int n;
    string a, b;
    char c; // 添加的中心字母
    while (cin >> n)
    {
        a = 'A', b = 'A', c = 'B'; // 初始化噢
        n--;                       // 因为初始化为'A',n减一次。
        while (n--)
        {
            b = a + c + a; // string类直接拼起来
            a = b;         // b拷贝到a
            c++;           // 中心添加的字母加一，变成下一次字母
        }
        cout << b << endl;
    }
    return 0;
}