#include "seqList.h"

#include <stdio.h>
#include <stdlib.h>

void initList(SeqList *List){
	List->arr = (DataType *)malloc(sizeof(DataType)*initSize);
	if(List->arr == NULL){printf("Error!\n"); return;}
	List->maxSize = initSize;
	List->arrSize = 0;

	return;
}

//int Length(SeqList *List){
//	return arrSize;
//}

void creatList(SeqList *List){
	int arrTmpSize;
	printf("please input the list size: \n");
	scanf("%d",&arrTmpSize);
	for(int i=0;i<arrTmpSize;i++){
		printf("please input %dth number: ",i+1);
		scanf("%d",&List->arr[i]);
	}
	List->arrSize = arrTmpSize;

	return;
}

void displayList(SeqList *List){
	printf("The list: ");
	for(int i=0;i<List->arrSize;i++){
		printf("%d\t",List->arr[i]);
	}
	printf("\n");
}

void isEmpty(SeqList *List){
	List->arrSize == 0;
	return; 
}

void isFull(SeqList *List){
	List->arrSize == List->maxSize;
	return; 
}

int findList(SeqList *List,DataType data){
    for(int i=0;i<List->arrSize;i++){
	if(List->arr[i] == data){
	    return i;
	}
    }

    return -1;
} 

void insertList(SeqList *List,DataType data,int local){
    if(local<0||local>List->arrSize+1){
	printf("Error!\n");
	return;
    }else{
	for(int i=List->arrSize;i>local-1;i--){
	    List->arr[i+1] = List->arr[i];
	}
	List->arr[local] = data;
    }
    List->arrSize++;

    return;
}

void deleteList(SeqList *List,DataType *data,int local){
    if(local<0||local>List->arrSize){
	printf("Error!\n");
	return;
    }else{
	*data = List->arr[local];
	for(int i=local+1;i<List->arrSize;i++){
	    List->arr[i-1] = List->arr[i];
	}
    }
    List->arrSize--;

    return;
}
