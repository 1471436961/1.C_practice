/*************************************************************************
	> File Name: database.h
	> Author: zhouyingda
	> Mail: 
	> Created Time: Wed 14 Aug 2024 05:33:47 PM CST
 ************************************************************************/

#ifndef _DATABASE_H
#define _DATABASE_H

struct Database;

typedef void (*InitTable_T)(struct Database *);

enum OP_TYPE {
    CHOOSE_TABLE,
    TABLE_USAGE,
    OP_END,
    LIST_TABLE,
    ADD_TABLE,
    MODIFY_TABLE,
    DELETE_TABLE
};

struct Database {
    const char *table_name;
};

struct TableInfo {
    const char *table_name;
    InitTable_T init_table;
};

void run_database();
void register_table(const char *, InitTable_T);

extern struct Database db;

#endif
