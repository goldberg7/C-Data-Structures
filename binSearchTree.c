#include "binSearchTree.h"
#include <stdio.h>
#include <stdlib.h>

int initialize_tree(Tree* tree){
	
	if(NULL == tree){
		printf("Tree not properly allocated...\n");
		return -1;
	}
	
	tree -> root = NULL;
	tree -> size = 0;

	printf("Tree initialized...\n");
	return 0;
}

int add(Tree* tree, int data){

	if(NULL == tree){
		printf("Cannot add to uninitialized tree...\n");
		return -1;
	}

	if(contains(tree, data){
		printf("Cannot have duplicate keys in BST...\n");
		return -2;
	}

	tree -> root = add_helper(tree -> root, data);
	tree -> size++;
	
	return 0;

}

Node* add_helper(Node* node, int data){

	//empty tree if root is null
	if(NULL == node){
		//tree root
		node = malloc(sizeof(Node));
		node -> data = data;
		
		node -> leftChild = NULL;
		node -> rightChild = NULL;

		return node;
	}

	//Add data to right half of BST
	if(data > node -> data){
		node -> rightChild = add_helper(node, data);
		return node;
	}
	else{
		node -> leftChild = add_helper(node, data);
		return node;
	}

}


