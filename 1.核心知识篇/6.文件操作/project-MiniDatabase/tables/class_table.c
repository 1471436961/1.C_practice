/*************************************************************************
	> File Name: students_table.c
	> Author: zhouyingda
	> Mail: 
	> Created Time: Wed 14 Aug 2024 07:27:23 PM CST
 ************************************************************************/

#include <stdio.h>
#include <database.h>

static const char *table_name = "class_table"; // static可避免链接时定义冲突
static const char *table_file = "./data/class_data.dat";
static const char *header_name[] = {"name", "No.Stu", "master"};
static int header_len[] = {15, 7, 15};

typedef struct {
    char name[20];
    int NoStu;
    char master[20];
} table_data; // 利用别名提高代码通用性

#include "table_unit.haizei"

static void printData(void *__data) {
    table_data *data = (table_data *)(__data);
    char frm[100];
    sprintf(frm, "%%%ds|%%%dd|%%%ds|",
        header_len[0], header_len[1],
        header_len[2]
    );
    printf(frm, data->name, data->NoStu, data->master);
    printf("\n");
    return ;
}

static void scanData(void *__data) {
    table_data *data = (table_data *)(__data);
    scanf("%s%d%s",
        data->name, &(data->NoStu),
        data->master
    );
    return ;
}
