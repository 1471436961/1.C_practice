/*************************************************************************
	> File Name: hzoj.219.c
	> Author: 
	> Mail: 
	> Created Time: Tue 16 May 2023 09:18:58 PM CST
 ************************************************************************/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

void bubble_sort1(int num[10005], int l, int r) {
    for (int i = r - 1; i > l - 1; i--) {
        for (int j = l - 1; j < i; j++) {
            if (num[j] > num[j + 1]) swap(&num[j], &num[j + 1]);
        }
    }
    return ;
}

void bubble_sort2(int num[10005], int l , int r) {
    for (int i = r - 1; i > l - 1; i--) {
        for (int j = l - 1; j < i; j++) {
            if (num[j] < num[j + 1]) swap(&num[j], &num[j + 1]);
        }
    }
    return ;
}

int main() {
    int n, l1, r1, l2, r2, num[10005] = {0};
    scanf("%d%d%d%d%d", &n, &l1, &r1, &l2, &r2);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    bubble_sort1(num, l1, r1);
    bubble_sort2(num, l2, r2);
    for (int j = 0; j < n; j++) {
        j != 0 && printf(" ");
        printf("%d", num[j]);
    }
    printf("\n");
    return 0;
}

