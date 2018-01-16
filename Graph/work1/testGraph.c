#include "MGraph.h"

int main() 
{
    graph ga;
    int i,j;
    createGraph(&ga) ;
    printf("无向图的邻接矩阵：\n") ;
    for(i=0;i<ga.vexnum;i++) 
    {
	for(j=0;j<ga.vexnum;j++) 
	    printf("%3d",ga.arcs[i][j]);
	printf("\n") ;
    } 
    init_visit() ;
    tdfs(&ga) ;
    init_visit() ;
    tbfs(&ga) ;
    printf("\n");
    return 0;
} 
