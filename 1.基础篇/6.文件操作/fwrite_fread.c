/*************************************************************************
	> File Name: fwrite_fread.c
	> Author: zhouyingda
	> Mail: 
	> Created Time: Sun 14 Jan 2024 08:24:04 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 10

void output(int *arr, int n) {
    printf("arr : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return ;
}

int fwrite_test() {
    srand(time(0));
    int arr[MAX_N];
    for (int i = 0; i < MAX_N; i++) {
        arr[i] = rand() % 10000;
    }
    output(arr, MAX_N);
    FILE *fp = fopen("data.dat", "wb");
    fwrite(arr, sizeof(int), MAX_N, fp);
    fclose(fp);
    return 0;
}

int main() {
    int arr[MAX_N];
    FILE *fp = fopen("data.dat", "rb");
    output(arr, MAX_N);
    fread(arr, sizeof(int), MAX_N, fp);
    output(arr, MAX_N);
    fclose(fp);
    return 0;
}
