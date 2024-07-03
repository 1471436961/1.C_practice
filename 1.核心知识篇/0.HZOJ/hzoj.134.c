/*************************************************************************
	> File Name: hzoj.134.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:52:22 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a, tag = 0; i <= b; i++) {
        if (!(i % 11)) {
            tag && printf(" ");
            printf("%d", i);
            tag = 1;
        }
    }
    printf("\n");
    return 0;
}

