/*************************************************************************
	> File Name: ip.c
	> Author: 
	> Mail: 
	> Created Time: Mon 06 Feb 2023 03:45:57 PM CST
 ************************************************************************/
#include <stdio.h>

union IP {
    struct {
        unsigned char a1;
        unsigned char a2;
        unsigned char a3;
        unsigned char a4;
    }ip;
    unsigned int num;
} ;

int is_little() {
    int num = 1;
    return ((char *)(&num))[0];
}

int main() {
    printf("%d\n", is_little());
    union IP p;
    char str[100] = {0};
    int arr[4] = {0};
    while (~scanf("%s", str)) {
        sscanf(str, "%d.%d.%d.%d", arr, arr + 1, arr + 2, arr + 3);
        p.ip.a1 = arr[3];
        p.ip.a2 = arr[2];
        p.ip.a3 = arr[1];
        p.ip.a4 = arr[0];//小端存储
        printf("%u\n", p.num);
    }
    return 0;
}

