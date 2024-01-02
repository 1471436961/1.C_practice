/*************************************************************************
	> File Name: hzoj.188-3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 03:17:25 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init(int n) {
    for (int i = 2; i < n + 1; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j < prime[0] + 1; j++) {
            if (prime[j] * i > n) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    init(n);
    for (int i = 1; i < prime[0] + 1; i++) {
        prime[i] > m - 1 && printf("%d\n", prime[i]);
    }
    return 0;
}

