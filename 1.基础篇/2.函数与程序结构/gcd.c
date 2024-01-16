/*************************************************************************
	> File Name: gcd.c
	> Author: 
	> Mail: 
	> Created Time: Mon 30 Jan 2023 02:19:46 PM CST
 ************************************************************************/
#include <stdio.h>

int gcd(int a, int b){
    return (b ? gcd(b, a % b) : a);
}

int lcm(int a, int b){
    return a / gcd(a, b) * b;//先除再乘,以防超出int类型所能表示的数据范围
} 

int main(){
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
        printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
    }
    return 0;
}

