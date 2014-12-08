//#include "listFunc.h"
#include "node.h"

int main()
{

	addNode(1);
	addNode(2);
	addNode(3);
	printNode();
	printf("\n");

	deleteNode(2);
	printNode();
	printf("\n");

	addNode(4);
	printNode();
	printf("\n");

	modifyNode(3, 33);
	printNode();

	return 0;
}
