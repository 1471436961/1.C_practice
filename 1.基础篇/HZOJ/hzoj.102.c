/*************************************************************************
	> File Name: hzoj.102.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 07:28:37 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c, t;
    while (~scanf("%d%d%d%d", &a, &b, &c, &t)) {
        float vab = 1.0 / a + 1.0 / b;
        printf("%.2lf\n", t + (1 - vab * t) / (vab - 1.0 / c));
    }
    return 0;
}

