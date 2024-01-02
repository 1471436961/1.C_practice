/*************************************************************************
	> File Name: hzoj.151.c
	> Author: 
	> Mail: 
	> Created Time: Mon 27 Feb 2023 08:58:50 PM CST
 ************************************************************************/
#include <stdio.h>

int win(char a, char b) {
    if (a == b) return 0;
    else if ((a == 'Y' && b == 'H') || (a == 'O' && b == 'Y') || (a == 'H' && b == 'O')) return 1;
    else return 2;
}

int main() {
    char xiao[2] = {0}, li[2] = {0};
    scanf("%c %c", &xiao[0], &xiao[1]);
    getchar();
    scanf("%c %c", &li[0], &li[1]);
    if (win(xiao[0], li[0]) == 1) {
        if (win(xiao[0], li[1]) != 2) {
            printf("MING\n");
        }else if (win(xiao[1], li[1]) == 1) {
            printf("MING\n");
        }else {
            printf("LIHUA\n");
        }
    }else if (win(xiao[0], li[0]) == 0) {
        if (win(xiao[1], li[1]) == 1) {
            printf("MING\n");
        }else if (win(xiao[1], li[1]) == 2) {
            printf("LIHUA\n");
        }else {
            printf("TIE\n");
        }
    }else {
        if (win(xiao[1], li[0]) != 1) {
            printf("LIHUA\n");
        }else if (win(xiao[1], li[1]) != 2) {
            printf("MING\n");
        }else {
            printf("LIHUA\n");
        }
    }
    return 0;
}

