#include<stdio.h>

int sum(int a,int b){
    if(a>b){
        return 0;
    }
    else if(a==b){
        return a;
    }
    else{
        return a+sum(a+1,b);
    }
}

int main(){
    int a=0;
    int b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    int result=sum(a,b);
    printf("%d",result);
    return 0;
}