/*************************************************************************
	> File Name: 2.test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Jan 2023 04:08:39 PM CST
 ************************************************************************/

#include <stdio.h>
int main(){
    char str[100] = {0};
    while(scanf("%[^\n]s", str) != EOF){
        getchar();
        printf(" has %d chars!\n", printf("%s", str));
    }
    return 0;
}

