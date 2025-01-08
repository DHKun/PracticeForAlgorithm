#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n=0,t=0;
    vector<int> arr;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        arr.push_back(t);
    }
    unordered_map<int,int> countMap;
    for (int element:arr) {
        countMap[element]++;
    }
    auto maxElement=max_element(countMap.begin(),countMap.end(),
        [](const auto& pair1, const auto& pair2){
            return pair1.second < pair2.second;
        });
    cout << maxElement->first << " " << maxElement->second << endl;
    return 0;
}
