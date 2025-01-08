#include <iostream>
#include <string>
using namespace std;

// 将字符串表示的大整数加法的函数
string bigIntegerAddition(string a, string b)
{
    int i = a.size() - 1;
    int j = b.size() - 1;
    int carry = 0;
    string result = "";

    // 从字符串的末尾开始，模拟手工加法
    while (i >= 0 || j >= 0 || carry > 0)
    {
        int sum = carry;
        if (i >= 0)
        {
            sum += a[i--] - '0'; // 将字符转换为整数并加到sum上
        }
        if (j >= 0)
        {
            sum += b[j--] - '0';
        }
        carry = sum / 10;                       // 计算进位
        result = char(sum % 10 + '0') + result; // 将当前位的结果转换为字符，并添加到结果字符串的前面
    }
    return result;
}

int main()
{
    string a, b;
    // 输入两个大整数
    cin >> a;
    cin >> b;
    // 输出它们的和
    cout << bigIntegerAddition(a, b) << endl;
    return 0;
}