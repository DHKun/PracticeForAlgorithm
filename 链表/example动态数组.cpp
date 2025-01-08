#include<iostream>
#include<malloc.h>
using namespace std;
int main(){
    int* p;
    int n=10;
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<10;i++){
        cin >> p[i];
        cout << p[i] << endl;
    }
    return 0;
}