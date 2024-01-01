/*************************************************************************
	> File Name: 12.test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 06 Feb 2023 07:44:12 PM CST
 ************************************************************************/
#include <stdio.h>

#define log(func) {\
    printf("%s = %d\n", #func, func);\
}

struct Data {
    int x, y;
};

int main() {
    struct Data a[2], *p = a;
    a[0].x = 0, a[0].y = 1;
    a[1].x = 2, a[1].y = 3;
    log((a + 1)->x);
    log((p + 1)->x);
    log((&a[0] + 1)->x);
    log((&p[0] + 1)->x);
    log(p[1].x);
    log((*(a + 1)).x);
    log((*(p + 1)).x);
    log((*(&a[0] + 1)).x);
    log((*(&p[0] + 1)).x);
    log(*((int *) a + 2));//将a强转成指向int的指针,a + 1相当于向后移动4个字节
    log(((int *) a + 2)[0]);
    return 0;
}

