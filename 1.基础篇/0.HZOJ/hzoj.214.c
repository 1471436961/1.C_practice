/*************************************************************************
	> File Name: hzoj.214.c
	> Author: 
	> Mail: 
	> Created Time: Mon 15 May 2023 07:36:52 PM CST
 ************************************************************************/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

void bubble_sort(int num[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j] < num[j + 1]) swap(&num[j], &num[j + 1]);
        }
    }
    return ;
}

void average(int num[], int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += num[i];
    }
    printf("%.2f\n", (float)sum / k);
    return ;
}

int main() {
    int num[35] = {0}, n, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &k);
    bubble_sort(num, n);
    average(num, k);
    return 0;
}

