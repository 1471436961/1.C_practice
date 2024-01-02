/*************************************************************************
	> File Name: hzoj.106.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:01:05 PM CST
 ********************************************************************/
#include <stdio.h>

int main() {
    double n;
    while (~scanf("%lf", &n)) {
        if (n < 0) n = -n;
        printf("%g\n", n);
    }
    return 0;
}

