/*************************************************************************
	> File Name: hzoj.179.c
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Mar 2023 09:21:18 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>
#define EPSLION 1e-7

double f(int p, int q, double x) {
    return p * x + q;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double l = -20, r = 20;
    double x = (l + r) / 2;
    while (!(fabs(func(p, q, x)) < EPSLION)) {
        if (func(p, q, l) * func(p, q, x) < 0) {
            r = x;
        }else {
            l = x;
        }
        x = (l + r) / 2;
    }
    return x;
}

int main() {
    int p, q;
    scanf("%d%d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

