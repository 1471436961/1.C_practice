/*************************************************************************
	> File Name: hzoj.104.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 07:48:28 PM CST
 ************************************************************************/
#include <stdio.h>

int has_nine(int n) {
    int temp;
    while (n) {
        temp = n % 10;
        if (temp == 9) return 1;
        n /= 10;
    }
    return 0;
}

int main() {
    int n;
    while(~scanf("%d", &n)) {
        if (has_nine(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

