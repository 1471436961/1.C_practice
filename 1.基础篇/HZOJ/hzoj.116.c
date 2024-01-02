/*************************************************************************
	> File Name: hzoj.116.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 02:02:27 PM CST
 ************************************************************************/
#include <stdio.h>
#define swap(a, b) {\
    __typeof(a) temp = a;\
    a = b, b= temp;\
}

int main() {
    int a, b, c, f;
    scanf("%d%d%d", &a, &b, &c);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    f = c * c - a * a - b * b;
    if (a + b > c) {
        if (f < 0) printf("acute triangle\n");
        else if (f == 0) printf("right triangle\n");
        else printf("obtuse triangle\n");
    }else printf("illegal triangle\n");
    return 0;
}

