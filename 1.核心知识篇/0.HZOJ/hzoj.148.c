/*************************************************************************
	> File Name: hzoj.148.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 08:20:07 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#define MAX_N 50

int main() {
    char str[MAX_N + 5] = {0};
    scanf("%s", str);
    for (int i = (int)(strlen(str)) - 1; i > -1; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

