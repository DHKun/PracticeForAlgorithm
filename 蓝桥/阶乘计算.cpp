#include <iostream>
using namespace std;

const int MAX = 3000; // 足以存储1000!的位数

int result[MAX] = {1}; // 初始化结果数组，第一位为1，代表数值1

void printFactorial(int n)
{
    int carry = 0; // 进位
    int size = 1;  // 当前结果的位数

    for (int x = 2; x <= n; x++)
    {
        for (int i = 0; i < size; i++)
        {
            int prod = result[i] * x + carry;
            result[i] = prod % 10; // 存储当前位的结果
            carry = prod / 10;     // 计算新的进位
        }

        while (carry)
        { // 循环直到进位为0
            result[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
    }

    for (int i = size - 1; i >= 0; i--) // 从最高位到最低位反向打印结果
        cout << result[i];
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printFactorial(n);
    return 0;
}