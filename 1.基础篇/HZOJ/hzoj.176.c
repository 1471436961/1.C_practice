/*************************************************************************
	> File Name: hzoj.176.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2023 09:52:56 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char lu[1005] = {0}, nv[1005] = {0};

int main() {
    scanf("%[^\n]s", nv);
    getchar();
    scanf("%[^\n]s", lu);
    int l = strlen(lu), n = strlen(nv);
    int cnt = 0;
    for (int i = 0; i < n - l + 1; i++) {
        int num = 0;
        for (int j = 0; j < l; j++) {
            if (lu[j] != nv[i + j]) break;
            num++;
        }
        if (num == l) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

