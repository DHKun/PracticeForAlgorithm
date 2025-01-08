#include <iostream>
using namespace std;

int main(){
    int K;
    cin >> K;
    string move;
    int count=0;
    while(cin>>move&&move!="End"){
        if(move=="ChuiZi"){
            if(count%K==K-1){
                cout<< "ChuiZi" << endl; 
            }else{
                cout<< "Bu" << endl;
            }
        }else if(move=="JianDao"){
            if(count%K==K-1){
                cout<< "JianDao" << endl; 
            }else{
                cout<< "ChuiZi" << endl;
            }
        }else if(move=="Bu"){
            if(count%K==K-1){
                cout<< "Bu" << endl;
            }else{
                cout<< "JianDao" << endl;
            }
        }
        count++;
    }
    return 0;
}