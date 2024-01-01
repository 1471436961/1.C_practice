/*************************************************************************
	> File Name: goto_if_else.c
	> Author: zhouyingda 
	> Mail: 
	> Created Time: Tue 26 Dec 2023 10:21:55 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({ goto if_stmt; 1; }); 
    // ()将{}里面的内容转换为表达式，该表达式的值为{}里最后一条语句的值
    !(n % 2 == 0) && ({goto else_stmt; 1; });
if_stmt:
    printf("%d is even\n", n);
    goto if_end;
else_stmt:
    printf("%d is odd\n", n);
    goto if_end;
if_end:
    return 0;
}

