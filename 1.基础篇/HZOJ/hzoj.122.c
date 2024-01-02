/*************************************************************************
	> File Name: hzoj.122.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 08:40:39 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    int h = t / 3600, m = t % 3600 / 60, s = t % 60;
    if (h < 12) printf("%02d:%02d:%02d am\n", h, m, s);
    else if (h < 13) printf("%02d:%02d:%02d midnoon\n", 12, m, s);
    else printf("%02d:%02d:%02d pm\n", h - 12, m, s);
    return 0;
}

