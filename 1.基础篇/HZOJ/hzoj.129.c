/*************************************************************************
	> File Name: hzoj.129.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:14:13 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int n1 = n, min = 10000;
    int arr[n1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) min = arr[i];
    }
    printf("%d\n", min);
    return 0;
}

