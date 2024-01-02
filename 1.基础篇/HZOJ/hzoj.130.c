/*************************************************************************
	> File Name: hzoj.130.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:21:02 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    double sum = 0;
    for (int i = n; n; n--) {
        sum = (sum + m) * 1.00417;
    }
    printf("$%.2f\n", sum);
    return 0;
}

