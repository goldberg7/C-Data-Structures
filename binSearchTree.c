#include "binSearchTree.h"
#include <stdio.h>
#include <stdlib.h>

int initialize_tree(Tree* tree){
	
	if(NULL == tree){
		printf("Tree not properly allocated...\n");
		return -1;
	}
	
	tree -> root = NULL;

	printf("Tree initialized...\n");
	return 0;
}

Node* add(Node* node, int data){

	//empty tree if root is null
	if(NULL == node){
		//tree root
		node = malloc(sizeof(Node));
		node -> data = data;
		
		node -> leftChild = NULL;
		node -> rightChild = NULL;
		
		return node;
	}

	if(data > node -> data){
		node -> rightChild = add(node -> rightChild, data);
	}
	else{
		node -> leftChild = add(node -> leftChild, data);
	}
	
	return node;
}

int contains(Tree* tree, int data){
	return 0;
}
//in-order recursive tree traversal
void print_tree(Node* root){
	
	if(NULL == root){
		return;
	}
	
	print_tree(root -> leftChild);
	printf("%d ", root -> data);
	print_tree(root -> rightChild);

//	printf("\n");
}
