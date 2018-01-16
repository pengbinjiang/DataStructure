#ifndef tree_h
#define tree_h

typedef char DataType;

typedef struct _node{
    DataType data;
    struct _node *lchild;
    struct _node *rchild;
}Node;

void createTree(Node *,char,int);
void clearTree(Node *);
void PreOrder(Node *);
void InOrder(Node *);
void PostOrder(Node *);

#endif
