/*************************************************************************
	> File Name: printf.c
	> Author: 
	> Mail: 
	> Created Time: Thu 09 Feb 2023 01:31:03 PM CST
 ************************************************************************/
#include <stdio.h>
#define swap(a, b) {\
    __typeof(a) temp = a;\
    a = b, b = temp;\
}

int main() {
    printf("%c\n", 97);
    int n;
    scanf("%d", &n);
    printf("%04d\n", n);
    char str[100], buff[100], *p = str, *q = buff;
    sprintf(str, "%d.%d.%d.%d", 192, 168, 0, 1);
    printf("str = %s\n", str);
    if (n & 1) {
        sprintf(q, "(%s)", p);
        swap(p, q);
    }
    if (n & 2) {
        sprintf(q, "[%s]", p);
        swap(p, q);
    }
    if (n & 4) {
        sprintf(q, "{%s}", p);
        swap(p, q);
    } 
    printf("str = %s\n", p);
    FILE *fout = fopen("output", "w");
    fprintf(stdout, "stdout = %s\n", p);
    fprintf(stderr, "stderr = %s\n", p);
    return 0;
}

