#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

struct ListNode *createlist()
{
    int a,flag;
    flag=1;
    scanf("%d",&a);
    if(a==-1)
        return NULL;
    struct ListNode *h,*p,*t;
    p=(struct ListNode*)malloc(sizeof(struct ListNode));
    p->data=a;
    p->next=NULL;
    h=p;
    while(flag){
        scanf("%d",&a);
        if(a==-1) break;
        t=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->next=t;
        t->data=a;
        t->next=NULL;
        p=t;
    }
    return h;    
}


struct ListNode *deleteeven( struct ListNode *head )
{
    struct ListNode *p,*q,*h;
    h = head;
    p = head;
    q = head->next;
    if(!q){
        if(p->data%2)
            return h;
        return NULL;
    }
    while(q->next){ 
        if(p->data%2){ 
            break;
        }
        h=h->next;
        p=p->next;
        q=q->next;
        }
    if(!q->next){
        return NULL;
    }
    while(q->next){
        if(q->data%2){
            p=q;
        }else{
            p->next=q->next;
            q=q->next;
        }
    }
    if(q->data%2==0){
        p->next=NULL;
    }
    return h;
}
#include <stdio.h>  // 引入标准输入输出库
#include <stdlib.h> // 引入标准库，提供内存分配等函数

// 定义链表的节点结构
struct ListNode {
    int data;                // 节点储存的数据
    struct ListNode *next;   // 指向下一个节点的指针
};

// 函数原型声明
struct ListNode *createlist(); 
struct ListNode *deleteeven( struct ListNode *head ); 

void printlist( struct ListNode *head ) {

     struct ListNode *p = head;  // 创建一个指向头节点的指针用来遍历链表

     // 遍历链表并打印数据值
     while (p) {
           printf("%d ", p->data);
           p = p->next;          // 指向链表中的下一个节点
     }
     // 打印换行符以便在显示每次调用printlist的结果时，有一个新的行开始。
     printf("\n"); 
}

// 程序主函数
int main() {
    struct ListNode *head;   // 创建一个链表的头节点指针

    // 调用createlist()函数，返回链表的头节点
    head = createlist(); 

    // 删除链表中的所有偶数节点，返回删除后链表的头节点
    head = deleteeven(head); 

    // 打印链表中的所有节点的数据值
    printlist(head); 

    return 0;  // 主函数返回0，表示程序成功结束
}

// createlist函数用以创建链表
struct ListNode *createlist() {
    int a, flag; 
    flag = 1;  // 设置flag用以控制循环是否继续
    scanf("%d", &a);  // 从输入读取数据
    if (a == -1)  // 检查是否为结束标志-1
       return NULL;  // 如果读取的值为-1, 则返回NULL，代表链表为空
    struct ListNode *h, *p, *t;
    p = (struct ListNode *)malloc(sizeof(struct ListNode));  // 为新节点分配内存
    p->data = a;  // 为新节点的数据部分赋值
    p->next = NULL;  // 将新节点的下一节点部分设为NULL
    h = p;  // 将头节点的地址设为新节点的地址
    // 使用循环继续添加链表节点，直到输入为-1结束
    while (flag) {
        scanf("%d", &a); // 读取输入的数据
        if (a == -1)  // 检查是否为-1，若是则结束循环
           break;
        t = (struct ListNode *)malloc(sizeof(struct ListNode));  // 为新节点分配内存
        p->next = t;  // 将前一节点的下一节点设为新节点
        t->data = a;  // 为新节点的数据部分赋值
        t->next = NULL;  // 将新节点的下一节点设为NULL
        p = t;  // 将当前节点设为新节点
    }
    return h;  // 返回链表的头节点
}

// deleteeven函数用以删除链表中的所有偶数节点
struct ListNode *deleteeven( struct ListNode *head ) {
    struct ListNode *p, *q, *h;
    h = head;  // h用于保存链表的头节点，无论链表是否被修改
    p = head;  // p用于追踪链表中的当前节点
    q = head->next;  // q用于追踪链表中的下一个节点

    // 处理链表只有一个节点的情况
    if (!q) {  // 如果链表只有一个节点（即head->next为NULL）
        if (p->data % 2)  // 如果这个节点是奇数，就返回链表原样
            return h;
        return NULL;  // 如果这个节点是偶数，就返回NULL（删除这个节点）
    }

    // 找到链表中的第一个奇数节点
    while (q->next) {  // 当链表中还有大于一个节点时
       if (p->data % 2) { // 如果当前节点是奇数，就停止循环
           break;
       }
       h = h->next;  // 否则，就移动h，p，q到下一个节点
       p = p->next;
       q = q->next;
    }

    // 如果链表中没有奇数节点，返回NULL（删除所有节点）
    if (!q->next) { 
        return NULL;
    }

    // 删除其他的偶数节点
    while (q->next) {  // 当链表中还有节点时
        if (q->data % 2) { // 如果下一个节点是奇数
            p = q;  // 移动p和q到下一个节点
        } else { // 如果下一个节点是偶数
            p->next = q->next;  // 跳过这个偶数节点
            q = q->next;  // 移动q到下一个节点
        }
    }
    
    // 处理链表最后一个节点（由于while循环，这个节点没有被处理）
    if (q->data % 2 == 0) { // 如果最后一个节点是偶数
        p->next = NULL;  // 删除这个节点
    }

    return h; // 返回可能被修改的链表
}