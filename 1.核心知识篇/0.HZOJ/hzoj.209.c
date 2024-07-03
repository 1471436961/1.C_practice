/*************************************************************************
	> File Name: hzoj.209.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 04:31:11 PM CST
 ************************************************************************/
#include <stdio.h>

void swap(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

void bubble_sort(double num[105], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j] > num[j + 1]) swap(&num[j], &num[j + 1]);
        }
    }
    return ;
}

int main() {
    int n;
    double num[105] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &num[i]);
    }
    bubble_sort(num, n);
    for (int j = 0; j < n; j++) {
        printf("%g\n", num[j]);
    }
    return 0;
}

