/*************************************************************************
	> File Name: hzoj.101.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 04:00:49 PM CST
 ************************************************************************/
#include <stdio.h>

int get_num(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", get_num(n));
    return 0;
}

