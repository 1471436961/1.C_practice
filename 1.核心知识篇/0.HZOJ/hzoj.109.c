/*************************************************************************
	> File Name: hzoj.109.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 08:36:27 PM CST
 ************************************************************************/
#include <stdio.h>

int has_two(int n) {
    int temp;
    while (n) {
        temp = n % 10;
        if (!(temp & 1)) return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        if (has_two(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

