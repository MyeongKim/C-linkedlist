#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node* node;
} NODE;

NODE*	newNode	= NULL;
NODE*	pHEAD	= NULL;

void addNode(int _val)
{
	
	newNode = (NODE*)malloc(sizeof(NODE));
	newNode->val = _val;
	
	if (pHEAD == NULL) { newNode->node = NULL; }
	else { newNode->node = pHEAD; }

	pHEAD = newNode;
	
}


void printNode()
{
	while (pHEAD != NULL)
	{
		printf("%d\n", pHEAD->val);
		pHEAD = pHEAD->node;
	}
}

void deleteNode()
{

}

void modifyNode()
{

}