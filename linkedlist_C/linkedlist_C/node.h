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
NODE*	pSEARCH	= NULL;

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
	pSEARCH = pHEAD;
	while (pSEARCH != NULL)
	{
		printf("%d\n", pSEARCH->val);
		pSEARCH = pSEARCH->next;
	}
}

void deleteNode(int _val)
{
	pDELETE = pHEAD;
	pSEARCH = pHEAD;
	while (pDELETE != NULL)
	{
		if (pDELETE->val == _val)
		{
			if (pDELETE == pHEAD)
			{
				pSEARCH = pDELETE->next;
				pHEAD = pSEARCH;
			}
			else 
			{
				pSEARCH->next = pDELETE->next;
			}
			
			pDELETE->next = NULL;
			break;
		}
		pSEARCH = pDELETE;
		pDELETE = pDELETE->next;
	}

	if (pDELETE == NULL) { printf("no search value!!!\n"); }
	else { free(pDELETE); }
}

void modifyNode(int _ori, int _val)
{
	pSEARCH = pHEAD;
	while (pSEARCH != NULL)
	{
		if (pSEARCH->val == _ori)
		{
			pSEARCH->val = _val;
			pSEARCH = NULL;
			break;
		}
		pSEARCH = pSEARCH->next;
	}

	if (pSEARCH != NULL) { printf("no search value!!!\n"); }
}