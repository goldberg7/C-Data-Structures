#ifndef BINSEARCHTREE_H_
#define BINSEARCHTREE_H_


typedef struct TreeNode{

	int value, height, balanceFactor;
	struct TreeNode* leftChild;
	struct TreeNode* rightChild;

}Node;

typedef struct Tree{

	int elements, rebalanceThreshold, isBalanced;
	Node* root;
	Node* node_list;

}Tree;

//methods for Node operations
Node* get_left 	(Node* node);
Node* get_right	(Node* node)
int set_left	(Node* node);
int set_right	(Node* node); 
int get_height  (Node* node);
int set_height  (Node* node);
int get_balance (Node* node);
int set_balance (Node* node);

//methods for Tree operations
int initialize_tree();
int add		 (Node* node);
int remove	 (Node* node);
int contains_node(Tree* tree);
int contains_val (int val);
Node* subset	 (int low, int high);
int rebalance    (Tree* tree);
int get_size     (Tree* tree);


#endif
