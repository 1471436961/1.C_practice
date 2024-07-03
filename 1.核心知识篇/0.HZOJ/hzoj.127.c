/*************************************************************************
	> File Name: hzoj.127.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 08:47:24 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    double sum = (float)x;
    for (int i = n; n; n--) {
        sum  *= 1.06;
    }
    printf("%d\n", (int)sum);
    return 0;
}

