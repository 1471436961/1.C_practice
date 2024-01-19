/*************************************************************************
	> File Name: hzoj.117.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 02:31:26 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b, c = 0;
    scanf("%d", &a);
    b = a;
    while (a) {
        c = c * 10 + a % 10;
        a /= 10;
    }
    if (b == c) printf("YES\n");
    else printf("NO\n");
    return 0;
}

