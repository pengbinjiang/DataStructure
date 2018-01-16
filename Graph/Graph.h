#ifndef Graph_h
#define Graph_h
    
#define maxVertices 30
#define maxEdges 900
#define maxWeight 32767
#define impossibleValue '#'
#define impossibleWeight -1

typedef char Type;
typedef int Weight;
typedef struct _graph{
    int numVertices,numEdges;
    Type VerticesList[maxVertices];
    Weight Edge[maxVertices];
}Graph

int 
#endif 
