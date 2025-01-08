#include <iostream>

using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<sizeof(arr[x][y])<<endl;
    cout<<sizeof(arr[0][y])<<endl;
    return 0;
}