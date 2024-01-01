/*************************************************************************
	> File Name: fprintf.c
	> Author: zhouyingda 
	> Mail: 
	> Created Time: Mon 01 Jan 2024 05:34:05 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp =fopen("data.txt", "w");
    if (fp == NULL) {
        printf("failed to open file\n");
        exit(1);
    }
    fprintf(fp, "hello world\n");
    int a = 123, b = 456;
    fprintf(fp, "a = %d, b = %d\n", a, b);
    fclose(fp);
    return 0;
}

