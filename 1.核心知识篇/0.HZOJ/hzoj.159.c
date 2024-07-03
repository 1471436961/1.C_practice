/*************************************************************************
	> File Name: hzoj.159.c
	> Author: 
	> Mail: 
	> Created Time: Tue 28 Feb 2023 09:58:21 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    char str;
    scanf("%c", &str);
    int num = str;
    for (int i = 0; i < str - 'A' + 1; i++) {
        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (str - 'A' - i) + 1; j++) {
            if (j < str - 'A' - i + 1) {
                printf("%c", num--);
            }else {
                printf("%c", ++num);
            }
        }
        printf("\n");
    }
    return 0;
}

