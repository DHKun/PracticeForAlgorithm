#include<iostream>
#include<iomanip>


#define size 4
using namespace std;

struct student{
    int no;
    char na[100];
    int score;
};

void print(student stu[],int n);
void maopaopaixu(student stu[],int n);//冒泡排序
void xuanzepaixu(student stu[],int n);//选择排序
void shunxusearch(student stu[],int n,int target);//顺序查找
void erfensearch(student stu[],int target);//二分法查找
void MAX(student stu[]);
void MIN(student stu[]);

int main(){
    student stu[size]={{1601,"TINA",34},{1023,"TOM",35},{1008,"JERRY",36},{1021,"SAM",37}};

    // for(int i=0;i<size;i++){
    //     cout << "学号:" << endl;
    //     cin >> stu[i].no;
    //     cout << "姓名:" << endl;
    //     cin >> stu[i].na;
    //     cout << "成绩:" << endl;
    //     cin >> stu[i].score;
    // }

    //冒泡排序
    //maopaopaixu(stu,size);

    //选择排序
    //xuanzepaixu(stu,size);

    //顺序查找
    // int target;
    // scanf("%d",&target);
    // shunxusearch(stu,size,target);

    //二分法查找
    // int target=0;
    // scanf("%d",&target);
    // erfensearch(stu,target); 

    //最大值
    //MAX(stu);

    //最小值
    //MIN(stu);

    //print(stu,size);

    return 0;
}

void print(student a[],int n){
	student* p;
	cout<<setw(7)<<"学号"<<setw(7)<<"姓名"<<setw(7)<<"成绩"<<endl;
	for(p=a;p<a+n;p++){
		cout<<setw(7)<<p->no<<setw(7)<<p->na<<setw(7)<<p->score<<endl;
	}
}

void maopaopaixu(student stu[], int n){
    student temp;
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if (stu[j].score<stu[j+1].score) {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
        }
    }
    print(stu,size);
}

void xuanzepaixu(student stu[],int n){
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(stu[j].score>stu[max].score) {
                max=j;
            }
        }
        student temp=stu[i];
        stu[i]=stu[max];
        stu[max]=temp;
    }
    print(stu,size);
}

void shunxusearch(student stu[],int n,int target){
    int index;
    for(int i=0;i<n;i++){
        if(stu[i].score==target){
            index=i;break;
        }else{
            index=-1;
        }
    }
    if(index!=-1) {
        cout << "目标元素在第" << index+1 << "个" <<endl;
    }else{
        cout<<"error"<<endl;
    }
}

void erfensearch(student stu[],int target){
    int coin=0;
    int left=0;
    int right=size-1;
    int result=-1;
    if(stu[0].score<stu[1].score){
        coin=1;
    }else{
        coin=-1;
    }
    while(left<=right&&coin==1){ 
        int mid=left+(right-left)/2;
        if(stu[mid].score==target) {
            result=mid;break;
        }
        else if(stu[mid].score<target) {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    while(left<=right&&coin==-1){ 
        int mid=left+(right-left)/2;
        if(stu[mid].score==target) {
            result=mid;break;
        }
        else if(stu[mid].score<target) {
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    if(result==-1){ 
        cout << "目标元素不存在" << endl;
    }
    else{
        cout << "目标元素在第" << result+1 << "个" << endl;
    }
}

void MAX(student stu[]){
    int MAX=0;
    for(int i=0;i<size;i++){
        if(stu[MAX].score<stu[i].score){
            MAX=i;
        }
    }
    cout<< "MAX is" << stu[MAX].score << endl;
}

void MIN(student stu[]){
    int MIN=0;
    for(int i=0;i<size;i++){
        if(stu[MIN].score>stu[i].score){
            MIN=i;
        }
    }
    cout << "MIN is" << stu[MIN].score << endl;
}