/*************************************************************************
	> File Name: ex_gcd.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Jan 2023 07:48:40 PM CST
 ************************************************************************/
#include <stdio.h>

int ex_gcd(int a, int b, int *x, int *y){
    if (!b){
        *x = 1, *y = 0;
        return a;
    }
    int ret = ex_gcd(b, a % b, y, x);
    *y -= a / b * (*x);
    return ret;
}

int main(){
    int a, b, x, y;
    while(~scanf("%d%d", &a, &b)){
        printf("gcd(%d, %d) = %d\n", a, b, ex_gcd(a, b, &x, &y));
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, a * x + b * y);
    }
    return 0;
}

