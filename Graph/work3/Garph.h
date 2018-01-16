#ifndef Graph_h
#ifndef Graph_h

#include<stdio.h>
#define N 20
#define TRUE 1
#define INF 32766                    /*邻接矩阵中的无穷大元素*/
#define INFIN 32767                  /*比无穷大元素大的数*/

typedef struct
{
     /*图的邻接矩阵*/
        int vexnum,arcnum;
	    char vexs[N] ;
	        int arcs[N] [N] ;
} 
graph;

void createGraph_w(graph *g,int flag) ;
void prim(graph *g,int u) ;
void dijkstra(graph g,int v) ;
void showprim() ;
void showdij() ;

#ifndef
