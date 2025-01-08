#include<iostream>
using namespace std;
int main(){
    int m=0,n=0;
    int index=0;
    cin >> m;
    cin >> n;
    int a[m][n];
    for(int j=0;j<m;j++){
        for(int k=0;k<n;k++){
            cin >> a[j][k];
        }
    }
    for(int j=1;j<m-1;j++){
        for(int k=1;k<n-1;k++){
           if(a[j][k]>a[j][k+1]&&a[j][k]>a[j][k-1]&&a[j][k]>a[j+1][k]&&a[j][k]>a[j-1][k]){
            cout << a[j][k] << " " << j+1 << " " << k+1 <<endl;
            index=1;
           }
        }
    }

    if(index==0){
        cout << "None " << m << " " << n << endl;
    }
    // for(int j=0;j<m;j++){
    //     for(int k=0;k<n;k++){
    //         cout << a[j][k] << " " ;
    //     }
    //     cout << endl;
    // }
    return 0;
}
