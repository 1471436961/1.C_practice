/*************************************************************************
	> File Name: hzoj.196.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 05:48:32 PM CST
 ************************************************************************/
#include <stdio.h>

int way_cnt(int n) {
    if (n == 2) return 1;
    else if (n == 3) return 1;
    else if (n == 1) return 0;
    else return way_cnt(n - 2) + way_cnt(n - 3);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", way_cnt(n));
    return 0;
}

