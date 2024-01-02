/*************************************************************************
	> File Name: hzoj.154.c
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Feb 2023 11:08:02 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n -i; j++) {
            j && printf(" ");
            printf("%d", n -i - j);
        }
        printf("\n");
    }
    return 0;
}

