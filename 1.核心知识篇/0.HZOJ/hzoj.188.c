/*************************************************************************
	> File Name: hzoj.188.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 01:50:30 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (!(n % i)) return 0;
    }
    return 1;
}

void init(int arr[], int n, int m) {
    for (int i = m, j = 0; i < n + 1; i++) {
        if (is_prime(i)) {
            arr[j] = i;
            j++;
        }
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int arr[MAX_N + 5] = {0};
    init(arr, n, m);
    for (int i = 0; arr[i]; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

