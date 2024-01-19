/*************************************************************************
	> File Name: hzoj.153.c
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Feb 2023 10:09:31 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (m == 1) {
        y--, m = 13;
    }else if (m == 2) {
        y--, m = 14;
    }
    int j = y / 100, k = y % 100;
    int h = (d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    h += 6;
    printf("%d\n", h > 7 ? h - 7 : h);
    return 0;
}

