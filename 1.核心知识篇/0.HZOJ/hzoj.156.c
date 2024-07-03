/*************************************************************************
	> File Name: hzoj.156.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Feb 2023 08:02:32 PM CST
 ************************************************************************/
#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_val(int n) {
    for (int i = 1; i < 10; i++) {
        if (i * i == n) return 1;
    }
    return 0;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int cnt = 0;
    for (int i = a, flag = 0; i < b + 1; i++) {
        if (!is_prime(i)) continue;
        if (!is_val(i / 100)) continue;
        if (is_val(i % 100)) {
            flag && printf(" ");
            flag = 1;
            cnt++;
            printf("%d", i);
        }
    }
    printf("\n%d\n", cnt);
    return 0;
}

