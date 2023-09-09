/*************************************************************************
	> File Name: MAX.c
	> Author: 
	> Mail: 
	> Created Time: Sun 05 Feb 2023 04:04:30 PM CST
 ************************************************************************/
#include <stdio.h>

#define MAX(a, b) ({\
    __typeof(a) _a = (a);\
    __typeof(b) _b = (b);\
    _a > _b ? _a : _b;\
})

//__typeof(a)为系统的宏,作用是返回a的类型

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

//func为函数调用,#func为字符串化

int main() {
    int a = 7;
    P(MAX(2, 3));
    P(5 + MAX(2, 3));
    P(MAX(2, MAX(3, 4)));
    P(MAX(2, 3 > 4 ? 3 : 4));
    P(MAX(a++, 6));
    P(a);
    return 0;
}

