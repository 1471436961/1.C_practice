/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: Tue 07 Feb 2023 06:31:25 PM CST
 ************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void output(int argc, char *argv[], char *env[]) {
    printf("argc = %d\n", argc);
    for (int i = 0; i <argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    for (int i = 0; env[i]; i++) {
        printf("env[%d] = %s\n", i, env[i]);
        if (strncmp(env[i], "USER=", 5) == 0) {
            if (strcmp(env[i] + 5, "zhouyingda")) {
                printf("your are not zhouyingda, don't run me, Gun!\n");
                exit(0);
            }
        }
    }
    return ;
}

int main(int argc, char *argv[], char **env) {
    output(argc, argv, env);
    return 0;
}

