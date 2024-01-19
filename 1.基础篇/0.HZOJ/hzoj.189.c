/*************************************************************************
	> File Name: hzoj.189.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Mar 2023 03:36:35 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int n, k, N[MAX_N + 5] = {0};

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i < n + 1; i++) {
        scanf("%d", &N[i]);
    }
    for (int j = 0; j < k; j++) {
        int temp;
        scanf("%d", &temp);
        j != 0 && printf(" ");
        int l = 1, r = n;
        while (l <= r) {
            int m = (l + r) / 2;
            if (N[m] == temp) {
                printf("%d", m);
                break;
            }else if (N[m] < temp) {
                l = m + 1;
            }else {
                r = m - 1;
            }
        }
        if (l > r) printf("%d", 0);
    }
    printf("\n");
    return 0;
}

