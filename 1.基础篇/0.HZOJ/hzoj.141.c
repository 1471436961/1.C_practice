/*************************************************************************
	> File Name: hzoj.141.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 08:15:42 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, a = 'A' - 1;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n + 1; i++) {
        if (i <= n) {
            for (int l = 0; l < i; l++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * (n - i) + 1; j++) {
                if (j < n - i + 1) {
                    printf("%c", ++a);
                }else {
                    printf("%c", --a);
                }
            }
        }else {
            a -= 2;
            for (int m = 0; m < 2 * n - i; m++) {
                printf(" ");
            }
            for (int k = 0; k < 2 * (i - n) + 1; k++) {
                if (k < i - n + 1) {
                    printf("%c", ++a);
                }else {
                    printf("%c", --a);
                }
            }
        }
        printf("\n");
    }
    return 0;
}

