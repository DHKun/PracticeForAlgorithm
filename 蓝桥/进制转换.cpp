#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string hexNumber;
    cin >> hexNumber; // hello

    unsigned int decimalNumber;
    istringstream iss(hexNumber);
    iss >> hex >> decimalNumber; // 将十六进制字符串转换为十进制数

    cout << decimalNumber << endl; // 输出转换后的十进制数

    return 0;
}

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    unsigned int a;
    cin >> a; // 从键盘读取非负整数

    stringstream ss;
    ss << hex << uppercase << a; // 将十进制整数转换为十六进制字符串

    string hexNumber = ss.str(); // 获取转换后的十六进制字符串

    cout << hexNumber << endl; // 输出十六进制表示

    return 0;
}