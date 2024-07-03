/*************************************************************************
	> File Name: hzoj.138.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 04:49:37 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 2 * (n - i); j; j--) {
            printf("A");
        }
        printf("\n");
    }
    return 0;
}

