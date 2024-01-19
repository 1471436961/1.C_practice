/*************************************************************************
	> File Name: hzoj.198.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 06:44:19 PM CST
 ************************************************************************/
#include <stdio.h>

long long num[100005] = {0, 1, 1};

long long f(int n) {
    for (int i = 3; i < n + 1; i++) {
        num[i] = num[i - 1] + num[i - 2];
        num[i] %= 1000000007;
    }
    return num[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}

