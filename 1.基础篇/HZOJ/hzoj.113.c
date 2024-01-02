/*************************************************************************
	> File Name: hzoj.113.c
	> Author: 
	> Mail: 
	> Created Time: Sat 11 Feb 2023 08:27:58 PM CST
 ************************************************************************/
#include <stdio.h>

int is_run(int y) {
    if (y & 2 || !(y % 100)) return !(y % 400);
    return 1;
}

int main() {
    int y, m;
    scanf("%d%d", &y, &m);
    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_run(y)) mon[1] = 29;
    printf("%d\n", mon[m - 1]);
    return 0;
}

