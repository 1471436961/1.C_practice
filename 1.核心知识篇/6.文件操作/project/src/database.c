/*************************************************************************
	> File Name: database.c
	> Author: zhouyingda
	> Mail: 
	> Created Time: Wed 14 Aug 2024 05:34:40 PM CST
 ************************************************************************/

#include <stdio.h>
#include <database.h>

struct Database db;

struct TableInfo tables[100];
int table_cnt = 0;

void register_table(const char *table_name, InitTable_T init_table) {
    tables[table_cnt].table_name = table_name;
    tables[table_cnt].init_table = init_table;
    table_cnt += 1;
    return ;
}

static enum OP_TYPE choose_table() {
    for (int i = 0; i < table_cnt; i++) {
        printf("%d : %s\n", i, tables[i].table_name);
    }
    printf("%d : quit\n", table_cnt);
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 0 || x > table_cnt);
    if (x < table_cnt) {
        tables[x].init_table(&db);
        return TABLE_USAGE;
    }
    return OP_END;
}

static enum OP_TYPE table_usage() {
    printf("1 : list %s\n", db.table_name);
    printf("2 : add an item to %s\n", db.table_name);
    printf("3 : modify an item in %s\n", db.table_name);
    printf("4 : delete an item from %s\n", db.table_name);
    printf("5 : back\n");
    int x;
    do {
        printf("input : ");
        scanf("%d", &x);
    } while (x < 1 || x > 5);
    if (x == 1) return LIST_TABLE;
    if (x == 2) return ADD_TABLE;
    if (x == 3) return MODIFY_TABLE;
    if (x == 4) return DELETE_TABLE;
    return CHOOSE_TABLE;
}

static enum OP_TYPE list_table() {
    printf("list table\n");
    return TABLE_USAGE;
}

static enum OP_TYPE add_table() {
    printf("add table\n");
    return TABLE_USAGE;
}

static enum OP_TYPE modify_table() {
    printf("modify table\n");
    return TABLE_USAGE;
}

static enum OP_TYPE delete_table() {
    printf("delete table\n");
    return TABLE_USAGE;
}

enum OP_TYPE run( enum OP_TYPE status) {
    switch (status) {
        case CHOOSE_TABLE: {
            return choose_table();
        } break;
        case TABLE_USAGE: {
            return table_usage();
        } break;
        case LIST_TABLE: {
            return list_table();
        } break;
        case ADD_TABLE: {
            return add_table();
        } break;
        case MODIFY_TABLE: {
            return modify_table();
        } break;
        case DELETE_TABLE: {
            return delete_table();
        } break;
        default : {
            printf("unknow status : %d\n", status);
        } break;
    }
    return OP_END;
}

void run_database() {
    enum OP_TYPE status = CHOOSE_TABLE;
    while (1) {
        status = run(status);
        if (status == OP_END) break;
    }
    return ;
}
