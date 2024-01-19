/*************************************************************************
	> File Name: hzoj.178-2.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2023 08:15:33 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char s[5000000] = {'A'};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n; i++) {
        int l = strlen(s);
        for (int j = 0; j < l; j++) {
            s[2 * l - j] = s[j];
        }
        s[l] = 'A' + i;
    }
    printf("%s\n", s);
    return 0;
}

