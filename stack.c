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
	
	printf("Stack initialize...\n");
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

@param stack - stack to push onto
@param item  - item to push onto top of the stack
*/
void push(Stack* stack, void* data){

	if(stack -> numItems == 0){
		printf("Empty Stack...\nAdding first element\n");
		stack -> head = item;
		stack -> num_items++;
		return;
	}
	/*
	printf("Pushing onto stack...\n");
	item -> next = stack -> head;
	stack -> head = item;
	stack -> num_items++;
	*/
	printf("Total items in stack: %d\n, stack -> num_items);

	//TODO: work on refactoring size of stack when too many items

}


Stack_Item* pop(Stack* stack){

	if(NULL == stack || stack -> num_items == 0){
		printf("Cannot remove item from an empty stack...\n");
		return NULL;
	}	

	Stack_Item* item stack -> head;
	//make sure to free item
	
}
