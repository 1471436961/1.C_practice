/*************************************************************************
	> File Name: goto_while.c
	> Author: zhouyingda 
	> Mail: 
	> Created Time: Tue 26 Dec 2023 10:38:08 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);

judge:
    if (i <= n) goto stmt;
    else goto while_end;
stmt:
    printf("%d ", i);
    i += 1;
    goto judge;
while_end:
    printf("\n");
    return 0;
}
