/*************************************************************************
	> File Name: hzoj.122-2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 12 Feb 2023 09:09:30 PM CST
 ************************************************************************/
#include <stdio.h>
char str[][10] = {"am", "pm", "midnoon"};

int main() {
    int t, h, m, s, flag = 0;
    scanf("%d", &t);
    h = t / 3600, m = t % 3600 / 60, s = t % 60;
    if (h > 12) h -=12, flag = 1;
    printf("%02d:%02d:%02d ", h, m, s);
    flag += 2 * (h == 12);
    printf("%s\n", str[flag]);
    /*if (h == 12) {
        printf("midnoon\n");
    }else if (flag) {
        printf("pm\n");
    }else {
        printf("am\n");
    }*/
    return 0;
}

