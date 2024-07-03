/*************************************************************************
	> File Name: hzoj.215.c
	> Author: 
	> Mail: 
	> Created Time: Mon 15 May 2023 07:48:14 PM CST
 ************************************************************************/
#include <stdio.h>

typedef struct student {
    char name[15];
    int math;
    int chinese;
    int english;
    int geograph;
}student;

student students[45];
int sum[45] = {0};

void select_max(int sum[], int n) {
    for (int i = 0; i < 3; i++) {
        int max = sum[0], max_dex = 0;
        for (int j = 0; j < n; j++) {
            if (sum[j] > max) {
                max = sum[j];
                max_dex = j;
            }
        }
        sum[max_dex] = 0;
        printf("%s\n", students[max_dex].name);
    }
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].math);
        scanf("%d", &students[i].chinese);    
        scanf("%d", &students[i].english);
        scanf("%d", &students[i].geograph);
        sum[i] = students[i].math + students[i].chinese + students[i].english + students[i].geograph;
    }
    select_max(sum, n);
    return 0;
}

