#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "请输入三个数字: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "排序后的数字为: " << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}

