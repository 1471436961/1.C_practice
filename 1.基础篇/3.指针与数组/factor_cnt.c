/*************************************************************************
	> File Name: factor_cnt.c
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 04:49:35 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

int prime[MAX_N + 5] = {0};
int f[MAX_N + 5] = {0};//记录因子个数
int cnt[MAX_N + 5] = {0};//记录最小素因子的幂次

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) {
            prime[++prime[0]] = i;
            f[i] = 2;
            cnt[i] = 1;
        }
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) {
                f[i * prime[j]] = f[i] / (cnt[i] + 1) * (cnt[i] + 2);
                cnt[i * prime[j]] = cnt[i] + 1;
                break;
            }else {
                f[prime[j] * i] = f[i] * f[prime[j]];
                cnt[i * prime[j]] = 1;
            }    
        }
    }
    return ;
}

int main() {
    init();
    for (int i = 2; i <= MAX_N; i++) {
        printf("f[%d] = %d\n", i, f[i]);
    }
    return 0;
}

