/*************************************************************************
	> File Name: hzoj.125.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 07:23:34 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int h, m, s, t, tag = 0, reg = 0;
    char str[2] = {'a', 'p'};
    scanf("%d%d%d%d", &h, &m, &s, &t);
    float per = t / (float)(3600 * 24) * 100;
    int h1 = t / 3600, m1 = t % 3600 / 60, s1 = t % 60;
    h += h1, m += m1, s += s1;
    if (s >= 60) {
        m += 1, s -= 60;
    }
    if (m >= 60) {
        h +=1, m -= 60;
    }
    if (h > 24) {
        h -= 24;
    }
    if (h > 12) {
        h -= 12, tag = 1, reg = 1;
    }
    if (h == 12) tag = (reg == 1 ? 0 : 1);
    printf("%d:%d:%d%cm\n", h, m, s, str[tag]);
    printf("%.2f%%\n", per);
    return 0;
}

