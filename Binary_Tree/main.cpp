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
	tree_node *tmp_node = new tree_node();
	if(this->is_empty()) {
		this->root->data = val;
	}
	else {
		if(this->root->data > val)
		{
			//go right
			tmp_node->data = val;
			tmp_node->right = root->right;
			while(tmp_node->right != NULL){
				tmp_node = tmp_node->right;
			}

		}
	}
}

int main() {
	int value;
	binary_tree my_tree;
	my_tree.add_node(20);
	if (my_tree.is_empty()) {
		cout << "TREE IS EMPTY." << endl;
	}
	
	cin >> value;

	return 0;
}