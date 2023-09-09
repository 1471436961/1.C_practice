/*************************************************************************
	> File Name: 8.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Jan 2023 04:26:22 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d", &n)){
        switch (n){
            case 1:
                printf("one ");
            case 2:
                printf("two ");
            case 3:
                printf("three\n");
                break;
            default:
                printf("error\n");
        }
    }
    return 0;
}

