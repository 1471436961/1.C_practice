/*************************************************************************
	> File Name: hzoj.133.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:39:07 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            (j - i) && printf("\t");
            printf("%d*%d=%d", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

