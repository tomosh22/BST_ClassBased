#include <iostream>
struct node { int value; struct node* left; struct node* right; };

class BST
{
public:
	BST(int value);
	~BST();
	void insert_integer(int value);
	void print_tree();
	
protected:
	enum class dir { left, right };
	node* root;
	void insert_integer_recursion(node* node, int value);
	void add_node(dir dir, node* source, node* dest);
	void print_tree_recursion(node* node);
	void terminate_tree(node* node);
	node* create_node(int value);
};

