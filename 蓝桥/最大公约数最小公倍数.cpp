#include<iostream>
using namespace std;
int gys(int m,int n);
int gbs(int m,int n,int gcd);

int main(){
    int m=0,n=0;
    cin>>m>>n;
    int gcd=gys(m,n);
    int lcm=gbs(m,n,gcd);
    cout<<lcm;
    return 0;
}

int gys(int m,int n){
    int temp;
    while(n!=0){
        temp=m%n;
        m=n;
        n=temp;
    }
    return m;
}

int gbs(int m,int n,int gcd){
    int lcm;
    lcm=m*n/gcd;
    return lcm;
}
