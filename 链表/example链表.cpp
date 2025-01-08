#include<iostream>
#include<malloc.h>
using namespace std;

struct node{
	int no;
	int score;
	struct node* next; 
};
node s[5]={{1001,89},{1004,90},{1006,78},{1002,85},{1100,99}};

void creatLink(node* h,node a[],int n);
void print(node* h);
void swap(node* a);

int main(){
	node* head=(node*)malloc(sizeof(node));
	creatLink(head,s,5);
	swap(s);
	print(head);
}

void creatLink(node* h,node a[],int n){
	int i=0;
	node* p=h;
	node* newnode;
	while(i<n){
		newnode=(node*)malloc(sizeof(node));
	    newnode->no=a[i].no;
	    newnode->score=a[i].score;

	    p->next=newnode;
	    p=p->next;
	    i++;
	}
	newnode->next=NULL; 
}

void print(node* h){
	node* p=h->next;
	while(p!=NULL){
		cout << p->no << " " << p->score << endl;
		p=p->next; 
	}
}