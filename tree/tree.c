#include "tree.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define queSize 60

//创建树
void createTree(Node *T,char a[][3],int n){
    int i,j,k = 0; 
    Node *s,*p;
    T = (Node *)malloc(sizeof(Node));
    T->data = a[0][0];
    T->lchild = T->rchild = NULL;
    Node Q[queSize];
    Q[0] = T;
    for (i = 0;i < n;i++)
	for (j = 0;j <= k;j++)
	    if (a[i][0] == Q[j]->data){
		p = (Node *)malloc(sizeof(Node));
		p->data = a[i][1];
		p->lchild = p->rchild =NULL;
		s = Q[j];
		Q[++k] = p;
		if (a[i][2] == '0') s->lchild = p;
		else s->rchild = p;
		break;
	    }

}

//销毁树
void clearTree(Node *T){
    if (T != NULL){
	clearTree (T->lchild);
	clearTree (T->rchild);
	free (T);
	T = NULL;
    }
}

//先序遍历
void PreOrder(Node *T){
    if (T != NULL){
	printf("%c",T->data);
	PerOrder(T->lchild);
	PerOrder(T->rchild);
    }
}


//中序遍历
void InOrder(Node *T){
    if (T != NULL){
	InOrder(T->lchild);
	printf("%c",T->data);
	InOrder(T->rchild);
    }
}


//后序遍历
void PostOrder(Node *T){
    if (T != NULL){
	PostOrder(T->lchild);
	PostOrder(T->rchild);
	printf("%c",T->data);
    }
}


