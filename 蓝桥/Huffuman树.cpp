#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum = 0;
	while (a.size() > 1)
	{
		// 排序数组，以便能够找到最小的两个数
		sort(a.begin(), a.end());
		// 取数组的前两个元素，因为它们是最小的
		int m = a[0] + a[1];
		sum += m;
		// 移除已经使用过的两个元素
		a.erase(a.begin());
		a.erase(a.begin());
		// 将新生成的元素m加入数组
		a.push_back(m);
	}
	cout<< sum;
	return 0;
}