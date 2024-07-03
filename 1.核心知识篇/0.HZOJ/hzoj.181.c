/*************************************************************************
	> File Name: hzoj.181.c
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Mar 2023 11:14:01 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

void transform(char str[]) {
    for (int i = 0; str[i]; i++) {
        if ('a' - 1 < str[i] && str[i] < 'z' + 1) {
            str[i] -= 32;
            printf("%c", str[i]);
        }else if ('A' - 1 < str[i] && str[i] < 'Z' + 1) {
            str[i] += 32;
            printf("%c", str[i]);
        }
    }
    printf("\n");
}
int main() {
    char str[MAX_N + 5] = {0};
    scanf("%s", str);
    transform(str);
    return 0;
}

