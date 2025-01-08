#include <stdio.h>

int countWays(int a, int coinIndex) {
    if (a == 0) {
        return 1;
    }
    else if (a < 0 || coinIndex > 5) {
        return 0;
    }
    else {
        int currentCoin[] = {1, 2, 10, 25, 50};
        int waysWithoutCoin = countWays(a, coinIndex + 1);
        int waysWithCoin = countWays(a - currentCoin[coinIndex], coinIndex);
        return waysWithoutCoin + waysWithCoin;
    }
}

int main() {
    int a = 10; // 目标金额为10美元
    int coinIndex = 0; // 硬币索引从0开始
    
    int result = countWays(a, coinIndex);
    
    printf("There are %d ways to change $%d.\n", result, a);
    
    return 0;
}
