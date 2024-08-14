/*************************************************************************
	> File Name: students_table.c
	> Author: zhouyingda
	> Mail: 
	> Created Time: Wed 14 Aug 2024 07:27:23 PM CST
 ************************************************************************/

#include <stdio.h>
#include <database.h>

static const char *table_name = "students_table"; // static可避免链接时定义冲突

static void init_table(struct Database *);

__attribute__((constructor))
static void __register_table() {
    register_table(table_name, init_table);
    return ;
}

void init_table(struct Database *db) {
    db->table_name = table_name;
    return ;
}

