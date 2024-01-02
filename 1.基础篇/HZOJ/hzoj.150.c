/*************************************************************************
	> File Name: hzoj.150.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 09:03:26 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &(arr[i][j]));
        }
    }
    for (int k = 0; k < m; k++) {
        for (int l = n - 1; l > -1; l--) {
            l != n - 1 && printf(" ");
            printf("%d", arr[l][k]);
        }
        printf("\n");
    }
    return 0;
}

