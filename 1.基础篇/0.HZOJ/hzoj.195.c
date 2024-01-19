/*************************************************************************
	> File Name: hzoj.195.c
	> Author: 
	> Mail: 
	> Created Time: Sat 25 Mar 2023 05:09:21 PM CST
 ************************************************************************/
#include <stdio.h>

int num(int n, int fri[], int k) {
    int l = 0, r = n- 1;
    if ( fri[0] > k ) return fri[0];
    else {
        while (l <= r) {
            int mid = (l + r) / 2;
            if (fri[mid] == k) {
                return fri[mid];
            }else if (fri[mid] > k) {
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return fri[l - 1];
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int n1 = n, m1 = m;
    int fri[n1], game[m1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &fri[i]);
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &game[j]);
    }
    for (int k = 0; k < m; k++) {
        k != 0 && printf(" ");
        printf("%d", num(n, fri, game[k]));
    }
    printf("\n");
    return 0;
}

