/*************************************************************************
	> File Name: arry.c
	> Author: 
	> Mail: 
	> Created Time: Sat 04 Feb 2023 09:29:21 PM CST
 ************************************************************************/
#include <stdio.h>

void func(int (*num)[20][10]) {
    printf("func : \n");
    printf("num = %p, num + 1 = %p\n", num, num + 1);//指针num和数组arr的表现形式是一样的
    return ;
}

int main() {
    int arr[100][20][10] = {0};
    printf("sizeof(arr) = %lu\n", sizeof(arr));
    printf("arr = %p, arr[0] = %p\n", arr, &arr[0]);
    printf("arr + 1 = %p\n", arr + 1);
    func(arr);
    return 0;
}

