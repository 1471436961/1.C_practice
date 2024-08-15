/*************************************************************************
	> File Name: students_table.c
	> Author: zhouyingda
	> Mail: 
	> Created Time: Wed 14 Aug 2024 07:27:23 PM CST
 ************************************************************************/

#include <stdio.h>
#include <database.h>

static const char *table_name = "students_table"; // static可避免链接时定义冲突
static const char *table_file = "./data/student_data.dat";
static const char *header_name[] = {"name", "age", "class", "height"};
static int header_len[] = {15, 6, 6, 7};

typedef struct Student {
    long offset; // 为了和之前学生系统产生的student_data.dat匹配，若重新产生新数据可删除
    char name[20];
    int age;
    int class;
    double height;
} table_data; // 利用别名提高代码通用性

#include "table_unit.haizei"

static void printData(void *__data) {
    table_data *data = (table_data *)(__data);
    char frm[100];
    sprintf(frm, "%%%ds|%%%dd|%%%dd|%%%d.2lf|",
        header_len[0], header_len[1],
        header_len[2], header_len[3]
    );
    printf(frm, data->name, data->age, data->class, data->height);
    printf("\n");
    return ;
}

static void scanData(void *__data) {
    table_data *data = (table_data *)(__data);
    scanf("%s%d%d%lf",
        data->name, &(data->age),
        &(data->class), &(data->height)
    );
    return ;
}
