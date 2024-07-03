/*************************************************************************
	> File Name: hzoj.163.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Mar 2023 06:49:48 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("%.6lf\n", sqrt(a * a + b * b - 2 * a * b * cos(c / 180 * acos(-1))));
    return 0;
}

