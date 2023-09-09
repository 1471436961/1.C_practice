/*************************************************************************
	> File Name: 5.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Jan 2023 02:58:51 PM CST
 ************************************************************************/
#include <stdio.h>

#define swap(a, b){\
    __typeof(a) __temp = a;\
    a = b;b = __temp;\
}

int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    //swap(a, b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("swap : a = %d, b = %d\n", a, b);
    return 0;
}

