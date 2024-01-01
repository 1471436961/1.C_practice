/*************************************************************************
	> File Name: NewTon.c
	> Author: 
	> Mail: 
	> Created Time: Fri 03 Feb 2023 09:33:55 PM CST
 ************************************************************************/
#include <stdio.h>
#include <math.h>

double func(double x, double n) {
    return x * x - n;
}

double f(double x) {
    return 2 * x;
}

double NewTon(double (*F)(double, double), double (*f)(double), double n) {
    double x =1.0;
    #define EPSL 1e-7
    while (fabs(F(x, n)) > EPSL) {
        x -= F(x, n) / f(x);
    }
    #undef EPSL
    return x;
}

double my_sqrt(double n) {
    return NewTon(func, f, n);
}

int main() {
    double n;
    while (~scanf("%lf", &n)) {
        printf("sqrt(%g) = %g\n", n, sqrt(n));
        printf("my_sqrt(%g) = %g\n", n, my_sqrt(n));
    }
    return 0;
}

