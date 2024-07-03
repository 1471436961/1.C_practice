/*************************************************************************
	> File Name: hzoj.142.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 09:00:19 PM CST
 ************************************************************************/
#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int is_back(int n) {
    int temp = 0, n1 = n;
    while(n1) {
        temp = temp * 10 + n1 % 10;
        n1 /= 10;
    }
    return temp == n ? 1 : 0;
}

int main() {
    int a, b, flag = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i < b + 1; i++) {
        if (is_prime(i) && is_back(i)) {
            if (flag == 1) {
                printf(" ");
            }
            printf("%d", i);
            flag = 1;
        }
    }
    printf("\n");
    return 0;
}

