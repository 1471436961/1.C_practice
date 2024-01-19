/*************************************************************************
	> File Name: hzoj.183.c
	> Author: 
	> Mail: 
	> Created Time: Sat 18 Mar 2023 01:59:12 PM CST
 ************************************************************************/
#include <stdio.h>

int f(int x) {
    if (x < 1) return 0;
    else if (x == 1) return 1;
    else {
        if (x & 1) {
            return f((x + 1) >> 1) * 3 - 1;
        }else {
            return f(x >> 1) * 3 - 1;
        }
    }
}

int main() {
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}

