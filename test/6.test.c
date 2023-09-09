/*************************************************************************
	> File Name: 6.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Jan 2023 03:57:07 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d", &n)){
        if (!n){
            printf("FOOLISH\n");
        }else if (n < 60){
            printf("FAIL\n");
        }else if (n < 75){
            printf("MEDIUM\n");
        }else{
            printf("GOOD\n");
        }
    }
    return 0;
}

