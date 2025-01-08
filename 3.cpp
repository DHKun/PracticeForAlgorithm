#include <stdio.h>
#include <stdlib.h> //使用qsort函数

// 升序排序
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int num[30]; 

    printf("请输入30个数字: ");
    for (int i = 0; i < 30; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, 30, sizeof(int), compare);

    printf("排序后的数字为: ");
    for (int i = 0; i < 30; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
