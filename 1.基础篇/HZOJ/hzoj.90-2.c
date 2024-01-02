/*************************************************************************
	> File Name: hzoj.90-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 02:09:25 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char str[12] = {0};
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}

