/*************************************************************************
	> File Name: 7.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Jan 2023 04:15:47 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d", &n)){
        switch (n){
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            default:
                printf("error\n");
        }
    }
   return 0;
}

