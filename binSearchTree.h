#ifndef BINSEARCHTREE_H_
#define BINSEARCHTREE_H_


typedef struct TreeNode{

	int data;
	struct TreeNode* leftChild;
	struct TreeNode* rightChild;

}Node;

typedef struct Tree{

	Node* root;

}Tree;

/*
int get_height  (Node* node);
int set_height  (Node* node);
int get_balance (Node* node);
int set_balance (Node* node);
*/
//methods for Tree operations
int initialize_tree(Tree* tree);
Node* add	 (Node* node, int data); 	 
void remove_value (Tree* tree, int data);
int contains	 (Tree* tree, int data);
void print_tree  (Node* node);

/*
Node* subset	 (int low, int high);
int rebalance    (Tree* tree);
int get_size     (Tree* tree);
*/

#endif
