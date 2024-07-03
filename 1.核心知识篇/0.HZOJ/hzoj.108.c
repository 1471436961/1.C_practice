/*************************************************************************
	> File Name: hzoj.108.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:26:44 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char shape;
    scanf("%c", &shape);
    double m, n;
    scanf("%lf %lf", &m, &n);
    if (shape == 'r') printf("%.2lf\n", m * n);
    else if (shape == 't') printf("%.2lf\n", m * n / 2);
    return 0;
}

