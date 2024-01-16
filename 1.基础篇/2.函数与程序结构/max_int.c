/*************************************************************************
	> File Name: max_int.c
	> Author: 
	> Mail: 
	> Created Time: Tue 31 Jan 2023 03:03:44 PM CST
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

#define P(func) {\
    printf("%s = %d\n", #func, func);\
}

int max_int(int n, ...){
    int ans = INT32_MIN;//32位整型可表示的最小值
    va_list arg;
    va_start(arg,n);
    while (n--) {
        int temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
    }
    va_end(arg);
    return ans;
}

int main(){
    P(max_int(3, 1, 2, 3));
    P(max_int(5, 1, 3, 5, 23, 2));
    P(max_int(5, 1, 2, 3, 13, 0, 23, 33));
    return 0;
}

