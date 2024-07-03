/*************************************************************************
	> File Name: hzoj.120.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 04:08:50 PM CST
 ************************************************************************/
#include <stdio.h>

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int Days(int y, int m) {
    return days[m] + (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100)));
}

int main() {
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if (m < 1 || m > 12 || d < 1 || d > Days(y, m)) printf("NO\n");
    else printf("YES\n");
    return 0;
}

