#ifndef seqList_h
#define seqList_h

#define initSize 30

typedef int DataType;

typedef struct _seqList{
	DataType *arr;
	int arrSize;
	int maxSize;
}SeqList;

void initList(SeqList *);  //��ʼ��˳���
//int Length(SeqList *);  //��
void creatList(SeqList *);  //����˳���
void displayList(SeqList *);  //���˳���
void isEmpty(SeqList *);  //�жϱ��Ƿ�Ϊ��
void isFull(SeqList *);  //�жϱ��Ƿ�Ϊ��
int findList(SeqList *,DataType); //˳���Ĳ���
void insertList(SeqList *,DataType,int);//����
void deleteList(SeqList *,DataType *,int);//ɾ��

#endif
