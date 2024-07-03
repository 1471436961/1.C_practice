/*************************************************************************
	> File Name: hzoj.114.c
	> Author: 
	> Mail: 
	> Created Time: Sat 11 Feb 2023 09:19:20 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char name;
    while (~scanf("%s", &name)) {
        switch (name) {
            case 'h': printf("He\n");break;
            case 'l': printf("Li\n");break; 
            case 'c': printf("Cao\n");break;
            case 'd': printf("Duan\n");break;
            case 'w': printf("Wang\n");break;
            default : printf("Not Here\n");break;
        }
    }
    return 0;
}

