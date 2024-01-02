/*************************************************************************
	> File Name: hzoj.167.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2023 03:12:52 PM CST
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

void first_a(char a[]) {
    for (int i = 0; a[i]; i++) {
        if (a[i] == 'a') {
            printf("%d\n", i + 1);
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
    printf("%ld\n", strlen(a));
    first_a(a);
    str_conect(a, b, n);
    return 0;
}

