#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v; // 定义一个空的vector

    // 向vector中添加元素
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // 访问vector中的元素
    cout << "The first element is: " << v[0] << endl;
    cout << "The second element is: " << v[1] << endl;
    cout << "The third element is: " << v[2] << endl;

    // 修改vector中的元素
    v[1] = 4;

    // 删除vector中的元素
    v.pop_back();

    // 输出vector中的元素
    cout << "The elements in the vector are: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
