/*************************************************************************
	> File Name: define.c
	> Author: 
	> Mail: 
	> Created Time: Sun 05 Feb 2023 07:14:41 PM CST
 ************************************************************************/
#include <stdio.h>

#define TYPE(a) _Generic((a),\
    int  : "%d",\
    double : "%.2lf",\
    char * : "%s"\
)

__attribute__((constructor))//宏,使后面一个函数优于主函数执行(主函数不能省略),若有多个这样的宏,则按从下到上的顺序执行
void func() {
    int a = 2, b = 3;
    printf("func : %d + %d = %d\n", a, b, a + b);
    return ;
}

__attribute__((constructor))
void add() {
    printf("add : hello world\n");
    return ;
}

int main() {
    int a = 123;
    double r = 3.14;
    char str[] = "hello world";
    printf(TYPE(a), a);
    printf("\n");
    printf(TYPE(r), r);
    printf("\n");
    printf(TYPE(str), str);
    printf("\n");
    return 0;
}
