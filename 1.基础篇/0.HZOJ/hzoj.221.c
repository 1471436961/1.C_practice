/*************************************************************************
	> File Name: hzoj.221.c
	> Author: 
	> Mail: 
	> Created Time: Thu 08 Jun 2023 07:50:46 PM CST
 ************************************************************************/
#include <stdio.h>

typedef struct child {
    int h, cnt;
}child;

child children[100005] = {0};

int h1[100005] = {0}, h2[100005] = {0}, temp = 0;

int select_low(int h1[100005], int n, int k) {
    int low = h1[k], low_ind = k;
    for (int i = k + 1; i < n; i++) {
        if (h1[i] < low) {
            low = h1[i];
            low_ind = i;
        }
    }
    swap(&h1[k], &h1[low_ind]);
    return low_ind;
}

void pick_balloon(int h2[100005], int m, int h, int min) { 
    for (int i = 0; i < m; i++) {
        if (h2[i] <= h) {
            children[min].cnt++;
            printf("%d %d\n", h, i);
            h2[i] = 1000000005;
        }
    }
    return ;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h1[i]);
        children[i].h = h1[i];
    }
    for (int j = 0; j < m; j++) {
        scanf("%d", &h2[j]);
    }
    for (int k = 0; k < n; k++) {
        int min = select_low(h1, n, k);
        pick_balloon(h2, m, h1[k], min);
    }
    for (int l = 0; l < n; l++) {
        printf("%d\n", children[l].cnt);
    }
    return 0;
}

