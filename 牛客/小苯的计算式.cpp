<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int test(int n, int C){
    int count = 0; // 初始化符合条件的计数器

    // 遍历所有可能的 A 值，A 的范围是从 0 到 C
    for (int A = 0; A <= C; ++A){
        int B = C - A;

        // 将表达式 "A+B=C" 转换成字符串格式
        string demo = to_string(A) + "+" + to_string(B) + "=" + to_string(C);

        // 检查表达式的长度是否等于 n，且 A 和 B 没有前导零（如 01、02 等）
        if (demo.length() == n && (to_string(A).length() == 1 || to_string(A)[0] != '0') && (to_string(B).length() == 1 || to_string(B)[0] != '0')){
            ++count;
        }
    }
    return count;
}

int main()
{
    int n, C;
    cin >> n >> C;
    cout << test(n, C) << endl;
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

int test(int n, int C){
    int count = 0; // 初始化符合条件的计数器

    // 遍历所有可能的 A 值，A 的范围是从 0 到 C
    for (int A = 0; A <= C; ++A){
        int B = C - A;

        // 将表达式 "A+B=C" 转换成字符串格式
        string demo = to_string(A) + "+" + to_string(B) + "=" + to_string(C);

        // 检查表达式的长度是否等于 n，且 A 和 B 没有前导零（如 01、02 等）
        if (demo.length() == n && (to_string(A).length() == 1 || to_string(A)[0] != '0') && (to_string(B).length() == 1 || to_string(B)[0] != '0')){
            ++count;
        }
    }
    return count;
}

int main()
{
    int n, C;
    cin >> n >> C;
    cout << test(n, C) << endl;
    return 0;
}
>>>>>>> c887bd9caf5bc4e1ed2d63c088ced271d49bc76e
