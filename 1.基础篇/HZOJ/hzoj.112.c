/*************************************************************************
	> File Name: hzoj.112.c
	> Author: 
	> Mail: 
	> Created Time: Wed 08 Feb 2023 09:08:03 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char x;
    while (~scanf("%c", &x)) {
        switch (x) {
            case 'a': 
                printf("It is good\n"); 
                break;
            case 'b': 
                printf("OMG\n"); 
                break;
            case 'c': 
                printf("Yes!\n");
                break;
        }
    }
    return 0;
}

