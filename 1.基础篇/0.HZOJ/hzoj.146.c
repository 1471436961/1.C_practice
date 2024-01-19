/*************************************************************************
	> File Name: hzoj.146.c
	> Author: 
	> Mail: 
	> Created Time: Sun 26 Feb 2023 07:59:21 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 50

int main() {
    char str[MAX_N + 5]  = {0};
    scanf("%s", str);
    for (int i = 0; str[i]; i++) {
        if (str[i] >= 'a' && str[i] < 'z') {
            str[i]++;
        }else if (str[i] >= 'A' && str[i] < 'Z') {
            str[i]++;
        }else if (str[i] == 'z') {
            str[i] = 'a';
        }else if (str[i] == 'Z') {
            str[i] = 'A';
        }
    }
    printf("%s\n", str);
    return 0;
}

