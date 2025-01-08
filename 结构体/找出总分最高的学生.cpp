#include<iostream>
using namespace std;
struct stu{
    char num[6];
    char name[11];
    int score1;
    int score2;
    int score3;
};
int main(){
    int n=0;
    cin >> n;
    stu a[n];
    int sum[n];
    int max=0;
    for(int i=0;i<n;i++){
        cin >> a[i].num;
        cin >> a[i].name;
        cin >> a[i].score1;
        cin >> a[i].score2;
        cin >> a[i].score3;
    }
    for(int i=0;i<n;i++){
        sum[i]=a[i].score1+a[i].score2+a[i].score3;
    }
    for(int i=0;i<n;i++){
        if(sum[max]<sum[i]){
            max=i;
        }
    }
    cout << a[max].name << " " << a[max].num << " " << sum[max] << endl;
    return 0;
}