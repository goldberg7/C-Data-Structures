#ifndef BINSEARCHTREE_H_
#define BINSEARCHTREE_H_


typedef struct TreeNode{

	int data;
	struct TreeNode* leftChild;
	struct TreeNode* rightChild;

}Node;

typedef struct Tree{

	int size;
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
int add		 (Tree* tree, int data);
Node* add_helper (Node* node, int data); 	 
void* remove	 (Tree* tree, int data);
int contains	 (Tree* tree, int data);
/*
Node* subset	 (int low, int high);
int rebalance    (Tree* tree);
int get_size     (Tree* tree);
*/

#endif
