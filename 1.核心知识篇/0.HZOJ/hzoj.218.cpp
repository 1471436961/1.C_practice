/*************************************************************************
	> File Name: hzoj.218.c
	> Author: 
	> Mail: 
	> Created Time: Tue 16 May 2023 08:01:56 PM CST
 ************************************************************************/
#include <stdio.h>
#include <algorithm>
using namespace std;

struct student {
    int num, height;
};

struct student students[100005] = {0};

bool cmp(struct student a, struct student b) {
    if (a.height == b.height) {
        return a.num < b.num;
    }
    return a.height < b.height;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        students[i].num = i + 1;
        scanf("%d", &students[i].height);
    }
    sort(students, students + n, cmp);
    for (int j = 0; j < n; j++) {
        j != 0 && printf(" ");
        printf("%d", students[j].num);
    }
    printf("\n");
    return 0;
}

