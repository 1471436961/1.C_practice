/*************************************************************************
	> File Name: hzoj.173.c
	> Author: 
	> Mail: 
	> Created Time: Thu 04 May 2023 10:08:40 AM CST
 ************************************************************************/
#include <stdio.h>

char str[1005] = {0};
int cnt[4] = {0};

int main() {
    scanf("%[^\n]s", str);
    for (int i = 0; str[i]; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z')) {
            cnt[0]++;
        }else if (str[i] >= '0' && str[i] <= '9'){
            cnt[1]++;
        }else if (str[i] == ' ') {
            cnt[2]++;
        }else {
            cnt[3]++;
        }
    }
    printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
    return 0;
}

