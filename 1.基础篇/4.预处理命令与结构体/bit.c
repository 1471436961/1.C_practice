/*************************************************************************
	> File Name: bit.c
	> Author: zhouyingda 
	> Mail: 
	> Created Time: Thu 28 Dec 2023 05:26:30 PM CST
 ************************************************************************/

#include <stdio.h>

#define P(a, format) { \
    printf("%s = " format "\n", #a, a); \
}

struct A {
    unsigned int a:1; //a为1位二进制
    unsigned int b:2;
    unsigned int c:3;
} ; 

int main() {
    P(sizeof(struct A), "%lu");
    struct A obj;
    obj.a = 15;
    obj.b = 15;
    obj.c = 13;
    P(obj.a, "%d");
    P(obj.b, "%d");
    P(obj.c, "%d");
    return 0;
}

