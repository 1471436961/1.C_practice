/*************************************************************************
	> File Name: hzoj.124.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 11:14:16 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if ((a > 0 || b < 51) && (c < 26 || d > 4)) {
        printf("ok\n");
    }else {
        printf("pass\n");
    }
    return 0;
}

