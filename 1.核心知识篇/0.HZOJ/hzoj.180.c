/*************************************************************************
	> File Name: hzoj.180.c
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Mar 2023 10:44:19 PM CST
 ************************************************************************/
#include <stdio.h>

long long my_pow(int n) {
    long long mul = 1;
    while (n--) {
        mul *= 2;
    }
    return mul;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", my_pow(n));
    return 0;
}

