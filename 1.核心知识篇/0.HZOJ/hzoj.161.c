/*************************************************************************
	> File Name: hzoj.161.c
	> Author: 
	> Mail: 
	> Created Time: Wed 01 Mar 2023 06:39:28 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%f\n", x * pow(1.06, n));
    return 0;
}

