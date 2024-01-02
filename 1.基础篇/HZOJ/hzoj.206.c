/*************************************************************************
	> File Name: hzoj.206.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 03:16:46 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, m, money[35][35] = {0}, sum[35] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &money[i][j]);
            sum[j] += money[i][j];
        }
    }
    for (int k = 0; k < m; k++) {
        printf("%d\n", sum[k]);
    }
    return 0;
}

