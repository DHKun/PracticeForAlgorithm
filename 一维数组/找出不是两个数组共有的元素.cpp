#include<stdio.h>
int main(){
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int m=0;
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    int t=0;
    int c[20];
    int count;
    for(int j=0;j<n;j++){
        count=0;
        for(int k=0;k<m;k++){
            if(a[j]==b[k]){
                count=1;
                break;
            }
        }
        if(count==0){
            c[t]=a[j];
            t++;
            }
    }
    for(int j=0;j<m;j++){
        count=0;
        for(int k=0;k<n;k++){
            if(b[j]==a[k]){
                count=1;
                break;
            }
        }
        if(count==0){
            c[t]=b[j];
            t++;
            }
    }
    //数组去重
    int distance=0;
    for(int i=0; i<t;i++){
        for(int j=i+1;j<t;j++){
            if(c[i]==c[j]){
                distance=t-1-j; //计算j后面还有几位
                                //-1为了得出数组元素下标对应的数（1~6 - 1 == 0~5）
                for(int k=distance;k>0;k--){ //不断--，将j后的元素前移,覆盖掉前面的元素
                    c[j]=c[j+1];
                    j++;
                }
                t--; //移动结束，长度--
            }
        }
    }
    for(int i=0;i<t-1;i++){
        printf("%d ",c[i]);
    }
    printf("%d",c[t-1]);
    return 0;
}