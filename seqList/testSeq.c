#include "seqList.h"

int main(int argc,char **argv)
{
    SeqList List;
    initList(&List);
    creatList(&List);
    displayList(&List);

    /*顺序表的查找*/ 
    printf("please input the find data: ");
    DataType findData;
    scanf("%d",&findData);
    printf("you find %d in list %d\n",findData,findList(&List,findData));
    displayList(&List);

    /*顺序表的插入*/ 
    printf("please input the insert data: ");
    DataType insertData;
    scanf("%d",&insertData);
    printf("please input the insert local: ");
    DataType insertlocal;
    scanf("%d",&insertlocal);
    insertList(&List,insertData,insertlocal);
    displayList(&List);

    /*顺序表的删除*/ 
    DataType *deleteData = (DataType *)malloc(sizeof(DataType));
    DataType deletelocal;
    printf("please input the delete local: ");
    scanf("%d",&deletelocal);
    deleteList(&List,deleteData,deletelocal);
    printf("you delete data is %d\n",*deleteData);
    displayList(&List);

    return 0;
}
