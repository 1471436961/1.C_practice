/*************************************************************************
	> File Name: binary_search.c
	> Author: 
	> Mail: 
	> Created Time: Mon 23 Jan 2023 06:06:55 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 100

int binary_search(int *arr, int n, int x) {
    int head = 0,tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) head = mid + 1;
        else tail = mid - 1;
    }
    return -1;
}

//递归版(船长)
int binary_search1(int *arr, int left, int right, int x) {
    if (left > right) return -1;
    int mid = (left + right) >> 1;
    if (arr[mid] == x) return mid;
    if (arr[mid] < x) left = mid + 1;
    else right = mid - 1;
    return binary_search1(arr, left, right, x);
}

//递归版(自己)
int binary_search2(int *arr, int left, int right, int x) {
    while (left <= right) {
        int mid = (left + right) >> 1;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) return binary_search2(arr, mid + 1, right, x);
        else return binary_search2(arr, left, mid - 1, x);
    }
    return -1;
}

//000000111111 找第一个1(可抽象成找第一个符合条件的值)
int binary_search3(int *arr, int n) {
    int head = 0, tail = n, mid;//tail指向虚拟尾
    while (head < tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == 0) head = mid + 1;
        else tail = mid;//注意不是mid - 1
    }
    return head == n ? -1 :head;
}


//111111000000 找最后一个1(可抽象成最后一个符合条件的值)
int binary_search4(int *arr,int n) {
    int head = -1, tail = n - 1, mid;
    while (head < tail) {
        mid = (head + tail + 1) >> 1;
        if (arr[mid] == 0) tail = mid - 1;
        else head = mid;
    }
    return head;
}

int main(){
    int arr[MAX_N] = {0}, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("%d\n", binary_search4(arr, n));
    return 0;
}

