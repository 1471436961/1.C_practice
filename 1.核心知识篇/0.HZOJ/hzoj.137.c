/*************************************************************************
	> File Name: hzoj.137.cmZ	> Author: 
	> Mail: 
	> Created Time: Thu 23 Feb 2023 04:18:35 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, a = 'A';
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("%c", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}

