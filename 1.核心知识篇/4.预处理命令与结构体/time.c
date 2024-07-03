/*************************************************************************
	> File Name: time.c
	> Author: zhouyingda 
	> Mail: 
	> Created Time: Thu 28 Dec 2023 12:46:19 PM CST
 ************************************************************************/

#include <stdio.h>
#include <time.h>

#define TIME(func) { \
    long long b = clock(); \
    func; \
    long long e = clock(); \
    printf("%s run %lldms\n", #func, 1000 * (e - b) / CLOCKS_PER_SEC); \
}

void test(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) sum += i;
    printf("sum = %lld\n", sum);
    return ;
}

int main() {
    TIME(test(100000));
    TIME(test(1000000));
    TIME(test(10000000));
    return 0;
}
