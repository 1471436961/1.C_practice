/*************************************************************************
	> File Name: hzoj.121.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 04:19:49 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char a, b;
    scanf("%s%s", &a, &b);
    if (a == b) printf("TIE\n");
    else if ((a == 'O' && b == 'Y') || (a == 'Y' && b == 'H') || (a == 'H' && b == 'O')) printf("MING\n");
    else printf("LI\n");
    return 0;
}

