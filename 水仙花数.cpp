#include <stdio.h>
#include <math.h>

int isArmstrong(int num);

int main() {
    int N;
    scanf("%d", &N);

    int start = pow(10, N - 1);  // 计算N位数的起始值
    int end = pow(10, N) - 1;    // 计算N位数的结束值

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // 计算数字的位数
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        digits++;
    }

    // 计算每个位上数字的N次幂之和
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // 判断是否为水仙花数
    return (sum == originalNum);
}
