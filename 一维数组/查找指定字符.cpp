#include<iostream>
#include<string>
using namespace std;
int main(){
    int c=0;
    int t=0;
    char index;
    scanf("%c ",&index);
    //cin.get(index);//cin >> index;
    //cin.ignore();
    char a[80]={0};
    cin.getline(a,80);
    for(int i=0;i<80;i++){
        if(index==a[i]){
            c=1;
            t=i;
        }
    }
    if(c==1){
        cout << "index = " << t;
        }else{
            cout << "Not Found";
    }
    return 0;
}