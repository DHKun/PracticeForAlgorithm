#include<iostream>
using namespace std;
int main(){
    int m=0;
    int k=0,j=0,i=0;
    cin >> m;
    int a[m][m];
    int MIN=0,MAX=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int flag=0;
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            if(a[i][j]>=a[i][MAX]){
                MAX=j;
            }
        }
        flag=1;
        for(MIN=0;MIN<m;MIN++){
            if(a[MIN][MAX]<a[i][MAX]){
                flag=0;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    if(flag){
        cout << i << " " << MAX << endl;
    }else{
        cout << "NONE" <<endl;
    }
    return 0;
}

