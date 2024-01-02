/*************************************************************************
	> File Name: hzoj.177.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2023 08:43:15 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char s[30] = {0};
    scanf("%s", s);
    int n = strlen(s);
    int a = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", s[a]);
            a++;
            a %= n;
        }
        printf("\n");
        a += n - 2;
        a %= n;
    }
    return 0;
}

