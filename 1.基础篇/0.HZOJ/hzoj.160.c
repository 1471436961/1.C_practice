/*************************************************************************
	> File Name: hzoj.160.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Mar 2023 06:28:19 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    double r, h;
    scanf("%lf%lf", &r, &h);
    double s = sqrt(8 * r * r);
    printf("%.2lf\n", (5.14 * r + s ) * h + 7.14 * r * r);
    return 0;
}

