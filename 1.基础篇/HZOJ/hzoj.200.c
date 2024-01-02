/*************************************************************************
	> File Name: hzoj.200.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 08:08:14 PM CST
 ************************************************************************/
#include <stdio.h>

int num[35] = {0, 4, 7};

int main() {
    int n;
    float sum = 4.0 / 7;
    scanf("%d", &n);
    for (int i = 3; i < n + 2; i++) {
        num[i] = num[i - 1] + num[i - 2];
        sum += (float)num[i - 1] / num[i];
    }
    printf("%d/%d\n", num[n], num[n + 1]);
    printf("%.2f\n", sum);
    return 0;
}

