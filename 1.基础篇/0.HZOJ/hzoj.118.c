/*************************************************************************
	> File Name: hzoj.118.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 02:50:38 PM CST
 ************************************************************************/
#include <stdio.h>

char str[][10] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep", "monkey", "rooster", "dog", "pig"};
int main() {
    int year;
    scanf("%d", &year);
    printf("%s\n", str[((year - 1900) % 12 + 12) % 12]);
    return 0;
}

