/*************************************************************************
	> File Name: hzoj.105.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 07:54:52 PM CST
 *************************************************************************/
#include <stdio.h>

int main() {
    double H;
    while (~scanf("%lf", &H)) {
        if (H > 55.4) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

