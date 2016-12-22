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
	
		printf("Successfully added %d as root...\n", data);	
		return node;
	}

	if(data == node -> data){
		printf("Element is already stored in BST...\n");
		return NULL;
	}

	if(data > node -> data){
		node -> rightChild = add(node -> rightChild, data);
	}
	else{
		node -> leftChild = add(node -> leftChild, data);
	}
		
	return node;
}

//pass in the root as node
//0 upon failure, 1 on success
int contains(Node* node, int data){

	if(NULL == node)
		return 0;

	if(node -> data == data)
		return 1;
	
	if(data > node -> data){
		return contains(node -> rightChild, data);
	}
	else{
		return contains(node -> leftChild, data);
	}

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
