/*************************************************************************
	> File Name: hzoj.107.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:13:38 PM CST
 ************************************************************************/
#include <stdio.h>

int is_seven(int n) {
    if (n % 7) return 0;
    if (n & 1) return 1;
    return 0;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        if (is_seven(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


