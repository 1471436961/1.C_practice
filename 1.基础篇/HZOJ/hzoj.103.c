/*************************************************************************
	> File Name: hzoj.103.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 07:43:33 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        if (a % b) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}

