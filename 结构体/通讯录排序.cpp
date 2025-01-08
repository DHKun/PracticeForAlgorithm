#include<iostream>
using namespace std;
struct fr{
    char name[11];
    int birth;
    char num[18];
};
int main(){
    int n=0;
    cin >> n;
    fr a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].name;
        cin >> a[i].birth;
        cin >> a[i].num;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j].birth>a[j+1].birth){
                fr temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i].name << " " << a[i].birth << " " << a[i].num << endl;
    }
    return 0;
}