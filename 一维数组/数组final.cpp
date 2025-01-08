#include <stdio.h>

#define SIZE 4

void print(int a[],int n);
void maopaoshengxu(int a[],int n);//冒泡升序排序
void maopaojiangxu(int a[],int n);//冒泡降序排序
void xuanzepaixu(int a[],int n);//选择排序
void shunxusearch(int a[],int n,int target);//顺序查找
void erfensearch(int a[],int target);//二分法查找
void MAX(int a[]);
void MIN(int a[]);

int main(){
    int a[SIZE];
    printf("输入%d个数：\n",SIZE);
    
    for(int i=0;i<SIZE;i++) {
        scanf("%d",&a[i]);
    }//input

    //冒泡排序
    //maopaoshengxu(a,SIZE);
    //maopaojiangxu(a,SIZE);

    //选择排序
    //xuanzepaixu(a,SIZE);

    //顺序查找
    // int target;
    // scanf("%d",&target);
    // shunxusearch(a,SIZE,target);
    

    //二分法查找
    // int target=0;
    // scanf("%d",&target);
    // erfensearch(a,target); 

    //最大值
    //MAX(a);

    //最小值
    //MIN(a);

    //print(a,SIZE);//output

    return 0;
}

void print(int a[],int n){
    for(int i=0;i<n;i++) {
       printf("%d ",a[i]);
    }
}

void maopaoshengxu(int a[],int n){
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
    }
    print(a,SIZE);
	printf("\n");
}

void maopaojiangxu(int a[],int n){
	int t;
	int j=0;
	int i;
	int f;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]<a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}	
	}
    print(a,SIZE);
	printf("\n");
}

void xuanzepaixu(int a[],int n){
    for (int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[max]) {
               max=j;
            }
        }
        int temp=a[i];
        a[i]=a[max];
        a[max]=temp;
    }
    print(a,SIZE);
}

void shunxusearch(int a[],int n,int target){
    int index=0;
    for(int i=0;i<n;i++){
        if(a[i]==target){
            index=i;break;
        }
        index=-1;
    }
    if (index!=-1) {
        printf("目标元素在第%d个\n",index+1);
    } else {
        printf("error\n");
    }
}

void erfensearch(int a[],int target){
    int left=0;
    int right=SIZE-1;
    int coin=0;
    int result=-1;
    if(*a<*(a+1)){
        coin=1;
    }else{
        coin=-1;
    }
    while(left<=right&&coin==1){ 
        int mid=left+(right-left)/2;
        if(a[mid]==target) {
            result=mid;break;
        }
        else if(a[mid]<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    while(left<=right&&coin==-1){ 
        int mid=left+(right-left)/2;
        if(a[mid]==target) {
            result=mid;break;
        }
        else if(a[mid]<target) {
            right=mid-11;
        }
        else{
            left=mid+1;
        }
    }
    if(result==-1){ 
        printf("目标元素不存在");
    }
    else{
        printf("目标元素在第%d个",result+1);
    }
}

void MAX(int a[]){
    int MAX=0;
    for(int i=0;i<SIZE;i++){
        if(a[MAX]<a[i]){
            MAX=i;
        }
    }
    printf("MAX is %d",a[MAX]);
}

void MIN(int a[]){
    int MIN=0;
    for(int i=0;i<SIZE;i++){
        if(a[MIN]>a[i]){
            MIN=i;
        }
    }
    printf("MIN is %d",a[MIN]);
}