#include <stdio.h>

typedef struct node
{
	int val;
	struct node* node;
} NODE;

NODE*	newNode;
NODE*	pHEAD;

/*
* ADD, PRINT, DELETE, MODIFY
*/

void addNode(int _val)
{
	newNode = (NODE*)malloc(sizeof(NODE));
	newNode->val = _val;
	newNode->node = NULL;
	pHEAD = newNode;
}

void printNode()
{
	printf("%d\n", pHEAD->val);
}

void deleteNode()
{

}

void modifyNode()
{

}