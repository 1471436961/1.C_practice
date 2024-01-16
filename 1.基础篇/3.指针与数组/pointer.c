/*************************************************************************
	> File Name: pointer.c
	> Author: 
	> Mail: 
	> Created Time: Mon 06 Feb 2023 08:35:12 PM CST
 ************************************************************************/
#include <stdio.h>

#define offset(T, a) (long)(&(((T *)(NULL))->a))

typedef char * pchar;
#define ppchar char*

struct Data {
    int a;
    char b;
    double c;
};

int main() {
    printf("%ld\n", offset(struct Data, a));
    printf("%ld\n", offset(struct Data, b));
    printf("%ld\n", offset(struct Data, c));
    pchar p1, p2;
    ppchar p3, p4;
    printf("p1 = %lu, p2 = %lu\n", sizeof(p1), sizeof(p2));
    printf("p3 = %lu, p4 = %lu\n", sizeof(p3), sizeof(p4));
    return 0;
}

