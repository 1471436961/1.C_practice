/*************************************************************************
	> File Name: hzoj.190.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 05:08:34 PM CST
 ************************************************************************/
#include <stdio.h>

int num[8000005] = {1, 1};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i * i < n + 1; i++) {
        if (!num[i]) {
            for (int j = 2; j * i < n + 1; j++) {
                num[j * i] = 1;
            }
        }
    }
    int cnt = 0;
    for (int l = 2; l * 2 < n + 1; l++) {
        if (!num[l] && !num[n - l]) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

