/*************************************************************************
	> File Name: hzoj.132.c
	> Author: 
	> Mail: 
	> Created Time: Wed 22 Feb 2023 09:33:02 PM CST
 ************************************************************************/
#include <stdio.h>

int main() {
    int n;
    long long m = 1;
    scanf("%d", &n);
    int n1 = n;
    int arr[n1];
    for (int i = n; n; n--) {
        scanf("%d", &arr[i]);
        m *= arr[i];
    }
    printf("%lld\n", m);
    return 0;
}

