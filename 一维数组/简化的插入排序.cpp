#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    int t=0;
    scanf("%d",&k);
    for(int j=0; j<n; j++){
        if(k<a[j]&&t==0){
            printf("%d ",k);
            t=1;
        }
        printf("%d ",a[j]);
    }
    if(t!=1){
        printf("%d ",k);
    }
    return 0;
}
//动态数组解法
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=0;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin >> v[i];
//     }
//     int x;
//     cin >> x;
//     vector<int> result;
//     bool inserted = false;
//     for(int i = 0; i < n; i++){
//         if (!inserted && x < v[i]) {
//             result.push_back(x);
//             inserted = true;
//         }
//         result.push_back(v[i]);
//     }
//     if(!inserted){
//         result.push_back(x);
//     }
//     for(int i=0;i<result.size();i++){
//         cout << result[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }