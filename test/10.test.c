/*************************************************************************
	> File Name: 10.test.c
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Jan 2023 07:54:58 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));//生成随机种子
    int n, cnt = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++ ){
        int val = rand() % 100;
        cnt += (val & 1);
        i && printf(" ");
        printf("%d", val);
    }
    printf("\n");
    printf("cnt : %d\n", cnt);
    return 0;

    int a = 0, b = 0;
    if ((a++) && (b++)){
        printf("true\n");
    }else{
        printf("false\n");
    }
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

