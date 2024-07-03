/*************************************************************************
	> File Name: hzoj.149.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 08:47:12 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_N 50

int main() {
    char str[MAX_N + 5] = {0};
    scanf("%[^\n]s", str);
    int cnt = 0;
    for (int i = (int)(strlen(str)) - 1; i > -1; i--, cnt++) {
        if (str[i] == ' ') break;
    }
    printf("%d\n", cnt);
    return 0;
}

