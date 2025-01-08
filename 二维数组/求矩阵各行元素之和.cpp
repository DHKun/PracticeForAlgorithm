#include<iostream>
using namespace std;
int main(){
    int m=0,n=0;
    int sum=0;
    cin >> m;
    cin >> n;
    int a[m][n];
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            cin >> a[j][k];
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            sum+=a[j][k];
        }
        cout << sum << endl;
        sum=0;
    }
    return 0;
}