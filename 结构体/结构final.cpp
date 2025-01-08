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
void maopaopaixu(student stu[],int n);//ð������
void xuanzepaixu(student stu[],int n);//ѡ������
void shunxusearch(student stu[],int n,int target);//˳�����
void erfensearch(student stu[],int target);//���ַ�����
void MAX(student stu[]);
void MIN(student stu[]);

int main(){
    student stu[size]={{1601,"TINA",34},{1023,"TOM",35},{1008,"JERRY",36},{1021,"SAM",37}};

    // for(int i=0;i<size;i++){
    //     cout << "ѧ��:" << endl;
    //     cin >> stu[i].no;
    //     cout << "����:" << endl;
    //     cin >> stu[i].na;
    //     cout << "�ɼ�:" << endl;
    //     cin >> stu[i].score;
    // }

    //ð������
    //maopaopaixu(stu,size);

    //ѡ������
    //xuanzepaixu(stu,size);

    //˳�����
    // int target;
    // scanf("%d",&target);
    // shunxusearch(stu,size,target);

    //���ַ�����
    // int target=0;
    // scanf("%d",&target);
    // erfensearch(stu,target); 

    //���ֵ
    //MAX(stu);

    //��Сֵ
    //MIN(stu);

    //print(stu,size);

    return 0;
}

void print(student a[],int n){
	student* p;
	cout<<setw(7)<<"ѧ��"<<setw(7)<<"����"<<setw(7)<<"�ɼ�"<<endl;
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
        cout << "Ŀ��Ԫ���ڵ�" << index+1 << "��" <<endl;
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
        cout << "Ŀ��Ԫ�ز�����" << endl;
    }
    else{
        cout << "Ŀ��Ԫ���ڵ�" << result+1 << "��" << endl;
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