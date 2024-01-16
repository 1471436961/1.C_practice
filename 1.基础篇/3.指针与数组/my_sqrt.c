/*************************************************************************
	> File Name: my_sqrt.c
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 08:32:51 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

double my_sqrt(double n) {
    double head = 0, tail = n + 1.0, mid;//+1.0解决平方根比自己大的bug
    #define EPSL 1e-7
    while(tail - head > EPSL) {
        mid = (head + tail) / 2.0;
        if (mid * mid < n) head = mid;
        else tail = mid;
    }
    #undef EPSL
    return head;
}

int main() {
    double n;
    while (~scanf("%lf", &n)) {
        printf("sqrt(%g) = %g\n", n, sqrt(n));//%g可以省略多余的0
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(n));
    }
    return 0;
}

