#include<stdio.h>
#include<stdlib.h>

#ifndef search_h
#define search_h

#define initSize 30

typedef int DataType;

typedef struct _seqList{
	DataType *arr;
	int arrSize;
	int maxSize;
}SeqList;

void initList(SeqList *);  //初始化顺序表
//int Length(SeqList *);  //表长
void creatList(SeqList *);  //创建顺序表
void displayList(SeqList *);  //输出顺序表
int SeqSearch (SeqList *,DataType x); //顺序查找
int BinSearch(SeqList *,DataType); //折半查找
//int SeqSearch(SeqList *,DataType);

#endif
