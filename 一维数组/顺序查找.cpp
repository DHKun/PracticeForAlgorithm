#include <stdio.h>
#define SIZE 5
int search(int a[],int n,int target) {
    for (int i=0;i<n;i++) {
        if (a[i]==target) {
            return i;
        }
    }
    return -1;
}

int main() {
     int a[SIZE];
     int i;
    printf("输入%d个数：\n",SIZE);
    for (int i=0; i<SIZE;i++) {
        scanf("%d", &a[i]);
    }
    printf("数组：");
    for (int i=0; i<SIZE;i++) {
    printf("%d ",a[i]);
    }
    printf("\n");
    int target;
    printf("要查找的元素：");
    scanf("%d",&target);
    printf("查找的元素：%d\n",target);
    int index=search(a,SIZE,target);
    if (index != -1) {
        printf("目标元素位置：%d\n",index);
    } else {
        printf("error\n");
    }
    return 0;
}
