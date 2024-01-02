/*************************************************************************
	> File Name: hzoj.204.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 02:56:11 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, std[35][35] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &std[i][j]);
        }
    }
    for (int k = 0; k < n; k++) {
        printf("%d\n", std[k][k]);
    }
    return 0;
}

