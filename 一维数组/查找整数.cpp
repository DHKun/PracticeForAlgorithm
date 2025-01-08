#include<stdio.h>
int main(){
    int n=0,t=0;
    scanf("%d %d",&n,&t);
    int a[n];
    int f=0;
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    for(int i=0;i<n;i++){
        if(a[i]==t){
            printf("%d",i);
            f=1;
            break;    
        } 
    }
    if(f==0){ 
    printf("Not Found");
    }
    return 0;
}