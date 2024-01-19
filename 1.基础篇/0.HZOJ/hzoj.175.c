/*************************************************************************
	> File Name: hzoj.175.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2023 03:43:06 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 30

int core[MAX_N + 5], level[4];

void core_statistic(int core[], int n) {
    for (int i = 0; i < n; i++) {
        if (core[i] < 60) level[3]++;
        else if (core[i] < 80) level[2]++;
        else if (core[i] < 90) level[1]++;
        else level[0]++;
    }
    printf("You %d\nLiang %d\nZhong %d\nCha %d\n",
           level[0], level[1], level[2], level[3]);
    return ;
}

int main() {
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &core[i]);
    }
    core_statistic(core, n);
    return 0;
}

