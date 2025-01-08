#include <stdio.h>
#include <math.h>
int main () {
    int N,A,B,i,j,t,num,sum;
    scanf("%d", &N);
    A = pow(10,N-1);
    B = A*10;
    for (i = A; i < B; i++) {
        num = i;   // 因为后面计算出来的sum还要和i进行比较，所以每次把i赋值给num。
        sum = 0;   // 每次要给sum重新赋值为0。
        for (j = 0; j < N; j++) {   // 这个循环就是用来求num的各个位数字的N次方的和的
            t = num%10;             // 每次取最低位的数字
            sum += pow(t,N);
            num /= 10;              // 计算完后，对num整除10
        }
        if (sum == i) printf("%d\n",i);
    }
    return 0;
}

优化后：
#include <stdio.h>
#include <math.h>
int main () {
    int N,A,B,i,j,k,t,num,sum,prod;
    scanf("%d", &N);
    A = pow(10,N-1);
    B = A*10;
    for (i = A; i < B; i++) {
        num = i;
        sum = 0;
        for (j = 0; j < N; j++) {
            t = num%10;
            for (k = 0, prod = 1; k < N; k++) prod *= t;
            sum += prod;
            num /= 10;
        }
        if (sum == i) printf("%d\n",i);
    }
    return 0;
}