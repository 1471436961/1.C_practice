/*************************************************************************
	> File Name: hzoj.119-2.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 03:31:44 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <stdio.h>
int str[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int Days(int y, int m) {
    return str[m] + (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100)));
}

void pre_day(int &y, int &m, int &d) {
    d -= 1;
    if (!d) {
        m -= 1;
        if (!m) {
            y -= 1, m = 12;
        }
        d = Days(y, m);
    }
    return ;
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
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    pre_day(y, m, d);
    printf("%d %d %d\n", y, m, d);
    next_day(y, m, d);
    next_day(y, m, d);
    printf("%d %d %d\n", y, m, d);
    return 0;
}
