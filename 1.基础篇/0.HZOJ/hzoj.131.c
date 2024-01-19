/*************************************************************************
	> File Name: hzoj.131.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:28:09 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, min = 10000, max = 0;
    scanf("%d", &n);
    int n1 = n;
    int arr[n1];
    for (int i = n; n; n--) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("%d\n", max - min);
    return 0;
}

