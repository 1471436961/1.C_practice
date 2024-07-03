/*************************************************************************
	> File Name: hzoj.217.c
	> Author: 
	> Mail: 
	> Created Time: Tue 16 May 2023 06:50:34 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, num[105] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        num[temp]++;
    }
    int ans = 0;
    for (int j = 100; j > -1; j--) {
        ans += num[j];
        if (ans * 2 >= n) {
            printf("%d %d\n", j, ans);
            break;
        }
    }
    return 0;
}
