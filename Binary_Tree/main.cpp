#include <iostream>

using namespace std;

class tree_node {
public:
	tree_node *left;
	tree_node *right;
	int data;
	tree_node();
};

tree_node::tree_node() {
	left = NULL;
	right = NULL;
	data = 0;
}

class binary_tree {
public:
	tree_node *root;
	bool is_empty();
	void add_node(int);
	binary_tree();
};

binary_tree::binary_tree() {
	root = new tree_node();
}

bool binary_tree::is_empty(){
	if (this->root->left == NULL && this->root->right == NULL) {
		return true;
	}
	return false;
}

void binary_tree::add_node(int val) {

}

int main() {
	int value;
	binary_tree my_tree;
	if (my_tree.is_empty()) {
		
	}
	cin >> value;

	return 0;
}