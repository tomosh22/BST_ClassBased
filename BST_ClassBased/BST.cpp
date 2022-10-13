#include "BST.h"

BST::BST(int value) {
	root = create_node(value);
}

BST::~BST() {
	terminate_tree(root);
}

void BST::insert_integer(int value) {
	insert_integer_recursion(root, value);
}

void BST::insert_integer_recursion(node* node, int value) {
	if (value > node->value) {
		if (node->right == nullptr) {
			//struct node* newNode = create_node(value);
			//node->right = newNode;
			add_node(dir::right, node, create_node(value));
			return;
		}
		insert_integer_recursion(node->right, value);
	}
	else {
		if (node->left == nullptr) {
			//struct node* newNode = create_node(value);
			//node->left = newNode;
			add_node(dir::left, node, create_node(value));
			return;
		}
		insert_integer_recursion(node->left, value);
	}
}

void BST::add_node(dir dir, node* source, node* dest) {
	switch (dir) {
	case dir::left:
		source->left = dest;
		break;
	case dir::right:
		source->right = dest;
		break;
	}
	return;
}

void BST::terminate_tree(node* node) {
	if (node->left != nullptr) {
		terminate_tree(node->left);
	}
	if (node->right != nullptr) {
		terminate_tree(node->right);
	}
	delete node;
}

void BST::print_tree() {
	print_tree_recursion(root);
}

void BST::print_tree_recursion(node* node) {
	if (node->left != nullptr) {
		print_tree_recursion(node->left);
	}
	std::cout << node->value << "\n";
	if (node->right != nullptr) {
		print_tree_recursion(node->right);
	}
}
node* BST::create_node(int value) {
	struct node* newNode = new node;
	newNode->value = value;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}