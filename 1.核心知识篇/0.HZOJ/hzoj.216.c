/*************************************************************************
	> File Name: hzoj.216.c
	> Author: 
	> Mail: 
	> Created Time: Mon 15 May 2023 09:13:04 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char name[100][55] = {0}, temp[55] = {0};

void swap(char name1[55], char name2[55]) {
    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
    return ;
}

void bubble_sort(char name[100][55], int n) {
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (strcmp(name[j] + 3, name[j + 1] + 3) > 0) {
                swap(name[j], name[j + 1]);
            }
        }
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
    }
    bubble_sort(name, n);
    for (int j = 0; j < n; j++) {
        printf("%s\n", name[j] + 3);
    }
    return 0;
}

