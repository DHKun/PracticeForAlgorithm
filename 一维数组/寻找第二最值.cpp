#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main(){
	vector<int> nums;
    int n;
    while (cin >> n&&n!=0) {
        nums.push_back(n);
    }
    sort(nums.begin(),nums.end());
    for (const auto& num:nums) {
    cout << num << " ";
}
    nums.pop_back();
    cout << "\n" << nums.back() << endl;
	return 0;
}
