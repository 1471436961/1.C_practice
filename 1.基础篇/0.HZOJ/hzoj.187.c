/*************************************************************************
	> File Name: hzoj.187.c
	> Author: 
	> Mail: 
	> Created Time: Sat 18 Mar 2023 03:43:11 PM CST
 ************************************************************************/
#include <stdio.h>

long long cnt(int n) {
    if (n == 1) return 1;
    else return 2 * cnt(n - 1) + 1;
}

long long power(int n) {
    if (n == 1) return 1;
    else return 2 * power(n - 1) + n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld %lld\n", cnt(n), power(n));
    return 0;
}

