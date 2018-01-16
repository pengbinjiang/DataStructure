#include "tree.h"

int main(int argc,char **argv){
    //char arr[][3] = {{'a','b','c'}
//		     {'d','e','f'}
//		     {'g','h','i'}}
    char arr[][3] = {{1,2,3}
		     {4,5,6}
		     {7,8,9}};
    Node *T = (Node *)malloc(sizeof(Node));
    createTree(T,*arr,4);
    PerOrder(T); 
    return 0;
}
