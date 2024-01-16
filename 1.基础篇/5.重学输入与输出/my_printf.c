/*************************************************************************
	> File Name: my_printf.c
	> Author: 
	> Mail: 
	> Created Time: Tue 31 Jan 2023 03:49:29 PM CST
 ************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int reverse_num(int n, int *temp) {
    int digit = 0;
    do {
        *temp = *temp * 10 + n % 10;
        digit += 1;
        n /= 10;
    }while (n);
    return digit;
}

int output_num(int n, int digit) {
    int cnt = 0;
    while (digit--) {
        putchar(n % 10 + '0');
        cnt += 1;
        n /= 10;
    }
    return cnt;
}

int my_printf(const char *frm, ...) {
    int cnt = 0;
    va_list arg;
    va_start(arg,frm);
    #define PUTC(a) putchar(a), ++cnt
    for (int i = 0; frm[i]; i++){//字符串的最后一位隐含存储'\0',其对应的ASCII码值为0
        switch (frm[i]) {
            case '%': {
                switch (frm[++i]) {
                    case '%': PUTC(frm[i]);break;
                    case 'd': {
                        int x = va_arg(arg, int);
                        uint32_t xx = 0;
                        if (x < 0) PUTC('-'), xx = -x;
                        else xx = x;
                        int x1 = xx / 100000, x2 = xx % 100000;
                        int temp1 = 0, temp2 = 0;
                        int digit1 = reverse_num(x1, &temp1);
                        int digit2 = reverse_num(x2, &temp2);
                        if (x1) digit2 = 5;
                        else digit1 = 0;
                        cnt += output_num(temp1, digit1);
                        cnt += output_num(temp2, digit2);
                    }break;
                    case 's': {
                        const char *str = va_arg(arg, const char *);
                        for (int i = 0; str[i]; i++){
                            PUTC(str[i]);
                        }
                    }break;
                }
            } break;
            default:PUTC(frm[i]);
        }
    }
    #undef PUTC   
    va_end(arg);
    return cnt;
}

int main(){
    int a = 123;
    printf("hello world\n");
    my_printf("hello world\n");
    printf("int (a) = %d\n", a);
    my_printf("int (a) = %d\n", a);
    printf("int (0) = %d\n", 0);
    my_printf("int (0) = %d\n", 0);
    printf("int (1000) = %d\n", 1000);
    my_printf("int (1000) = %d\n", 1000);
    printf("int (-123) = %d\n", -123);
    my_printf("int (-123) = %d\n", -123);
    printf("INT32_MAX = %d\n", INT32_MAX);
    my_printf("INT32_MAX = %d\n", INT32_MAX);
    printf("INT32_MIN = %d\n", INT32_MIN);
    my_printf("INT32_MIN = %d\n", INT32_MIN);
    char str[] = "hello world!";
    printf("str = %s\n", str);
    my_printf("str = %s\n", str);
    printf("int (1900000001) = %d\n", 1900000001);
    my_printf("int (1900000001) = %d\n", 1900000001);
    int n;
    while (~scanf("%d", &n)) {
        printf("has %d digits!\n", printf("%d", n));
        my_printf("has %d digits!\n", my_printf("%d", n));
    }
    return 0;
}

