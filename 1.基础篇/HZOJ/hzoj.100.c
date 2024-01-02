/*************************************************************************
	> File Name: hzoj.100.c
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Jan 2023 11:22:37 PM CST
 ************************************************************************/
#include <stdio.h>
int main(){
    int n;
    double sum;
    scanf("%d", &n);
    sum = n;
    for(int i = 1; i < 7; i++){
        sum *= 1.00417;
        if(i < 6){
            sum += n;
        }
    }
    printf("$%.2lf\n", sum);
    return 0;
}

