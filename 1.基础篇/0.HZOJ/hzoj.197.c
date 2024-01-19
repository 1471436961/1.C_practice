/*************************************************************************
	> File Name: hzoj.197.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 06:03:37 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 10

int num[MAX_N + 5] = {0};

void swap(int *a, int *b) {
    int c = *a ^ *b;
    *b = c ^ *b;
    *a = *a ^ c;
}

void select_sort(int num[]) {
    for (int i = 0; i < MAX_N; i++) {
        int max = num[i], max_ind = i;
        for (int j = i + 1; j < MAX_N; j++) {
            if (num[j] > max) {
                max = num[j];
                max_ind = j;
            } 
        }
        if (max_ind != i) swap(&num[i], &num[max_ind]);
    }
}

void bubble_sort(int num[]) {
    for (int i = 0; i < MAX_N - 1; i++) {
        for (int j = MAX_N - 1; j > i; j--) {
            if (num[j] > num[j - 1]) swap(&num[j], &num[j - 1]);
        }
    }
}

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    //select_sort(num);
    bubble_sort(num);
    for (int j = 0; j < 10; j++) {
        j != 0 && printf(" ");
        printf("%d", num[j]);
    }
    printf("\n");
    return 0;
}

