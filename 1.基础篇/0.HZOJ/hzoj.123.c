/*************************************************************************
	> File Name: hzoj.123.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 11:08:20 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d", &a, &b);
    scanf("%d%d", &c, &d);
    if ((a <= c && b >= d) || (a >= c && b <= d)) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}

