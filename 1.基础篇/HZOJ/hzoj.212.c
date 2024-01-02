/*************************************************************************
	> File Name: hzoj.212.c
	> Author: 
	> Mail: 
	> Created Time: Mon 15 May 2023 05:54:43 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>

char name[10][25] = {0}, temp[25] = {0};

void swap(char name1[25], char name2[25]) {
    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);
    return ;
}

void bubble_sort(char name[10][25]) {
    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (strcmp(name[j], name[j + 1]) > 0)swap(name[j], name[j + 1]);
        }
    }
    return ;
}

int main() {
    for (int i = 0; i < 10; i++) {
        scanf("%s", name[i]);
    }
    bubble_sort(name);
    for (int j = 0; j < 10; j++) {
        printf("%s\n", name[j]);
    }
    return 0;
}

