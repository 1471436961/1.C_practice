/*************************************************************************
	> File Name: hzoj.192.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Mar 2023 03:45:46 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

double f(int a) {
    double l = 0, r = 30;
    while (1) {
        double x = (l + r) / 2;
        double fx = x * exp(x);
        if (r - l < 1e-6) return x;
        else if (a > fx) {
            l = x;
        }else {
            r = x;
        }
    }
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%.4f\n", f(a));
    return 0;
}
