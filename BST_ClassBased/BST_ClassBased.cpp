#include <iostream>
#include "BST.h"
int main()
{
    int values[] = { 0,5,1,9,2,8,3,7,4,6 };
    BST bst(values[0]);
	for (int x = 1; x < 10; x++)
	{
		bst.insert_integer(values[x]);
	}
	bst.print_tree();
	return 0;
}
