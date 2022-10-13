#include <iostream>
#include <map>
struct node { int value; struct node* left; struct node* right; };

class BST
{
public:
	BST(int value);
	~BST();
	void insert_integer_recursive(int value);
	void insert_integer_loop(int value);
	void print_tree();
	int most_common_integer();
	int largest_integer();
	int sum_of_all_integers();
	
protected:
	enum class dir { left, right };
	std::map<int, int> map;
	node* root;
	void insert_integer_recursion(node* node, int value);
	void add_node(dir dir, node* source, node* dest);
	void print_tree_recursion(node* node);
	void terminate_tree(node* node);
	node* create_node(int value);
	int largest_integer_recursion(node* node);
};

