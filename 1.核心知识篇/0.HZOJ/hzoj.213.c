/*************************************************************************
	> File Name: hzoj.213.c
	> Author: 
	> Mail: 
	> Created Time: Mon 15 May 2023 07:04:32 PM CST
 ************************************************************************/
#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

void bubble_sort(int core[], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (core[j] < core[j + 1]) swap(&core[j], &core[j + 1]);
        }
    }
    return ;
}

void core_statistic(int core[], int n) {
    int level[6] = {0};
    for (int i = 0; i < n; i++) {
        if (core[i] == 100) level[0]++;
        else if (core[i] > 89) level[1]++;
        else if (core[i] > 79) level[2]++;
        else if (core[i] > 69) level[3]++;
        else if (core[i] > 59) level[4]++;
        else level[5]++;
    }
    printf("%d %d %d %d %d %d\n",
          level[0], level[1], level[2], level[3], level[4], level[5]);
    return ;
}

int main() {
    int core[30] = {0}, n;
    scanf("%d", &n);
    for (int i = 0 ; i < n; i++)  {
        scanf("%d", &core[i]);
    }
    bubble_sort(core, n);
    for (int j = 0; j < n; j++) {
        printf("%d\n", core[j]);
    }
    core_statistic(core, n);
    return 0;
}

