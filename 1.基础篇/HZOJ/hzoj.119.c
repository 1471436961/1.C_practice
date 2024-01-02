/*************************************************************************
	> File Name: hzoj.119.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 03:00:14 PM CST
 ************************************************************************/
#include <stdio.h>

int str[13] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};
int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (y % 400 == 0 || (y % 4 == 0 && y % 100)) str[2] = 29;
    if (d == 1) {
        printf("%d %d %d\n", m == 1 ? y - 1 : y, m == 1 ? 12 : m - 1, str[m - 1]);
        printf("%d %d %d\n", y, m, d + 1);
    }else if (d == str[m]) {
        printf("%d %d %d\n", y, m, d - 1);
        printf("%d %d %d\n", m == 12 ? y + 1 : y, (m + 1) % 12, 1);
    }else {
        printf("%d %d %d\n", y, m, d - 1);
        printf("%d %d %d\n", y, m, d + 1);
    }
    return 0;
}

