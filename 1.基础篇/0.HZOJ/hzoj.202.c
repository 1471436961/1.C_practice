/*************************************************************************
	> File Name: hzoj.202.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 09:19:32 PM CST
 ************************************************************************/
#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a ^ *b;
    *a = *a ^ c;
    *b = *b ^ c;
}

void selection_sort(int height[], int n, int num[]) {
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            if (height[j] > height[j + 1]) {
                swap(&height[j], &height[j + 1]);
                swap(&num[j], &num[j + 1]);
            }
        }
    }
    for (int k = 1; k < n + 1; k++) {
        k != 1 && printf(" ");
        printf("%d", num[k]);
    }
    printf("\n");
}

int main() {
    int n, height[1005] = {0}, num[1005] = {0};
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &height[i]);
        num[i] = i;
    }
    selection_sort(height, n, num);
    return 0;
}

