/*************************************************************************
	> File Name: hzoj.199.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 07:27:09 PM CST
 ************************************************************************/
#include <stdio.h>

long long num[100005] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int f(int a[], int k, int m) {
    for (int i = 10; i < k + 1; i++) {
        for (int j = 1; j < 11; j++) {
            num[i] += (a[j] * num[i - j]);
        }
        num[i] %= m;
    }
    return num[k];
}

int main() {
    int k, m;
    scanf("%d%d", &k, &m);
    int a[11] = {0};
    for (int i = 1; i < 11; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", f(a, k, m));
    return 0;
}

