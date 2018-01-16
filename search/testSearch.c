#include "search.h"

int main(int argc,char **argv)
{
    SeqList *List;
    initList(List);
    creatList(List);
    displayList(List);

    /*折半查找*/ 
    printf("please input the find data: ");
    DataType findData;
    scanf("%d",&findData);
    printf("you find %d in list %d\n",findData,BinSearch(List,findData));
    printf("you find %d in list %d\n",findData,SeqSearch(List,findData));

    return 0;
}
