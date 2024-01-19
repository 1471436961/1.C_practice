/*************************************************************************
	> File Name: hzoj.174.c
	> Author: 
	> Mail: 
	> Created Time: Wed 03 May 2023 05:30:18 PM CST
 ************************************************************************/
#include <stdio.h>

char str[1000005] = {0};
char ans[3000005] = {0};

int main() {
    scanf("%[^\n]s", str);
    for (int i = 0, j = 0; str[i]; i++) {
        if (str[i] == ' ') {
            ans[j] = '%';
            ans[j + 1] = '2';
            ans[j + 2] = '0';
            j += 3;
        }else {
            ans[j] = str[i];
            j++;
        }
    }
    printf("%s\n", ans);
    return 0;
}

