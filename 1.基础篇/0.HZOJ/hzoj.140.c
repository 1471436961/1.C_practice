/*************************************************************************
	> File Name: hzoj.140.c
	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 06:33:15 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, a = 'A' - 1;
    scanf("%d", &n);
    for (int i = 0; i < 2 * n - 1; i++) {
        if (i < n) {
            a++;
            for(int l = 0; l < n - i - 1; l++) {
                printf(" ");
            }
            for (int j = 0; j < 2 * i + 1; j++) {
                printf("%c", a);
            }
        }else {
            a--;
            for (int m = 0; m < i - n + 1; m++) {
                printf(" ");
            }
            for (int k = 0; k < 2 * (2 * n -2 - i) + 1; k++) {
                printf("%c", a);
            }
        }
        printf("\n");
    }
    return 0;
}

