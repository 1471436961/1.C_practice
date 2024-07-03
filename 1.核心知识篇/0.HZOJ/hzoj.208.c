/*************************************************************************
	> File Name: hzoj.208.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 04:20:17 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int m, n, std[105] = {0}, ans[105] = {0};
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &std[i]);
        ans[std[i]]++;
    }
    scanf("%d", &n);
    for (int j = 100; j > 0; j--) {
        if (ans[j] >= n) {
            printf("%d\n", ans[j]);
            break;
        }
    }
    return 0;
}

