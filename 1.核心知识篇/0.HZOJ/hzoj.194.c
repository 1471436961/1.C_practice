/*************************************************************************
	> File Name: hzoj.194.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Mar 2023 04:45:27 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100000

int is_value(int num[], int n, int s) {
    int l = 0, r = n-1;
    for (int i = 0; i < n; i++) {
        l = i + 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (num[i] + num[mid] == s) {
                return 1;
            }else if (num[i] + num[mid] > s) {
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
    }
    return 0;
}

int main() {
    int n, s;
    scanf("%d", &n);
    int num[MAX_N + 5] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &s);
    printf("%s\n", is_value(num, n, s) == 1 ? "Yes" : "No");
    return 0;
}

