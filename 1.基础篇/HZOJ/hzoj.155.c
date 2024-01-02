/*************************************************************************
	> File Name: hzoj.155.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Feb 2023 07:53:34 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, num = 3;
    for (int i = 0; i < n; i++) {
        num += (2 * i);
        printf("%d\n", num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
