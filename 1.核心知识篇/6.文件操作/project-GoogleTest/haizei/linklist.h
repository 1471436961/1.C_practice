/*************************************************************************
	> File Name: linklist.h
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Feb 2023 07:01:39 PM CST
 ************************************************************************/

#ifndef _LINKLIST_H
#define _LINKLIST_H

#define offset(T, name) ((long long)(&(((T *)(0))->name)))
//在0地址处定义T结构体类型变量

#define Head(p, T, name) ((T *)(((char *)p) - offset(T, name)))

struct LinkNode {
    struct LinkNode *next;
};

#endif
