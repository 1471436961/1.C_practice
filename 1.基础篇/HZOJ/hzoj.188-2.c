/*************************************************************************
	> File Name: hzoj.188-2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 02:14:01 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int prime[MAX_N + 5] = {0};

void init(int n) {
    for (int i = 2; i < n + 1; i++) {
        if (prime[i]) continue;
        prime[++prime[0]] = i;
        for (int j = i; j <= n / i; j++) {
            prime[j * i] = 1;
        }
    }
    return ;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    init(n);
    for (int i = 1; i <= prime[0]; i++) {
        prime[i] > m - 1 && printf("%d\n", prime[i]);
    }
    return 0;
}

