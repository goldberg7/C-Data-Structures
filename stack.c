#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/**
* Stack constructor method, set up the head of the list and begin count of items
*
*@param stack - pointer to dynamically allocated stack
*@return 0 on success, -1 on failure	
*/
int initialize(Stack* stack){

	if(NULL == stack){
		printf("Could not initialize stack...\n");
		return -1;
	}
	
	printf("Stack initialized...\n");
	stack -> head = NULL;
	stack -> num_items = 0;

	return 0;
}

/**
* Method to get the number of items stored in the stack
*
*@param stack - pointer to dynamically allocated stack
*@return number of items
*/
int size(Stack* stack){

	return stack -> num_items;

}

/**
* Method to push an item onto the top of the stack
* In this case, the LIFO structures maintains the
* order as a linked list with the head as the top
* of the stack

*@param stack - stack to push onto
*@param item  - item to push onto top of the stack
*@return -1 on failure, 0 on success
*/
int push(Stack* stack, void* data){

	if(NULL == stack){
		printf("Can't push to unitialized stack...\n");
		return -1;
	}
	
	Stack_Item* item = malloc(sizeof(Stack_Item));
	item -> data = data;
	item -> next = stack -> head;

	stack -> head = item;
	stack -> num_items++;	

	return 0;

	//TODO: work on refactoring size of stack when too many items

}

/**
* Method to pop the data item from the top of the stack
*@param stack - stack with head node to be popped
*@return the data of the popped item
*/
void* pop(Stack* stack){

	if(NULL == stack || NULL == stack -> head){
		printf("Cannot remove item from an empty stack...\n");
		return NULL;
	}	
	
	void* data = stack -> head -> data;
	Stack_Item* item = stack -> head -> next;
	free(stack -> head);
	stack -> head = item;
	stack -> num_items--;
	return data;
	
}

/**
* Method to get the item at the top of the stack without removing it
*@param stack - stack with head node to be peeked
*@return data of item at top of the stack 
*/
void* peek(Stack* stack){
	if(NULL == stack || NULL == stack -> head){
		printf("No elements in the stack to peek...\n);
		return NULL;
	}

	return stack -> head -> data;

}
