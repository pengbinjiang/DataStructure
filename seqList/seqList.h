#ifndef seqList_h
#define seqList_h

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
void isEmpty(SeqList *);  //判断表是否为空
void isFull(SeqList *);  //判断表是否为满
int findList(SeqList *,DataType); //顺序表的查找
void insertList(SeqList *,DataType,int);//插入
void deleteList(SeqList *,DataType *,int);//删除

#endif
