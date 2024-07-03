/*************************************************************************
	> File Name: hzoj.166.c
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Mar 2023 06:09:36 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char a[10005] = {0}, b[10005] = {0}, c[20005] = {0};

void str_conect(char a[], char b[], int n) {
    for (int i = 0; i < n - 1; i++) {
        c[i] = a[i];
    }
    for (int j = 0; b[j]; j++) {
        c[n - 1 + j] = b[j];
    }
    int l = strlen(b);
    for (int k = n - 1; a[k]; k++) {
        c[l + k] = a[k];
    }
    printf("%s\n", c);
    return ;
}

void first_x(char c[]) {
    for (int i = strlen(c) - 1; i > -1; i--) {
        if (c[i] == 'x') {
            printf("%ld\n", strlen(c) - i);
            break;
        }
    }
    return ;
}

int main() {
    int n;
    scanf("%s", a);
    scanf("%d", &n);
    scanf("%s", b);
    strlen(a) > 100 ? printf("100\n") : printf("%ld\n", strlen(a));
    str_conect(a, b, n);
    first_x(c);
    return 0;
}
