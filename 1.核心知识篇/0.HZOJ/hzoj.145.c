/*************************************************************************
	> File Name: hzoj.145.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 07:52:02 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    char str[20][100] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }
    int max = 0, l, k;
    for (int j = 0; j < n; j++) {
        for (k = 0; str[j][k]; k++);
        if (k > max) {
            max = k;
            l = j;
        }
    }
    printf("%s\n", str[l]);
    return 0;
}

