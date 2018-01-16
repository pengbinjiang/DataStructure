#include "eGraph.h"

reateGraph_list(vnode adjlist[] ,int *p) {
    /*建立有向图的邻接表*/
    int i,j,n,e;
    char v;
    edgenode *s;
    i=0;n=0;e=0;
    printf("输入顶点序列(以#结束) ：\n") ;
    while((v=getchar() ) !='#') 
    {
	adjlist[i] .data=v;     /*读入顶点信息*/
	adjlist[i] .link=NULL;
	adjlist[i] .ind=0;
	i++;
    }
    n=i;
    *p=n;  /*建立邻接链表*/
    printf("\n请输入弧的信息(i=-1结束) ：i,j:\n") ;
    scanf("%d,%d",&i,&j) ;
    while(i!=-1) {
	s=(struct edgenode*) malloc(sizeof(edgenode) ) ;
	s->adjvex=j;
	s->next=adjlist[i] .link;
	adjlist[i] .link=s;
	adjlist[j] .ind++;  /*顶点j的入度加1*/
	e++;
	scanf("%d,%d",&i,&j) ;
    } 
    printf("邻接表:") ;
    for(i=0;i<n;i++) {			
	/*输出邻接表*/
	printf("\n%c,%d:",adjlist[i] .data,adjlist[i] .ind) ;
	s=adjlist[i] .link;
	while(s!=NULL) {
	    printf("->%d",s->adjvex) ;
	    s=s->next;
	} 
    } 
} 

void topSort(vnode g[] ,int n) {
     /*拓扑排序*/
    int i,j,w; edgenode *p;
    int S[N]; int top = -1;
    int k = p->adjvex;
    int *ind = (int *)malloc(k*sizeof(int ));
    for(i= 0;i<k;i++) ind [i] = 0;
    for(i = 0;i<k;i++)
	for (p = )









} 
