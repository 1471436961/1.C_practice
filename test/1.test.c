/*************************************************************************
	> File Name: 1.test.c
	> Author: 
	> Mail: 
	> Created Time: Tue 10 Jan 2023 03:20:22 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    char str[100] = {0};
    int n;
    while(scanf("%d",&n) != -1){
        printf("%d\n",sprintf(str,"%d",n));
    }
    return 0;
}


