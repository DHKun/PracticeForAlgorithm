#include <bits/stdc++.h> //C++中支持的一个几乎万能的头文件，几乎包含所有的可用到的C++库函数，包括vector、string、map、stack等等。在本代码中替代#include <iostream>，#include <stack>，#include <string>
/*优点:
节省时间: 在编写竞赛代码时，开发者可以避免手动输入多个头文件名称，这样能更快地开始实际编程。
减少遗漏: 新手和有经验的开发者都可能会偶尔忘记包含某个特定的头文件。使用#include <bits/stdc++.h> 可以避免这种情况。
缺点:
编译速度: 包含如此多的头文件，虽然编译器可以进行优化，但在大型项目中依然可能导致编译时间的延长。
非标准: 因为这个头文件是非标准的，因此它可能不在所有编译器中都适用。在生产环境或者需要移植性强的项目中，尽量避免使用。*/
using namespace std;

// 使用栈检查字符串是否为回文
bool isPalindrome(string &str){
    stack<char> s; // 创建一个字符栈s，用于存储字符串的前半部分
    int n = str.size(); // 获取字符串str的长度，存储在变量n中

    // 将字符串的前半部分（或前半部分加中间字符，如果是奇数个）压入栈
    for (int i = 0; i < n / 2; ++i){
        s.push(str[i]);
    }

    // 如果字符串长度是奇数，跳过中间的字符
    int start;
    if (n % 2 == 0){
        start = n / 2;
    }else{
        start = n / 2 + 1;
    }
    /*等效于 int start = (n % 2 == 0) ? n / 2 : n / 2 + 1;*/

    // 检查栈中的字符是否与字符串的后半部分匹配
    for (int i = start; i < n; ++i){
        if (s.empty() || s.top() != str[i]){ // 如果栈为空或栈顶字符与当前字符不匹配
            return false;
        }
        s.pop();
    }

    return true;
}

int main(){
    string inputString;
    cin >> inputString;

    // 检查字符串是否为回文，并输出结果
    if (isPalindrome(inputString)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}