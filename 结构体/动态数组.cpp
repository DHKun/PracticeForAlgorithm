#include<iostream>
#include<malloc.h>
using namespace std;
typedef struct NODE{
    int num;
    int score;
}node;
int main(){
    int n;
    cin>>n;
    node* p=(node*)malloc(n*sizeof(node));
    //node* q=p;
    for(node* q=p;q<p+n;q++){
        cin>>q->num>>q->score;
    }
    for(node* q=p;q<p+n;q++){
        cout<<q->num<<q->score;
    }
    return 0;
}