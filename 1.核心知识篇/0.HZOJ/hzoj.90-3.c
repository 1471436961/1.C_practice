/*************************************************************************
	> File Name: hzoj.90-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 03:13:04 PM CST
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
    scanf("%d", &n);
    n = reverse_num(n);
    while (n) {
        printf("%d\n",n % 10);
        n /= 10;
    }
    return 0;
}

