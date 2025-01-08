#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    int max=0,min=0;
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[min]){
            min=i;
        }
    }
    int temp1=a[0];
    a[0]=a[min];
    a[min]=temp1;
    for(int k=0;k<n;k++){
        if(a[k]>a[max]){
            max=k;
        }
    }
    int temp2=a[n-1];
    a[n-1]=a[max];
    a[max]=temp2;
    for(int j=0;j<n;j++){
        printf("%d ",a[j]);
    }
    return 0;
}