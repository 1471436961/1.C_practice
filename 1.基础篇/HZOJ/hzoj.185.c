/*************************************************************************
	> File Name: hzoj.185.c
	> Author: 
	> Mail: 
	> Created Time: Sat 18 Mar 2023 02:15:37 PM CST
 ************************************************************************/
#include <stdio.h>

int feibona(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }else {
        return feibona(n - 1) + feibona(n - 2);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", feibona(n));
    return 0;
}

