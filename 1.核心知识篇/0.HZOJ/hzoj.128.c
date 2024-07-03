/*************************************************************************
	> File Name: hzoj.128.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 08:59:25 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n1 = n;
    int arr[n1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / n);
    return 0;
}

