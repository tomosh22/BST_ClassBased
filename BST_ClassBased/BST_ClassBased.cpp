#include <iostream>
#include "BST.h"
int main()
{
    int values[16] = { 0,5,1,9,2,8,3,7,4,6,6,7,8,8,8,8 };
    BST bst(values[0]);
	for (int x = 1; x < 16; x++)
	{
		bst.insert_integer_loop(values[x]);
	}
	bst.print_tree();
	std::cout << "most common int " << bst.most_common_integer() << '\n';
	std::cout << "largest int " << bst.largest_integer() << '\n';
	return 0;
}
