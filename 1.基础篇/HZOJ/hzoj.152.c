/*************************************************************************
	> File Name: hzoj.152.c
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Feb 2023 09:51:53 PM CST
 ************************************************************************/
#include <stdio.h>
char week[8][10] = {{'0'}, {"Monday"}, {"Tuesday"}, {"Wednesday"},
                   {"Thursday"}, {"Friday"}, {"Saturday"}, {"Sunday"}};

int main() {
    int n;
    scanf("%d", &n);
    n += 3;
    if (n > 7) n -= 7;
    printf("%s\n", week[n]);
    return 0;
}


