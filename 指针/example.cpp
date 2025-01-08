#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

struct student{
  int  no;
  char  *na;
  int score;
};

typedef  struct student STU;
void print(STU* a,int n); 
void sortscore(STU stu[], int n);
void swap(STU* x,STU* y);

int main(){
		
	STU  s[20]={{1601,"TINA",78},{1023,"TOM",98},{1008,"JERRY",88},{1021,"SAM",91},{1071,"JOHN",68},{1611,"JACK",58}};
	print(s,6);
	sortscore(s,6);
	print(s,6);
}

void print(STU* a,int n){
	STU* p;
	cout<<setw(7)<<"Ñ§ºÅ"<<setw(7)<<"ÐÕÃû"<<setw(7)<<"³É¼¨"<<endl;
	for(p=a;p<a+n;p++){
		cout<<setw(7)<<p->no<<setw(7)<<p->na<<setw(7)<<p->score<<endl;
	}
}

void sortscore(STU stu[], int n){
   student temp;
   for (int i=0; i<n-1; i++) {
       for (int j=0; j<n-i-1; j++) {
           if (stu[j].score < stu[j+1].score) {
                swap(&stu[j],&stu[j+1]);
            }
       }
   }
}

void swap(STU* x,STU* y){
	STU temp = *x;
    *x= *y;
    *y = temp;
}