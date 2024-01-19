/*************************************************************************
	> File Name: hzoj.193.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Mar 2023 04:30:17 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100000

int is_value(int num[], int n, int k, int s) {
    int l = 0, r = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (num[mid] + k == s) {
            return 1;
        }else if (num[mid] + k > s) {
            r = mid - 1;
        }else {
            l = mid + 1;
        }
    }
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    int num[MAX_N + 5] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int k, s;
    scanf("%d%d", &k, &s);
    printf("%s\n", is_value(num, n, k, s) == 1 ? "Yes" : "No");
    return 0;
}

