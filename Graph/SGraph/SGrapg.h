#ifndef SGraph_h
#define SGraph_h

#include <stdio.h>
#include<malloc.h>
#define N 20
typedef struct edgenode{
    /*图的邻接表：邻接链表结点*/
    int adjvex;  /*顶点序号*/
    struct edgenode *next; /*下一个结点的指针*/
} edgenode;

typedef struct vnode{
    /*图的邻接表：邻接表*/
    char data;    /*顶点信息*/
    int ind;      /*顶点入度*/
    struct edgenode *link;  /*指向邻接链表指针*/
} vnode;

void createGraph_list(vnode adjlist[] ,int *p) ； /*建立有向图的邻接表*/
void topSort(vnode g[] ,int n) ； /*拓扑排序*/

#endif
