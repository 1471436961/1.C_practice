/*************************************************************************
	> File Name: hzoj.110.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:44:25 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    double x, sum = 0;
    while (~scanf("%lf", &x)) {
        if (x > 15) {
            sum = 15 * 6 + (x - 15) * 9;
        }else sum = 6 * x;
        printf("%.2lf\n", sum);
    }
    return 0;
}

