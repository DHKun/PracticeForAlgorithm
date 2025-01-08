#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int n,t,j;
    scanf("%d",&n);
    vector<int> v;
    vector<int> y(10,0);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        v.push_back(t);
        if(v[i]!=0) {
            while(v[i]!=0){
                y[v[i]%10]++;// 记录该数字的个位数
                v[i]=v[i]/10;// 去掉该数字的个位数
            }
        }
    }
    j=y[0];// 初始化j为y中第一个数字的出现次数
    int maxCount=y[0];// 初始化maxCount为y中第一个数字的出现次数
    for(int i=0;i<10;i++){
        if(maxCount<=y[i]) maxCount=y[i];// 找到y中出现次数的最大值
    }
    printf("%d:",maxCount);// 输出最大出现次数
    for(int i=0;i<10;i++){
        if(maxCount==y[i]){
            printf(" %d",i);// 输出出现次数最多的数字
        }
    }
    return 0;
}
