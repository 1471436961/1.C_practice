/*************************************************************************
	> File Name: hzoj.220.c
	> Author: 
	> Mail: 
	> Created Time: Tue 16 May 2023 09:59:52 PM CST
 ************************************************************************/
#include <stdio.h>

typedef struct student {
    char name[10005];
    int chinese, math, english, science, sum;
}student;

student students[105] = {0};

void chinese_well(student students[105], int n) {
    for (int i = 0; i < 4; i++) {
        int max = students[0].chinese, max_ind = 0;
        for (int j = 1; j < n; j++) {
            if (students[j].chinese > max) {
                max = students[j].chinese;
                max_ind = j;
            }
        }
        i != 0 && printf(" ");
        printf("%s", students[max_ind].name);
        students[max_ind].chinese = 0;
    }
    printf("\n");
    return ;
}

void math_well(student students[105], int n) {
    for (int i = 0; i < 4; i++) {
        int max = students[0].math, max_ind = 0;
        for (int j = 1; j < n; j++) {
            if (students[j].math > max) {
                max = students[j].math;
                max_ind = j;
            }
        }
        i != 0 && printf(" ");
        printf("%s", students[max_ind].name);
        students[max_ind].math = 0;
    }
    printf("\n");
    return ;
}

void english_well(student students[105], int n) {
    for (int i = 0; i < 4; i++) {
        int max = students[0].english, max_ind = 0;
        for (int j = 1; j < n; j++) {
            if (students[j].english > max) {
                max = students[j].english;
                max_ind = j;
            }
        }
        i != 0 && printf(" ");
        printf("%s", students[max_ind].name);
        students[max_ind].english = 0;
    }
    printf("\n");
    return ;
}

void science_well(student students[105], int n) {
    for (int i = 0; i < 4; i++) {
        int max = students[0].science, max_ind = 0;
        for (int j = 1; j < n; j++) {
            if (students[j].science > max) {
                max = students[j].science;
                max_ind = j;
            }
        }
        i != 0 && printf(" ");
        printf("%s", students[max_ind].name);
        students[max_ind].science = 0;
    }
    printf("\n");
    return ;
}

void sum_well(student students[105], int n) {
    for (int i = 0; i < 4; i++) {
        int max = students[0].sum, max_ind = 0;
        for (int j = 1; j < n; j++) {
            if (students[j].sum > max) {
                max = students[j].sum;
                max_ind = j;
            }
        }
        i != 0 && printf(" ");
        printf("%s", students[max_ind].name);
        students[max_ind].sum = 0;
    }
    printf("\n");
    return ;
}

int main() {
    int n; 
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].chinese);
        scanf("%d", &students[i].math);
        scanf("%d", &students[i].english);
        scanf("%d", &students[i].science);
        students[i].sum = students[i].chinese + students[i].math + students[i].english + students[i].science;
    }
    chinese_well(students, n);
    math_well(students, n);
    english_well(students, n);
    science_well(students, n);
    sum_well(students, n);
    return 0;
}

