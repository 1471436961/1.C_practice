/*************************************************************************
	> File Name: hzoj.144.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 07:45:55 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

int main() {
    char str[MAX_N + 5] = {0};
    int cnt = 0;
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'A') cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

