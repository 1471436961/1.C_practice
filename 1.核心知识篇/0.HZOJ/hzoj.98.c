/*************************************************************************
	> File Name: hzoj.98.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Jan 2023 11:11:07 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    double r, h;
    scanf("%lf%lf", &r, &h);
    printf("%.2lf\n%.2lf\n", r * r * 3.14, r * r * 3.14 * h);
    return 0;
}

