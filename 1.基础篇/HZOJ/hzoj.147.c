/*************************************************************************
	> File Name: hzoj.147.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 08:10:08 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_N 10000

int main() {
    char str[MAX_N + 5] = {0};
    scanf("%s", str);
    printf("%s\n", (str[strlen(str) - 1] & 1) == 1 ? "NO" : "YES");
    return 0;
}

