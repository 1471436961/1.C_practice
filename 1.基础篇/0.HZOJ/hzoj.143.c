/*************************************************************************
	> File Name: hzoj.143.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 09:32:06 PM CST
 *************************************************************************/
#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_val1(int n) {
    if (is_prime(n / 100)) return 1;
    return 0;
}

int is_val2(int n) {
    for (int i = 1; i < 10; i++) {
        if (i * i == n % 100) return 1;
    }
    return 0;
}

int main() {
    int a, b, i, cnt = 0;
    scanf("%d%d", &a, &b);
    for (i = a; ; i++) {
        if (i % 6 == 0) break;
    }
    for (int flag = 0; i < b + 1; i += 6) {
        if (is_val1(i) && is_val2(i)) {
            cnt++;
            flag && printf(" ");
            flag = 1;
            printf("%d", i);
        }
    }
    printf("\n%d\n", cnt);
    return 0;
}

