/*************************************************************************
	> File Name: hzoj.205.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 03:01:30 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, m, std[35][35] = {0}, sum[35] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &std[i][j]);
            sum[i] += std[i][j];
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%.6lf\n", sum[k] / (double)m);
    }
    return 0;
}

