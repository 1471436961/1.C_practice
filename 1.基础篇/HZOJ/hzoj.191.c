/*************************************************************************
	> File Name: 191.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 08:46:23 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 8000000

int prime[MAX_N + 5] = {0};

void init() {
    for (int i = 2; i <= MAX_N; i++) {
        if (!prime[i]) prime[++prime[0]] = i;
        for (int j = 1; j <= prime[0]; j++) {
            if (prime[j] * i > MAX_N) break;
            prime[prime[j] * i] = 1;
            if (i % prime[j] == 0) break;
        }
    }
    return ;
}

int flag = 1;

int binary(int num[], int n) {
    int l = 1, r = prime[0];
    while (l <= r) {
        int m = (l + r) / 2;
        if (num[m] == n) {
            flag = 0;
            return m;
        }else if (num[m] < n) {
            l = m + 1;
        }else {
            r = m - 1;
        }
    }
    return l;
}

int main() {
    int l, r;
    scanf("%d%d", &l, &r);
    init();
    int i = binary(prime, l) + 1, j = binary(prime, r) - 1;
    int min = MAX_N, max = 0;
    int min_idx = 0, max_idx = 0;
    for (int m = j; m >= i; m--) {
        int temp = prime[m] - prime[m - 1];
        if (temp >= max) {
            max = temp;
            max_idx = m;
        }
        if (temp <= min) {
            min = temp;
            min_idx = m;
        }
    }
    if (min == MAX_N) {
        printf("There are no adjacent primes.\n");
    }else {
        printf("%d,%d are closest, %d,%d are most distant.\n",
               prime[min_idx - 1], prime[min_idx], prime[max_idx - 1], prime[max_idx]);
    }
    return 0;
}

