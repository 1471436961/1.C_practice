/*************************************************************************
	> File Name: hzoj.201.c
	> Author: 
	> Mail: 
	> Created Time: Tue 04 Apr 2023 08:27:03 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n, cnt = 0, std[1005] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (!std[temp]) {
            std[temp] = 1;
            cnt++;
        }
    }
    printf("%d\n", cnt);
    int flag = 1;
    for (int j = 1; j < 1001; j++) {
        if (std[j]) {
            flag == 0 && printf(" ");
            flag = 0;
            printf("%d", j);
        }
    }
    printf("\n");
    return 0;
}

