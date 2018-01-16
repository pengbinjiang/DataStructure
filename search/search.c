#include "search.h"

void initList(SeqList *List){
	List->arr = (DataType *)malloc(sizeof(DataType)*initSize);
	if(List->arr == NULL){printf("Error!\n"); return;}
	List->maxSize = initSize;
	List->arrSize = 0;

	return;
}

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


int BinSearch(SeqList *list,DataType x){
    int left = 0,right = list->arrSize - 1,mid;
    while (left <= right){
	mid = ( left + right ) / 2;
	if (x == list->arr[mid]) return mid;
	else{
	    if (x >list->arr[mid]) left =mid + 1;
	    else right = mid - 1;
	}
    }
    return -1; //查找失败
}

int SeqSearch(SeqList *list,DataType x){
    list->arr[list->arrSize] = x;
    int i;
    for (i = 0;list->arr[i] != x;i++);
    return (i >= list->arrSize) ? -1 : i;
}

