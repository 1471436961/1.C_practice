/*************************************************************************
	> File Name: hzoj.165.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Mar 2023 07:06:39 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    long long c;
    int cnt = 0;
    scanf("%lld", &c);
    for (long long  a = 1; 2 * a * a < c * c; a++) {
        long long b = sqrt(c * c - a * a);
        if (a * a + b * b == c * c) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

