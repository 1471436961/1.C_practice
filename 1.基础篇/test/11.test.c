/*************************************************************************
	> File Name: 11.test.c
	> Author: 
	> Mail: 
	> Created Time: Fri 20 Jan 2023 07:16:32 PM CST
 ************************************************************************/
#include <stdio.h>

int fac(int n){
    if (n == 0 || n == 1) return 1;
    return n * fac(n-1);
}

int main(){
    int n;
    while(~scanf("%d", &n)){
        printf("fac(%d) = %d\n", n, fac(n));
    }
    return 0;
}

