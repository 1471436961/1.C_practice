/*************************************************************************
	> File Name: hzoj.111.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:57:41 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    while (~scanf("%d", &n)) {
        if (n > 3) {
            sum = 2.3 * (n - 3) + 14;
            printf("%.1lf\n", sum);
        }else printf("%d", 14);
    }
    return 0;
}

