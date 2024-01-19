/*************************************************************************
	> File Name: hzoj.158.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Feb 2023 09:37:57 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        if (i < n + 1) {
            for (int j = 0; j < i; j++) {
                printf(" ");
            }
            printf("%d", n - i);
            for (int k = 0; k < 2 * (n - i - 1) + 1; k++) {
                printf(" ");
            }
            i != n && printf("%d\n", n - i);
        }else {
            i == n +  1 && printf("\n");
            for (int l = 0; l < 2 * n - i; l++) {
                printf(" ");
            }
            printf("%d", i - n);
            for (int m = 0; m < 2 * (i - n - 1) + 1; m++) {
                printf(" ");
            }
            printf("%d\n", i - n);
        }
    }
    return 0;
}

