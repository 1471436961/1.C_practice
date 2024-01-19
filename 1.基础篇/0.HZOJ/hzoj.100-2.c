/*************************************************************************
	> File Name: hzoj.100-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 03:54:45 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    double n, sum = 0;
    scanf("%lf", &n);
    for (int i = 0; i < 6; i++) {
        sum = (sum + n) * (1 + 0.00417);
    }
    printf("$%.2lf\n", sum);
    return 0;
}

