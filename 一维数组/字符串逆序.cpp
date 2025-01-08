动态数组与stl解法
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<char> v;
    string input;
    char value;
    while(getline(cin,input)){
        if(input.empty()){
            break;
        }
        for(int i=0;i<input.size();i++){
           v.push_back(input[i]);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
    return 0;
}