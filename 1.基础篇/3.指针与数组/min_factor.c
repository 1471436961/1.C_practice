/*************************************************************************
	> File Name: min_factor.c
	> Author: 
	> Mail: 
	> Created Time: Thu 02 Feb 2023 06:43:42 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (prime[i]) continue;
        for (int j = i; j <= MAX_N; j += i) {
            if (prime[j]) continue;//若没有此行,则求的是最大素因子
            prime[j] = i;
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 2; i <= MAX_N; i++) {
        printf("min_fac[%d] = %d\n", i, prime[i]);
    }
    return 0;
}

