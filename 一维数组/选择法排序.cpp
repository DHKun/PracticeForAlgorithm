#include<stdio.h>
void paixu(int a[],int n) {
    for (int i=0; i<n-1;i++) {
        int max=i;
        for (int j = i + 1; j < n; j++) {
            if (a[j]>a[max]) {
                max=j;
            }
        }
        int temp=a[i];
        a[i]=a[max];
        a[max] = temp;
    }
}
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    paixu(a,n);
    for(int k=0;k<n-1;k++){
        printf("%d ",a[k]);
    }
    printf("%d",a[n-1]);
    return 0;
}