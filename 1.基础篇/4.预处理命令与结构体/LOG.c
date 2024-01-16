/*************************************************************************
	> File Name: LOG.c
	> Author: 
	> Mail: 
	> Created Time: Sun 05 Feb 2023 06:13:50 PM CST
 ************************************************************************/
#include <stdio.h>

#ifdef DEBUG

#define log(frm, args...) {\
    printf("[%s : %s : %d]", __FILE__, __func__, __LINE__);\
    printf(frm, ##args);\
    printf("\n");\
}

//##为连接

#else
#define log(frm, args...)
#endif

#define contact(a, b) a##b

int main() {
    int a = 123, b = 234;
    int abcdef = 0;
    log("%d", b);
    log("hello world");
    contact(abc, def) = -1;
    log("%d", abcdef);
    return 0;
}

