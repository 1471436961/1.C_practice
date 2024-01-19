/*************************************************************************
	> File Name: hzoj.139.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 04:59:18 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int a = 0; a < n - i - 1; a ++) {
                printf(" ");
            }
            for (int j = 0; j < i + 1; j++) {
                printf("AA");
            }
        }else {
            for (int a = 0; a < i - n + 1; a++) {
                printf(" ");
            }
            for (int k = 0; k < 2 * n - i - 1; k++) {
                printf("AA");
            }
        }
        printf("\n");
    }
    return 0;
}

