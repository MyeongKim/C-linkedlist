#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int val;
	struct node* next;
} NODE;

NODE*	newNode	= NULL;
NODE*	pHEAD	= NULL;
NODE*	pDELETE	= NULL;

void addNode(int _val)
{
	
	newNode = (NODE*)malloc(sizeof(NODE));
	newNode->val = _val;
	
	if (pHEAD == NULL) { newNode->next = NULL; }
	else { newNode->next = pHEAD; }

	pHEAD = newNode;
	
}


void printNode()
{
	NODE* searchNODE = pHEAD;
	while (searchNODE != NULL)
	{
		printf("%d\n", searchNODE->val);
		searchNODE = searchNODE->next;
	}
}

void deleteNode(int _val)
{
	NODE* searchNODE = pHEAD;
	while (searchNODE != NULL)
	{
		if (searchNODE->val == _val)
		{
			pHEAD->next = searchNODE->next;
			searchNODE->next = NULL;
			pDELETE = searchNODE;

			break;
		}

		pHEAD = searchNODE;
		searchNODE = searchNODE->next;
	}

	if (pDELETE == NULL)
	{
		printf("no search value!!!\n");
	}
	else
	{
		free(pDELETE);
	}
}

void modifyNode()
{

}