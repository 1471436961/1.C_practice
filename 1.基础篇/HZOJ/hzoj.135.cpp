/*************************************************************************
	> File Name: hzoj.135.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 10:04:12 PM CST
 ************************************************************************/
#include <stdio.h>

int mon[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int Days(int y, int m) {
    return mon[m] + (m == 2 && (y % 400 == 0 ||(y % 100) && (y % 4 == 0)));
}

void next_day(int &y, int &m, int &d) {
    d += 1;
    if (d > Days(y, m)) {
        m += 1, d = 1;
        if (m > 12) {
            y += 1, m = 1;
        }
    }
    return ;
}

int main() {
    int x;
    scanf("%d", &x);
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    for (int i = 0; i < x; i++) {
        next_day(y, m, d);
    }
    printf("%d %d %d\n", y, m, d);
    return 0;
}

