/*************************************************************************
	> File Name: hzoj.207.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 03:25:18 PM CST
 ************************************************************************/
#include <stdio.h>

typedef struct student {
    char name[100005];
    int math, chinese, english, geograph, sum, max, min;
}student;

student students[35] = {0};

void heighest(student students[35], int n) {
    int max = 0, max_ind; 
    for (int i = 0; i < n; i++) {
        if (students[i].sum > max) {
            max = students[i].sum;
            max_ind = i;
        }
    }
    printf("%s\n", students[max_ind].name);
    return ;
}

void max_a_min(student students[35], int n) {
    int max = 0, min = 1000000;
    for (int i = 0; i < n; i++) {
        if (students[i].max > max) max = students[i].max;
        if (students[i].min < min) min = students[i].min;
    }
    printf("%d %d\n", max, min);
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        students[i].sum = 0;
        scanf("%s", students[i].name);
        scanf("%d", &students[i].math);
        students[i].max = students[i].min = students[i].math;
        scanf("%d", &students[i].chinese);
        if (students[i].chinese > students[i].max) {
            students[i].max = students[i].chinese;
        } else if (students[i].chinese < students[i].min) {
            students[i].min = students[i].chinese;
        }
        scanf("%d", &students[i].english);
        if (students[i].english > students[i].max) {
            students[i].max = students[i].english;
        } else if (students[i].english < students[i].min) {
            students[i].min = students[i].english;
        }
        scanf("%d", &students[i].geograph);
        if (students[i].geograph > students[i].max) {
            students[i].max = students[i].geograph;
        } else if (students[i].geograph < students[i].min) {
            students[i].min = students[i].geograph;
        }
        students[i].sum += (students[i].math + students[i].chinese + students[i].english + students[i].geograph);
    }
    for (int j = 0; j < n; j++) {
        printf("%d\n", students[j].sum);
    }
    heighest(students, n);
    max_a_min(students, n);
    return 0;
}

