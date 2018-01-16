#include "list.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	List *list1 = (List *)malloc(sizeof(List));
	printf("the first addHead :\n");
	initList(list1);
	addHead(list1, 1);
	addHead(list1, 2);
	addHead(list1, 3);
	addHead(list1, 4);
	addHead(list1, 5);
	displayList(list1);
	printf("the second addTail :\n");
	addTail(list1, 6);
	addTail(list1, 7);
	addTail(list1, 8);
	addTail(list1, 9);
	addTail(list1, 10);
	displayList(list1);
	printf("delete Node 1 :\n");
	delete(list1, 1);
	displayList(list1);
	Node *node = getNode(list1, 7);
	printf("The getNode result: %d\n", node->data);
	printf("delete getNode :\n");
	delete(list1,node->data);
	displayList(list1);

	return 0;
}
