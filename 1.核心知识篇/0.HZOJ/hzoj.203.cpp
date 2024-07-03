/*************************************************************************
	> File Name: hzoj.203.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 01:44:06 PM CST
 ************************************************************************/
#include <stdio.h>
#include <algorithm>
using namespace std;

int height[15][15] = {0}, height1[105] = {0};

void heighest(int height[15][15], int m, int n) {
    for (int i = 0; i < n; i++) {
        int max = 0;
        for (int j = 0; j < m; j++) {
            if (height[j][i] > max) max = height[j][i];
        }
        printf("%d\n", max);
    }
    return ;
}

int averge; 

void averge_height(int height[15][15], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += height[i][j];
        }
    }
    averge =  (int)((float)sum / (m * n) + 0.5);
    printf("%d\n", averge);
    return ;
}

void noblow_averge(int height[15][15], int m, int n) {
    int cnt = m * n; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (height[i][j] < averge) cnt--;
        }
    }
    printf("%d\n", cnt);
    return ;
}

int main() {
    int m, n, cnt = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &height[i][j]);
            height1[cnt] = height[i][j];
            cnt++;
        }
    }
    heighest(height, m, n);
    sort(height1, height1 + cnt);
    for (int k = cnt - 1; k > -1; k--) {
        k != cnt - 1 && printf(" ");
        printf("%d", height1[k]);
    }
    printf("\n");
    averge_height(height, m, n);
    noblow_averge(height, m, n);
    return 0;
}

