/*************************************************************************
	> File Name: reverse_num.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 02:46:36 PM CST
 ************************************************************************/
#include <stdio.h>

int reverse_num(int n) {
    int temp = 0;
    while (n) {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("%d\n", reverse_num(n));
    }
}

