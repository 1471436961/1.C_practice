/*************************************************************************
	> File Name: hzoj.157.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Feb 2023 08:44:57 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, a = 'A';
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            for (int l = 0; l < i; l++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * (n - i) - 1; j++) {
                if (j < n - i) {
                    printf("%c", a++);
                }else {
                    j == n - i && a--;
                    printf("%c", --a);
                }
            }
            a++;
            printf("\n");
        }else {
            n == i ? a -= 4 : a--;
            for (int m = 0; m < 2 * n - 2 - i; m++) {
                printf(" ");
            }
            for (int k = 0; k < 2 * (i - n + 1) + 1; k++) {
                if (k < i - n + 2) {
                    printf("%c", ++a);
                }else {
                    k == i - n + 2 && a--;
                    printf("%c", a--);
                }
            }
            printf("\n");
        }
    }
    printf("\n");
    return 0; 
}

