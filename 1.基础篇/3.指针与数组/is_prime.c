/*************************************************************************
	> File Name: is_prime.c
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 04:51:36 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};
void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;//利用prime[0]计数,从prime[1]开始从小到大存储素数
        for (int j = i; j <= MAX_N / i; j++) {//减少重复标记,防止数据超出表示范围
            prime[j * i] = 1;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 1; i <= prime[0]; i++) {
        printf("%d\n", prime[i]);
    }
    return 0;
}


