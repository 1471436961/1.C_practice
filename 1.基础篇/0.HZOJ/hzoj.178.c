/*************************************************************************
	> File Name: hzoj.178.c
	> Author: 
	> Mail: 
	> Created Time: Wed 05 Apr 2023 07:49:28 PM CST
 ************************************************************************/
#include <stdio.h>

void symmetry_str(int n) {
    if (n == 1) printf("A");
    else {
        symmetry_str(n - 1);
        printf("%c", 'A' + n - 1);
        symmetry_str(n - 1);
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    symmetry_str(n);
    printf("\n");
    return 0;
}

