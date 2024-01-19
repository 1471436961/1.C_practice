/*************************************************************************
	> File Name: hzoj.136.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 10:32:29 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 7; i <= n; i += 7) {
        printf("%d\n", i);
    }
    return 0;
}

